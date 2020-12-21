#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void max_popular(int*arr , int len ) {
	int result, max, i, j, povtpor;
	result = arr[0];
	max = 1;
	for (i = 0; i < 10; i++) {
		povtpor = 1;
		for (j = i + 1; j < 10; j++) {
			if (arr[i] == arr[j]) {
				povtpor++;
			}
			if (povtpor > max) {
				max = povtpor;
				result = arr[i];
			}
		}
	}
	if (max > 1) {
		printf("%d raz vsrtechaetsa chislo %d", max, result);
	}
	else {
		printf("Net povtora\n");
	}
}
int main() {
	int arr[10];
	int result, i=0;
	printf("Input ten numbers:\n");
	while (i < 10)
	{
		while (printf("Number: ") && scanf("%d", &arr[i]) != 1) {
			char c;
			while (scanf("%c", &c) == 1 && c != '\n');
			printf("CHISLOO\n");
		}
		i++;
	}
	max_popular(arr, 10);
	return 0;
}