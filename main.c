#include <stdio.h>

int main(int argc, char *argv[]) {
	int x=10;
	int y=20;
	int *ptr;
	
	ptr=&x;
	printf("x : %i\n", *ptr);
	
	ptr=&y;
	printf("y : %i\n", *ptr);
	
	ptr=&x;
	*ptr=20;
	printf("x : %i\n", x);
	
	return 0;
}
