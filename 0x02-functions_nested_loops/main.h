#include <unistd.h>

/**
 * _putchar writes the character c to stdout
 * The character to print
 *
 * Return: On success 1.
 */

void _putchar()
{
	char str[] = "_putchar\n";
	write(1, str, sizeof(str) - 1);	
}
