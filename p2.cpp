#include<iostream>
using namespace std;

int arr[5], max_val,min_val;

int main() {
  for (int i=0; i<5; i++) {
    cout << i+1 << "番目の自然数を入力してください" << endl;
    cin >> arr[i];
  }

  min_val = arr[0];
  max_val = arr[0];

  for (int i=1; i<5; i++) {
    if (arr[i] > max_val) {
      max_val = arr[i];
    }
    if (arr[i] < min_val) {
      min_val = arr[i];
    }
  }

  cout << "最大値は" << max_val << "です" << endl;
  cout << "最小値は" << min_val << "です" << endl;

}
