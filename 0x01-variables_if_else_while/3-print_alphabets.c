#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char uppercase;
	char lowercase;

	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
	{
	putchar(lowercase);
	}

	for (uppercase = 'A'; uppercase <= 'Z'; uppercase++)
	{
	putchar(uppercase);
	}

	putchar('\n');

	return (0);
}

