#include <stdio.h>
#include <stdlib.h>

int main(void) {

	float c;
	int sum[13] = {0};
	srand(time(0));

	for (int i = 0; i < 36000; i++) {
		int a = rand() % 6 + 1;
		int b = rand() % 6 + 1;
		sum[a + b]++;
	}

	printf("»ë¤l­È©M\n");

	for (int i = 2; i <= 12; i++) {
		printf("%6d",i);
	}

	printf("\n");

	for (int i = 2; i <= 12; i++) {
		printf("%6d", sum[i]);
	}

	system("pause");
	return 0;
}