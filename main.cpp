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

//Remove One (Public Contest: CodeRush-X)
/*Time Limit: 2 sec
Memory Limit: 128000 kB
Problem Statement
Consider the integer sequence A = {1, 2, 3, ...., N} i.e. the first N natural numbers in order.

You are now given two integers, L and S. Determine whether there exists a subarray with length L and sum S after removing at most one element from A.

A subarray of an array is a non-empty sequence obtained by removing zero or more elements from the front of the array, and zero or more elements from the back of the array.
Input
The first line contains a single integer T, the number of test cases.
T lines follow. Each line describes a single test case and contains three integers: N, L, and S.

Constraints:
1 <= T <= 100
2 <= N <= 109
1 <= L <= N-1
1 <= S <= 1018 (Note that S will not fit in a 32-bit integer)
Output
For each testcase, print "YES" (without quotes) if a required subarray can exist, and "NO" (without quotes) otherwise.
Example
Sample Input:
3
5 3 11
5 3 5
5 3 6

Sample Output:
YES
NO
YES

Sample Explanation:
For the first test case, we can remove 3 from A to obtain A = {1, 2, 4, 5} where {2, 4, 5} is a required subarray of size 3 and sum 11.*/
