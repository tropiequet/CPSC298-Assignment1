#include <iostream>

using namespace std;


int main(int argc, char const *argv[]) {

  double hours;

  cout << "Please enter the number of hours worked this week:" << endl;
  cin >> hours;

  double regularHours;
  double overtimeHours;
  double grossPay;
  double netPay;
  double socialSecurity;
  double federalTax;
  double stateTax;
  const int insurance = 10;

  if (hours > 40){
    regularHours = 40;
    overtimeHours = hours - 40;
  }else{
    regularHours = hours;
    overtimeHours = 0;
  }

  grossPay = (regularHours * 16) + (overtimeHours * 24);

  socialSecurity = grossPay * 0.06;
  federalTax = grossPay * 0.14;
  stateTax = grossPay * 0.05;

  netPay = grossPay - socialSecurity - federalTax - stateTax - insurance;

  cout << "Gross Pay: $" << grossPay << endl;
  cout << "Social Security tax withheld: $" << socialSecurity << endl;
  cout << "Federal tax withheld: $" << federalTax << endl;
  cout << "State tax withheld: $" << stateTax << endl;
  cout << "Medical insurance withheld: $" << insurance << endl;
  cout << "Net take home pay: $" << netPay << endl;








  return 0;
}
