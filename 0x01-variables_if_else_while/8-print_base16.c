#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char digits;
	char alphabet;


	for (digits = '0'; digits <= '9'; digits++)
	{
	putchar(digits);
	}

	for (alphabet = 'a'; alphabet <= 'f'; alphabet++)
	{
	putchar(alphabet);
	}

	putchar('\n');

	return (0);

}
