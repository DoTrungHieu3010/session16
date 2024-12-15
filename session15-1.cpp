#include <stdio.h>
int main(){
	int index[] = {1, 2, 3};
	int *p = index; 
	int x = index[1];
	printf("x = %d\n", x);
	int y = *(p + 1);
	printf("y = %d\n", y);
	return 0;
}
