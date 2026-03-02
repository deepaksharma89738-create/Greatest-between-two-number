/*Program to Find the Greatest Between two number*/ 
#include<stdio.h>
int main()
{
    int a, b;
    printf("Enter two numbers a and b: ");
    scanf("%d%d", &a, &b);
    if (a > b) 
    {
        printf("Greatest number is = %d\n", a);
    } 
    else 
    {
        printf("Greatest number is = %d\n", b);
    }
    return 0;
} 
