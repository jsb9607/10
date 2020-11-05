#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {

	int i = 10;
	char c = 69;
	float f = 12.3;

	printf("i : %i	%p \n", i, &i);
	printf("c : %c	%p \n", c, &c);
	printf("f : %f	%p \n", f, &f);
		
	return 0;
}

