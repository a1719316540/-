// 算法实现.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;
int A[] = { 31,41,59,26,41,58 };
void Insertion_sort(int A[], int length);
int main() {
	Insertion_sort(A, 6);
	for (int i = 0; i < 5; i++) {
	cout << A[i] << endl;
	}
	system("pause");
	return 0;
}

void Insertion_sort(int A[], int length) {
	int i, j;
	int key;
	for (i = 1; i < length; i++) { 
		key = A[i]; 
		j = i - 1; 
		while (j >= 0 && A[j] > key) {
			A[j + 1] = A[j];

			j--;
		}
		A[j + 1] = key;
	}
}
