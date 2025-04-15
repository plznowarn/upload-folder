#include <stdio.h>
int main(void) {
	int num;
	printf("숫자 입력:");
	scanf_s("%d", &num);
	for (int i=0; i < num*2-1; i++) {
		for (int k = abs(num-i); k*k > 0; k--) {
			printf("          ");
		}

		printf("집가고싶다");

		for (int j = 2*i; j >0; j--) {
			printf("          ");
		}
		printf("집가고싶다");
		printf("\n");
	}
}

