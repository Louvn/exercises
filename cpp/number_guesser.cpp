#include <cstdlib>
#include <iostream>
#include <ctime>

using namespace std;

int main() {
  srand(time(0));
  int randomNum = rand() % 31;
  cout << "Versuche, die Zahl von 0 - 30 zu erraten: ";
  
  int guess;
  cin >> guess;
  
  if ( guess == randomNum ) {
    cout << "Du hast richtig geraten!" << endl;
  } else {
    cout << "Die richtige Zahl wäre " << randomNum << endl;
  }
  
  return 0;
}
