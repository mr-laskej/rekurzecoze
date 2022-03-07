

#include <stdio.h>

long faktorial(int x) {
	if (x == 1) {
		return 1;
	}
	else {
		return x * faktorial(x - 1);
	}
}

long bunky(int x) {
	if (x <= 1) {
		return 1;
	}
	else {
		return 2 * bunky(x - 1);
	}
}

long fibonacci(int x) {
	if (x <= 0) {
		return 0;
	}
	if (x == 1)
		return 1;
	else {
		return fibonacci(x - 1) + fibonacci(x - 2);
	}
}

long urok(int x) {
	int castka = 500;
	if (x <= 0) {
		return 0;
	}
	else (x == 1); {
		return urok(castka * 1.01);
	}
}

int main()
{
	printf("%d\n", fibonacci(7));
	printf("%d\n", urok(1));
}

