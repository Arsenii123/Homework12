// Homework12.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
template <typename T> 
void bubble_sort(T  ar[], const int SIZE) {
    for (int pr = 0; pr < SIZE; pr++)
        for (int index = SIZE - 1; index > 0; index--)
            if (ar[index] < ar[index - 1]) {
                int temp = ar[index];
                ar[index] = ar[index - 1];
                ar[index - 1] = temp;
            }
    cout << "Min:" << ar[0] << "\n";
    cout << "Max:" << ar[SIZE - 1] << "\n";


}
void reverse(int ar2[], const int TRUENUM) {

    for (int pr = 0; pr < TRUENUM; pr++) {
        for (int index = TRUENUM - 1; index > 0; index--) {

            if (ar2[index] < ar2[index - 1]) {
                int temp = ar2[index];
                ar2[index] = ar2[index - 1];
                ar2[index - 1] = temp;
            }



        }

    }
    

    
    for (int i = 0; i < TRUENUM; i++) {
        cout << ar2[i] << ", ";
        cout << "\n\n";
    }

 

}
void reverse2(int ar2[], const int TRUENUM) {
    for (int pr = 0; pr < TRUENUM; pr++) {
        for (int index = TRUENUM - 1; index > 0; index--) {

            if (ar2[index-1] > ar2[index]) {
                int temp = ar2[index - 1];
                ar2[index - 1] = ar2[index];
                ar2[index] = temp;
            }



        }

    }
    for (int i = 0; i < TRUENUM; i++) {
        cout << ar2[i] << ", ";
        cout << "\n\n";
    }
}


int main()
{
	const int NUMBERS = 3;
	int array[NUMBERS] = {3,2,1 };
    bubble_sort( array, NUMBERS );
    if (array[0] > array[1]) {
        reverse(array, NUMBERS);
    }
    else  if (array[0] < array[1]) {
        reverse2(array, NUMBERS);
    }




}





//void number(const int SIZE, int ar[]) {
//	int result = 0;
//	for (int y = 0; y < SIZE; y++) {
//		for (int x = SIZE - 1; x > 0; x--) {
//			int result = ar[y] + ar[x];
//			cout << result << "\n";
//
//		}
//
//	}
//	cout << result / SIZE;
//}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
