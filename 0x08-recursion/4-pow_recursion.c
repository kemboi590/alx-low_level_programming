#include "main.h"
/**
  *_pow_recursion - function that finds the power of a number
  *@x : base
  *@y : desired power
  *Return: x raised to y
**/

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y == 1)
		return (x);
	return (x * _pow_recursion(x, y - 1));
}
