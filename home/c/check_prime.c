#include <stdio.h>
#include <math.h>

// checks if n is prime

int main()
{
	int n, i, root_ceil, is_prime;
	printf("Number: ");
	scanf("%d", &n);

	if (n < 2) {
		printf("Not prime.\n");
		return 0;
	}

	root_ceil = sqrt(n) + 1;
	is_prime = 1;

	for (i=2; i<root_ceil; ++i) {
		if (n % i == 0) {
			is_prime = 0;
			break;
		}
	}

	if (is_prime) printf("Prime.\n");
	else printf("Not prime.\n");

	return 0;
}

