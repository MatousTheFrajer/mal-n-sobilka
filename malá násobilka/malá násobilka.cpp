#include <stdio.h>

int main(void)
{
	// tabulka pro malou násobilku
	//bude 10 řádků
	for (int j = 1; j <= 10; j++) {
		// vypis jednoho radku
		for (int i = 1; i <= 10; i++) {
			printf("%3d ", i * j);
		}
		printf("\n");
	}
	// sikma plocha 1-10
	{
		for (int j = 1; j <= 9; j++) {
			for (int i = 1; i <= j; i++) {
				printf("%3d ", i);
			}
			printf("\n");
		}
	}
	// sikma plocha 1-10
	for (int j = 9; j >= 1; j--) {
		//i je pro vytvoreni jednoho radku
		for (int i = 1; i <= j; i++) {
			printf("%3d ", i);
		}
		printf("\n");
	}
}
