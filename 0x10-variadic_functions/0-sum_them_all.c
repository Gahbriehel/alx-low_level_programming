#include "variadic_functions.h"
#include <stdarg.h>

/*
* sum_them_all: returns the sum of all arguments
* @n: the numb er of arrguments passed to the function
* @...: the number of parameters passed to be calculated
*
* Return: if n == 0 return 0
*	else return the sum of all arguments
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list myNumbers;
	unsigned int i, sum;

	va_start(myNumbers, n);

	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(myNumbers, int);

	va_end(myNumbers);

	return (sum);
}
