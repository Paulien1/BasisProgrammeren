


#include <stdio.h>


int main(void) {

	int a;
	int b; 
	int c;

	a = 10;
	b = 20;

	printf("Voer een heel getal in..");
	scanf_s("%d", &b);

	c = a * b;

	if (b > 9) {

		printf("het ingevoerde getal is groter dan 9\n");

	}
	else {}
	printf("Programmeren is %d leuk! %d \n" , a, b);
	printf("A keer B is: %d", c);

	return 0;
}

