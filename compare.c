#include "stdio.h"
#include "string.h"
int main() {
	char text1[128] = "text1";
	char text2[128] = "text1";
	if (strcmp(text1, text2) == 0) {
		printf("They are the same\n");
	} else {
		printf("They are different\n");
	}
	
}
