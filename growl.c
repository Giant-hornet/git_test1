#include <stdio.h>

int add(int a, int b);
int sub(int a, int b);

int main() {
	int a = 10;
	int b = 9;
	add(a, b);
	sub(a, b);
	return 0;
}

int add(int a, int b) {
	return a + b;
}
int sub(int a, int b) {
	return a - b;
}