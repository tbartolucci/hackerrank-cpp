/*
 * https://www.hackerrank.com/challenges/arrays-introduction
 */
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	int size;
	scanf("%d", &size);

	int arr[size];
	for(int i = 0; i < size; i++ ){
		scanf("%d",&arr[i]);
	}

	for(int j = size-1; j >= 0; j--){
		printf("%d ",arr[j]);
	}
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}





