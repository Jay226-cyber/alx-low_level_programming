#include <stdio.h>
#include <stdlib.h>
/**
 * main - A program that prints all numbers 00-99
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 0; n <= 89; n++)
	{
		putchar((n / 10) + '0');
		putchar((n % 10) + '0');
		if (num != 89)
		{
		putchar(',');
		putchar(' ');
		}
		}
	putchar('\n');
	return (0);
}
