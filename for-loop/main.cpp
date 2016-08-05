/**
 * https://www.hackerrank.com/challenges/c-tutorial-for-loop
 */
#include <stdlib.h>
#include <stdio.h>

int main() {
	 int a, b;
	 scanf("%d\n%d", &a, &b);

	 for(int x = a; x <= b; x++){
		if( x == 1 ){
			printf("one\n");
		}else if( x == 2 ){
			printf("two\n");
		}else if( x == 3 ){
			printf("three\n");
		}else if( x == 4 ){
			printf("four\n");
		}else if( x == 5 ){
			printf("five\n");
		}else if( x == 6 ){
			printf("six\n");
		}else if( x == 7 ){
			printf("seven\n");
		}else if( x == 8 ){
			printf("eight\n");
		}else if( x == 9 ){
			printf("nine\n");
		}else{
			if( x % 2 == 0 ){
				printf("even\n");
			}else{
				printf("odd\n");
			}
		}
	 }

    return 0;
}
