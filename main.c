#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

	int i;
	int grade[5];
	int sum = 0;
	int *ptr;

	ptr = grade;

	for(i=0; i<5; i++)
	{
		printf("input value (%d) : ", i);
		scanf("%d", &grade[i]);
	}

	for(i=0; i<5; i++)
	{	
		printf("grade[%d] = %d\n", i, grade[i]);
		sum += *(ptr+i);
	}

	printf("average : %d\n", sum/5);
	
	return 0;
}


