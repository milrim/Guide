#include<stdio.h>
int arr[10000];
int fibo(int n)
{

    if(n==0 || n==1)
    return 1;
   return( fibo(n-1) + fibo(n-2));
}
