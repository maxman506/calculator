#include <stdio.h>
#include "functions.h"

int main() {
	char option;
	int num;

	printf("Selection the operation bellow:\n");
	printf("a) Sum\n");
	printf("b) Product\n\n");

	printf("Option: ");
	scanf("%c", &option);

	switch(option) {
		case 'a':
			printf("The sum of numbers is: %d\n", addNumbers(num));
			break;
	}

	return 0;
}
