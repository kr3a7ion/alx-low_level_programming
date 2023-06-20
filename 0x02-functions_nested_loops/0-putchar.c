#include <unistd.h>

/**
 * main - prints _putchar
 *
 * Description: prints _putchar
 *
 * Return: 0 (Success)
 */


int main(void)
{
	char string[] = "_putchar\n";
	write(1, string, sizeof(string) - 1);

	return (0);
}
