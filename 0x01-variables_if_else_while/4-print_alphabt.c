#include <stadio.h>
/**
 * main - Entry Point
 *
 * Return: Always 0 on Success
 */

int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		if (alphabet == 'q')
			continue;
		else if (alphabet == 'e')
			continue;

		putchar(alphabet);
	}

	putchar('\n');

	return (0);
}
