#include <iostream>

using namespace std;


int main(int argc, char const *argv[]) {

  cout << "Please enter the weight of the cereal box in ounces:" << endl;

  double ounces;

  cin >> ounces;

  double tons = ounces / 35273.92;

  double boxes = 35273.92 / ounces;

  cout << "The weight of a box of cereal in metric tons is " << tons << endl;

  cout << boxes << " boxes of cereal is one metric ton" << endl;

  return 0;
}
