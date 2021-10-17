#include<stdio.h>
int main() {
	int i, j, n;
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++) {
		j = 1;
		while (j <= n - i) {
			printf(" ");
			j++;
		}
		j = 1;
		while (j < 2 * i) {
			printf("*");
			j++;
		}
		printf("\n");
	}
	return 0;
}
