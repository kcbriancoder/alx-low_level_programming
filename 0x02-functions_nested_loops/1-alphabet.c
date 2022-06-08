#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * main -Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
for(int x = 'a'; x <= 'z'; x++)
{
	int lower_x = tolower(x);
	putchar(lower_x);
}
}
