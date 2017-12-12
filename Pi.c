#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long double	Pi(int precision)
{
	long double x1 = precision;
	long double x2 = precision - 1;
	long double y1 = 0;
	long double y2 = sqrtl(powl(precision, 2) - powl(x2, 2));
	long double nb = 0;

	while (x2 >= 0)
	{
		nb = nb + sqrtl(powl(x2 - x1, 2) + powl(y2 - y1, 2));
		x1 = x2;
		x2--;
		y1 = y2;
		y2 = sqrtl(powl(precision, 2) - powl(x2, 2));
	}
	return (2 * nb / precision);
}

int			main(int argc, char **argv)
{
	if (argc == 2)
		printf("Pi = %.15Lf\n", Pi(atoi(argv[1])));
	return (0);
}
