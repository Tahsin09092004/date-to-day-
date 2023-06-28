#include<stdio.h>
int main()
{
    int day,year,n, r1, r2, r3, r4;
    int month[]= {1,4,4,0,2,5,0,3,6,1,4,6};
    printf("Enter Your Day/Month/year(Exp:9/9/2004): ");
    scanf("%d/%d/%d", &day, &n, &year);
    r1=year-1900;
    r2=(r1/4);
    if(r1%4==0 && n<3)
    {
        r3=r1+(r2-1)+day+month[n-1];

    }
    else
    {
        r3=r1+r2+day+month[n-1];
    }
    r4=r3%7;

    switch(r4)
    {

    case 0:
    {
        printf("Saturday");
        break;
    }
    case 1:
    {
        printf("Sunday");
        break;
    }
    case 2:
    {
        printf("Monday");
        break;
    }
    case 3:
    {
        printf("Tuesday");
        break;
    }

    case 4:
    {
        printf("Wednesday");
        break;
    }
    case 5:
    {
        printf("Thursday");
        break;
    }
    case 6:
    {
        printf("Friday");
        break;
    }
    }

getch();
    return 0;
}
