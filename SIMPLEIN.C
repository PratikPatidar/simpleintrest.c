#include<stdio.h>
#include<conio.h>
int  main()
{
    float p,r,t,si;
    printf("enter the principal amount");
    scanf("%f",&p);
    printf("enter the rate of intrest");
    scanf("%f",&r);
    printf("enter the time period in year");
    scanf("%f",&t);
    si=(p*r*t)/100;
    printf("\nsimple intrest = %2f",si);
    getch();
    return 0;
}
