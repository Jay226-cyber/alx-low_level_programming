#include <stdio.h>

/**
 * main- Entry point
 * @void: Null value
 *
 * Description: Print numbers from 01 to 89
 * Return: Zero value
 */

int main(void)
{
	int n;

	for (n = 01; n <= 89; n++)
	{
		putchar((n / 10) + '01');
		putchar((n % 10) + '01');
		if (n != 89)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
