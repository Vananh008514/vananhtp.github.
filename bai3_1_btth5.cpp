#include "stdio.h"
#include "math.h"
float S(int n)
{
	int m=0;
	float sum=0;
	for(int i=1;i<=n;i++)
	{
		m = m + i * i;
		sum = sum + pow(-1,i+1)/m; 
	 } 
	 return sum ;
 } 
 int main()
 {int n;
 printf("Nhap N = ");
 scanf("%d",&n);
 printf("s(%d) = %10.2f",n,S(n)); 
  } 
