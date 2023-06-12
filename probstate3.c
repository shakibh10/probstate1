#include <stdio.h>
int main()
{
    int a ,b, sum=0;
    printf("Enter two integer: ");
    scanf("%d %d",&a,&b);

    sum=a + b;
    printf("The sum of two integer is: %d",sum);

    getch();
    return 0;
}
