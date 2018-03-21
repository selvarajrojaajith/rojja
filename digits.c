#include<stdio.h>
intgetsum(int n)
{
int sum=0;
while(n!=0)
{
sum=sum+n;
n=n\2;
}
return sum;
}
int main()
{
int n=343;
printf("%d",getsum(n));
}
