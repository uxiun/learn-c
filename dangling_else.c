#include <stdio.h>

int main(void) {
	if (0) if (1) printf("inner\n"); else printf("else\n");
		// 何も表示されない。つまり、elseは if (1) に対応する
}