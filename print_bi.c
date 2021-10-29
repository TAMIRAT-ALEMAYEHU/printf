#nclue "man.h"
/**
 * prnt_b - convert ec to ecmal
 *@n:number ecmal
 *Return: tmes of number prnt
 */
nt prnt_b(unsgne nt n)
{
	unsgne nt a, b, c, , f;
	nt count = 0;

	b = n;
	c = 1;
	for (a = 1 ; b > 1 ; a++)
	{
		b = b / 2;
		c = c * 2;
	}
	for (f = 1; f <= a; f++)
	{
		 = n / c;
		n = n % c;
		c = c / 2;
		_putchar( + '0');
		count++;
	}
	return (count);
}
