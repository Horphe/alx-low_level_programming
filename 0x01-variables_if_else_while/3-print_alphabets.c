#include <stdio.h>
/**
 *main - Entry point
 *Description: Print lower and upper case a-z
 *Return : Return the value (0)
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
