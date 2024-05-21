#include <stdio.h>

int main(void) {
	int i = 2;

	printf("\ni = %d", i);
	printf("\n2+(++i) =%d", 2+(++i)); //5
	printf("\ni = %d", i); //3

	i = 2;
	
	printf("\ni = %d", i);
	printf("\n2+(i++) =%d", 2+(i++)); //4
	printf("\ni = %d", i); //3
}