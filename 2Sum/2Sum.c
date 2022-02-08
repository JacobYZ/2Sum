#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	float num1, num2, sum;
	int scanf1 = 0, scanf2 = 0;
	char tmp[256];
	printf("This program adds the two numbers entered.\nExamples are as follows.\n\nPlease enter first number: -2355.442\nPlease enter second number : 89.2\n- 2355.441895 + 89.199997 = -2266.241943\n\n\n");

	printf("Please enter first number: ");
	//Loop to determine if the first input is a number
	while (1) {
		scanf1 = scanf("%f", &num1);
		if (scanf1) break;
		else {
			//When the input is not a number, the contents of the buffer are stored to tmp so that it can be read for the next loop.
			scanf("%s", &tmp);
			printf("Input error, please enter first number again: ");
		}
	};


	printf("Please enter second number: ");
	//Loop to determine if the second input is a number
	while (1) {
		scanf2 = scanf("%f", &num2);
		if (scanf2) break;
		else {
			scanf("%s", &tmp);
			printf("Input error, please enter second number again: ");
		}
	};

	sum = num1 + num2;
	printf("%f + %f = %f \n", num1, num2, sum);
	return 0;
}