#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	float num1, num2, sum;
	int scanf1 = 0, scanf2 = 0;
	char c[256];
	printf("Enter first number: ");
	while (1) {
		scanf1 = scanf(" %f", &num1);
		if (scanf1) break;
		else {
			scanf("%s", &c);
			printf("Enter first number again: ");
		}
	};


	printf("Enter second number: ");
	while (1) {
		scanf2 = scanf(" %f", &num2);
		if (scanf2) break;
		else {
			scanf("%s", &c);
			printf("Enter second number again: ");
		}
	};

	sum = num1 + num2;
	printf("Sum of the entered numbers: %f", sum);
	return 0;
}