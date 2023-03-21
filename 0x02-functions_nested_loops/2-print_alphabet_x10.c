#include "main.h"

/**
 * print_alphabet - check the code for ALX School students.
 *
 * Return: Always 0.
 */

void print_alphabet(void)
{
	char alp = 'a';

	while (alp <= 'z')
	{
		_putchar (alp);
		alp++;

	}
	_putchar ('\n');

#include "main.h"

/**
 * print_alphabet_x10 - func
 *
 * Return - 0
 */
void print_alphabet_x10(void)
{

  for (int i=0; i<11;i++)
    {
      print_alphabet();
    }
  _putchar ('\n');
}
