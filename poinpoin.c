#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i = 10;
	char c = 'a';
	
	int *iptr = &i;
	char *cptr = &c;
	int *iptr2;
	iptr = iptr2;
	
	pritf("i : %p\n%p (size:%i)\n", iptr, &i, sizeof(iptr));
	
	
	return 0;
}
