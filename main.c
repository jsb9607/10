#include <stdio.h>
#include <stdlib.h>

#if 1
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
#else
void swap(int a, int b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}
#endif


int main(int argc, char *argv[]) {

	int a = 3;
	int b = 5;

	#if 1
	swap(&a, &b);
	#else	
	swap(a, b);
	#endif
	
	printf("a : %i, b : %i\n", a, b);
	
	return 0;
}

