#include <stdio.h>
/**
 *main - entry point
 *Description: Print lower and upper case a-z
 *Return : Return
 */
int main(void)
{
	char ch;

	for (ch ='a'; ch <= 'z'; ch++)
		putchar(ch);
	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
