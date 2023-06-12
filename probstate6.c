#include<stdio.h>
int main()
{
    double c , f;
    printf("Enter temperature in fahrenheit: ");
    scanf("%lf",&f);

    c= 5*(f-32)/9;
    printf("Temperature in celcius is:%.2lf",c);

    getch();
    return 0;
}
