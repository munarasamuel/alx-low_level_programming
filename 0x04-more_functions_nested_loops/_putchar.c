#include "main.h"
#include <unistd.h >
/**
  *_putchar - writes the character c to stdout
  *@c: The character to print
  *
  *Return: on screen 1.
  *On error, return -1 and errno is set appropriately.
  */
int -putchar(c)
{
	return (write(1, $c, 1));
}
