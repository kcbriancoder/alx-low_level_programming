#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
char charType;
int intType;
long int longintType;
long long longlongType;
float floatType;
printf("Size of a char: %zu bytes\n", sizeof(charType));
printf("Size of an int: %zu bytes\n", sizeof(intType));
printf("Size of a long int %zu bytes\n", sizeof(longintType));
printf("Size of a long long %zu bytes\n", sizeof(longlongType));
printf("Size of a float %zu bytes\n", sizeof(floatType));
return (0);
}


