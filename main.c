#include<stdio.h>
#include"mymath.h"

int main()
{
	int a = 10, b = 5;
	int c = add(a,b);
	printf("%d\n",c);
	
	int d = subtract(a,b);
	printf("%d\n",d);
	

	printf("Hello from master\n");
	int e = multiply(a,b);
	printf("%d\n",e);
	
	int f = divide(a,b);
	printf("%d\n",f);

	
	return 0;

}
