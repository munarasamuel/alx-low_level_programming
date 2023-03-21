#include "main.h"
/**
  *main - not defined
  *print_alphabet_x10 - Prints the alphabet 10 times.
  *Return: always 0 (Success)
  */
void print_alphabet_x10(void)
{
	int i;
	int j;

	for (i = 1; i <= 10; i++)
	{
		putchar(i);
	}
		for (j = 97; j <= 122; j++)
			{
				putchar(j);
			}
		putchar('\n');
}

