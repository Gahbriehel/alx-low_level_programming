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
	int i = n%10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (i > 5)
	{
		printf("The last digit of %d is %d and isn greater than 5\n", n, i);
	}
	else if (i == 0)
	{
		printf("The last digit of %d is %d and is 0\n", n, i);
	} else
	{
		printf("The last digit of %d is %d and is less than 6 and not 0\n", n, i);
	}
	return (0);
}
