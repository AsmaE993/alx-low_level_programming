#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if(n > 0)
       	{
		printf("%d is a positive number\n", n);
	}

	else if(n == 0) 
	{
		printf("n value = zero\n");
	}

	else(n < 0);
	{
		printf("%d is a negative number\n", n);
	}

	return (0);
}
