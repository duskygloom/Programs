#include <stdio.h>

int main()
{
	int a, b;
	printf("Number A: ");
	scanf("%d", &a);
	printf("Number B: ");
	scanf("%d", &b);

	int dvdend = a;
	int gcd, dvsor;					// considering a / b
	gcd = dvsor = b;
	int rmder = dvdend % dvsor ;	// any non-zero value

	while (rmder != 0) {
		rmder = dvdend % dvsor;
		dvdend = dvsor;
		gcd = dvsor;
		dvsor = rmder;
	}

	printf("GCD of %d and %d: %d\n", a, b, gcd);
	return 0;
}

