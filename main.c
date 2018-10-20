#include<stdio.h>
#include"mymath.h"

int main()
{
	int a = 10, b = 5;
	int c = add(a,b);
	printf("%d\n",c);
	
	int d = subtract(a,b);
	printf("%d\n",d);
	
	return 0;

}
