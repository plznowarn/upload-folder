#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
int get_integer(void);
int power(int x, int y);

int main() {
	int a , b;
	a = get_integer();
	b = get_integer();
	printf("%d의 %d승은 %d 입니다.", a, b, power(a, b));
	return 0;

}

int get_integer(void) {
	int n;
	printf("정수를 입력하시오:");
	scanf("%d", &n);
	return n;
}

int power(int x, int y) {

	int i;
	long result = 1;

	for (i = 0; i < y; i++) {
		result *= x;
	}
	return result;
}
*/

/*void main() {
	int i;
	int grade[5] = { 31,63,62,87,14 };

	for (i = 0;i < 5;i++)
		printf("grade[%d]=%d\n", i, grade[i]);
}*/

struct point {
	int x;
	int y;
};

int main() {
	
	struct point p1 = { 10,20 };
	struct point p2 = { 30, 40 };
	
	p2 = p1;
	/*if (p1 == p2)
		printf("p1과 p2가 같습니다.");*/


	if ((p1.x == p2.x) && (p1.y == p2.y))
		printf("p1과 p2가 같습니다.");
	return 0;

}