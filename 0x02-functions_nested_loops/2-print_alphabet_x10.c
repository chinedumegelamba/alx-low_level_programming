#include "main.h"

/**
 * print_alphabet_10 - function to print abc 10 times
 *
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int c = 0;
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
