#include <iostream>
using namespace std;
int yesornot(int arr[], int n, int ok) {
  for (int i = 0; i < n - 2; i++) {
    for (int j = 1; j < n - 1; j++) {
      for (int k = 2; k < n; k++) {
        int sum = arr[i] + arr[j] + arr[k];
        if (sum == ok) {
          return 1;
        }
      }
    }
  }
  return -1;
}

int main() {
  // cout << "Hello World!\n";
  int arr1[] = {1, 2, 3, 4, 5};
  int n1 = 5;
  int ok1 = 11;
  int ook3 = yesornot(arr1, n1, ok1);
  cout << ook3 << endl;
}