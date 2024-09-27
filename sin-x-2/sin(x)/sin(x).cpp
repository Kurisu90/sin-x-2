#include<stdio.h>
#include<math.h>
int main() {
	double y;
	int x, m;
	for (y = 1; y >= 0; y -= 0.1) {
		m = asin(y) * 10;
		for (x = 1; x < m; x += 1)
			printf(" ");
		printf("*");
		for (; x < 29 - m; x += 1)
			printf(" ");
		printf("*\n");
	}
	double Y;
	int X, M;
	for (Y = 0; Y >= -1; Y -= 0.1) {
		M = asin(Y) * 10; //注意M是负数!!!!!
		for (X = 1; X < 31-M; X += 1)
			printf(" ");
		printf("*");
		for (; X <M+61; X += 1)
			printf(" ");
		printf("*\n");
	}

}