#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a,b,sub,sum;
   printf("Enter a?:");
   scanf("%d",&a);
   printf("Enter b?:");
   scanf("%d",&b);
   a=a+b;
   b=a-b;
   a=a-b;
   printf("the number a is :%d\n",a);
   printf("the number b is:%d\n ",b);
    return 0;
}
