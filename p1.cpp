#include<iostream>
using namespace std;

int a,b;

int main() {
  for (a=1; a<10; a++) {
    for (b=1; b<10; b++) {
      cout << a << "*" << b << "=" << a*b;
      cout << "\t";
    }

    cout << endl;
  }
}
