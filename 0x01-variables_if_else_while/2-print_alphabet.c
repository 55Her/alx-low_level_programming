#include <stdlib.h>
#include <time.h>
#include <stdio.h>

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

if  (n % 10 > 5)
{printf("last digit of %1 is %1 and is greater than 5\n", n, n %10);
}
else if (n % 10 == 0)
	}
