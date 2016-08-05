/**
 * https://www.hackerrank.com/challenges/c-tutorial-functions
 */
#include <iostream>
#include <cstdio>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a, int b, int c, int d){
	int x = 0;
	if( a > x ){
		x = a;
	}
	if( b > x ){
		x = b;
	}
	if( c > x ){
		x = c;
	}
	if( d > x ){
		x = d;
	}
	return x;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);

    return 0;
}
