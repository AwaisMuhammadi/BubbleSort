#include<iostream>

using namespace std;

int list_of_number[5] = { 5, 1,8,2,4 };

void swap(int a,int b) {
    int c = list_of_number[a];
    list_of_number[a] = list_of_number[b];
    list_of_number[b] = c;
}


void bubble_sort() {
    int n = sizeof(list_of_number) / sizeof(list_of_number[0]); //length of array
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (list_of_number[j] > list_of_number[j + 1]) {
                swap(j, j + 1);
            }
        }
    }
}

void print_array() {
    int n = sizeof(list_of_number) / sizeof(list_of_number[0]); //length of array
    for (int i = 0; i < n; i++) {
        cout << list_of_number[i] << ",";
    }
}

int main() {
    bubble_sort();
    print_array();
	return 0;
}