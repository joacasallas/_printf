#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	_printf("%K\n");
	printf("%K\n");
_printf("%");
printf("%");
_printf("Let's try to printf a simple sentence.\n");
printf("Let's try to printf a simple sentence.\n");
_printf("Negative:[%d]\n", -762534);
printf("Negative:[%d]\n", -762534);
_printf("Character:[%c]\n", 'H');
printf("Character:[%c]\n", 'H');
_printf("String:[%s]\n", "I am a string !");
printf("String:[%s]\n", "I am a string !");
_printf("Percent:[%%]\n");
printf("Percent:[%%]\n");
_printf("Percent:[%!]\n");
printf("Percent:[%!]\n");


return (0);
}
