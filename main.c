#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */



int main(int argc, char *argv[]) {
	int i;
	int grade[5];
	int avr;
	int *ptr;
	
	ptr = grade;
	
	for (i=0;i<5;i++)
	{
		printf("input value[%i] = ", i);
		scanf("%d", ptr+i);
	}
	
	for(i=0;i<5;i++){
		printf("grade[%d] = %d\n", i, *(ptr+i));
	}
	
	for(i=0;i<5;i++)
	{
		avr += *(ptr+i);
	}
	
	avr = avr/5;
	printf("vudrbs= %d", avr);
	
	return 0;
}
