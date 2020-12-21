#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void min_abs_elem(int* arr, int len) {
	int i , min_chislo, result, chislo_i;
	min_chislo = arr[0] >= 0 ? arr[0] : arr[0] * (-1);
	for (i = 0; i <= 10; i++) {
		chislo_i = arr[i] >= 0 ? arr[i] : arr[i] * (-1);
		if (chislo_i <= min_chislo) {
			result = arr[i];
			min_chislo = chislo_i;
		}
	}
	printf("otvet raven %d\n", result);
}
int main() {
	int arr[10];
	int i = 0;
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
	min_abs_elem(arr, 10);
	return 0;
}