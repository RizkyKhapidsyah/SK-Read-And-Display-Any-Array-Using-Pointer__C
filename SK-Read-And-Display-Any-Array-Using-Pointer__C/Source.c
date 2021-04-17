#pragma warning(disable:4996)

#include <stdio.h>
#include <conio.h>

int main() {
	int no[5];
	int* ptr;
	ptr = no;
	int i;

	for (i = 0; i < 5; i++) {
		printf("\n Enter any no : ");
		scanf("%d", ptr);
		ptr++;
	}

	ptr = no;

	for (i = 0; i < 5; i++) {
		printf(" %d ", *ptr);
		ptr++;
	}

	_getch();
	return 0;
}