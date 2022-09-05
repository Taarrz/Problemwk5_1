#include<stdio.h>
long factorial(int);
int main()
{
    int num;
    long fact;
    printf("Enter a number: ");
    scanf_s("%d", &num,sizeof(num));

    fact = factorial(num);
    printf("%d! = %ld", num, fact);
    return 0;
}

long factorial(int n)
{
    if (n == 0)
        return 1;
    else
        return(n * factorial(n - 1));
}