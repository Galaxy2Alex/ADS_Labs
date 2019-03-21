#include <stdio.h>

int main () {
	int i;
	char b;
	short x;
	
	size_t size;
	
	size = sizeof(i);
	printf("Integer Size: %zu bytes\n", size);
	
	size = sizeof(b);
	printf("Char Size: %zu bytes\n", size);
	
	size = sizeof(x);
	printf("Short Size: %zu bytes\n", size);
	
	return 0;
}