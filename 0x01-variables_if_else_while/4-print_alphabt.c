#include <stdio.h>

/**
 * main - Prints alphabets without e and q
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)

	{
		if (alphabet == 'e' || alphabet == 'q')
			continue;
		putchar (alphabet);
	}
	putchar ('\n');

	return (0);
}
