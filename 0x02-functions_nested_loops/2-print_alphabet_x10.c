#include "main.h"

/**
 * print_alphabet_10 - function to print abc 10 times
 *
 * Return: 0 success
 */

void print_alphabet_x10(void)
{
	print_alphabet_x10();
	return (0);

	int c;
	int i;

	for (i = 0; i <= 9; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
