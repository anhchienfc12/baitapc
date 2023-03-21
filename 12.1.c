#include<stdio.h>
#include<string.h>

int test( int a[], int n) {
	int *p = &a[n];
	int c = 0;
	while(p > a) {
		p--;
		if( *p % 2 == 0) {
			c++;
		}
	}
	return c;
}
int main() {
	int n;
	int i;
	scanf("%d", &n);
	int a[n];
	for(i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	printf("%d", test(a, n));	
}
