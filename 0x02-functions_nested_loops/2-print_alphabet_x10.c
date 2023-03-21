#include "main.h"

/**
 * print_alphabet_x10 - func
 *
 * Return - 0
 */
void print_alphabet_x10(void)
{
  int i=0;
  while(i<11)
    {
      char alp='a';
      	while (alp <= 'z')
	{
		_putchar (alp);
		alp++;

	}
	_putchar ('\n');
	i++;
    }
}
