#include "main.h"

/**
  *factorial - function that returns the factorial of a number
  *@n : input integer digit
  *Return: The factorial of the input digit
**/

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
