#include <stdio.h> // Include the necessary header file

int _putchar(char c); // Declare the _putchar function

/**
 * main - Entry point of the program
 * Return: 0 on successful execution
 */
int main(void)
{
    _putchar('_');
    _putchar('p');
    _putchar('u');
    _putchar('t');
    _putchar('c');
    _putchar('h');
    _putchar('a');
    _putchar('r');
    _putchar('\n');

    return 0;
}

int _putchar(char c)
{
    return putchar(c); // Implement the _putchar function (this uses the putchar function from stdio.h)
}

