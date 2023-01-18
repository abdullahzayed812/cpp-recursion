#include <iostream>
using namespace std;

int length3NPlusOne(int number) {
  if (number == 1) {
    return 1;
  }
  if (number % 2 == 0) {
    int param = number / 2;
    return 1 + length3NPlusOne(param);
  }
  int param = 3 * number + 1;
  return 1 + length3NPlusOne(param);
}

int power(int value, int exponent) {
  if (exponent == 0) {
    return 1;
  }
  return value * power(value, exponent - 1);
}

int maxValue(int arr[], int len) {
	if (len == 1)
		return arr[0];

	int sub_result = maxValue(arr, len - 1);
	return max(sub_result, arr[len + 1]);
}

int main() {
  cout << "\n*****************\n";
  // cout << length3NPlusOne(6);
  // cout << power(7, 3);

  int arr[5] = { 1, 2, 3, 4, 5 };

  cout << maxValue(arr, 5);

  cout << endl;

  return 0;
}