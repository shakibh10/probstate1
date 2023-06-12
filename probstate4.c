#include <stdio.h>
int main()
{
    float a ,b, multi;
    printf("Enter two floating number: ");
    scanf("%f %f",&a,&b);

    multi=a*b;
    printf("The multi is: %.2f",multi);

    getch();
    return 0;

}
