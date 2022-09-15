#include "main.h"

/**
 *  print_sign -> signs are printed if conditions are met
 *  @n: argument that has been passed
 *  Return: 1, 0 -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_Putchar('0');
		return (0);
	}
	else
	{
		_Putchar('-');
		return (-1);
	}
