#include <stdio.h>

int main(int argc, char *argv[]) {
	int grade[5] = {10, 20, 30, 40, 50};
	int average=0;
	int *ptr;
	
	int i;
	
	ptr = grade; //pointer settings
	for (i=0;i<5;i++) //average calculation
	{
		average += ptr[i];
	}
	
	printf("average : %i\n", average);
	
	return 0;
}
