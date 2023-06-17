#include <stdio.h>

/**
 * main - Single digit numbers of base 10 starting from 0
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int SingleNumBaseTen;

	for (SingleNumBaseTen = 0; SingleNumBaseTen < 10; SingleNumBaseTen++)
	{
		putchar ((SingleNumBaseTen % 10) + '0');
	}
	putchar('\n');

	return (0);
}
