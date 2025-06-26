#include <iostream>
using namespace std;

bool isEven(int num) {
  if ( num % 2 != 0 ) {
    return false;
  }
  return true;
}

bool isPositive(int num) {
  if ( num > 0) {
    return true;
  }
  return false;
}

int main() {
  cout << "Gib eine Zahl ein:";
  int input;
  cin >> input;

  if ( isEven(input) ) {
    cout << "Deine Zahl ist Gerade." << endl;
  } else {
    cout <<"Deine Zahl ist Ungerade." << endl;
  }

  if ( isPositive(input) ) {
    cout << "Deine Zahl ist Positiv." << endl;
  } else {
    cout << "Deine Zahl ist Negativ." << endl;
  }
}

