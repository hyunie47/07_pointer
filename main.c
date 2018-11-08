#include <stdio.h>

void swap(int *a, int *b)
{
	int temp;
	
	temp=*a;
	*a=*b;
	*b=temp;
	
	return;
}
	
int main(int argc, char *argv[]) {
	int x=40, y=60;
	
	swap(&x, &y);
	printf("x, y : %i, %i\n", x, y);
	
	return 0;
}
