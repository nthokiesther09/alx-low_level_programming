#include <stdlib.h>

#include <time.h>

#include <stdio.h>


/**
 * main - Prints a text according to number.
 * Return: Always (Success)
 *
 */

int main(void)
{
	char low;

	for (low = 'z'; low >= 'a'; low--)
		putchar(low);
	putchar('\n');

	return (0);
}
