/*
Recursion to find factorial of a number
n! = n * (n-1)! if n >= 1, 1 Otherwise if n =  0
*/

#include <stdio.h>

int factorial(int n)
{
	if (n >= 1)
	{
		return n * (n - 1);
	}
	else
	{
		return n;
	}
}

int main()
{
	int n = 4;
	printf("%d", factorial(n));
	return 0;
}