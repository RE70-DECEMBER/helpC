#include <stdio.h>

#include "doMath.h"

void main() {
	int num1, num2;
	char op;

	printf("enter your math problem: ");
	scanf_s("%d %c %d", &num1, &op, &num2);

	switch (op) {
	case '+':
		add(num1, num2);
	case '-':
		sub(num1, num2);
	case '/':
		div(num1, num2);
	case '*':
		mul(num1, num2);
	default:
		printf("sorry uknown operator %c", op);
	 
	}
}
