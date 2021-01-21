#include <iostream>

using namespace std;


int main(int argc, char const *argv[]) {

  int capacity;
  int people;
  int extraPeople;

  cout << "Please enter the maximum room capacity:" << endl;
  cin >> capacity;

  cout << "Please enter the number of people attending the meeting:" << endl;
  cin >> people;

  if (people <= capacity){
    extraPeople = capacity - people;
    cout << "This meeting is legal to hold" << endl;
    cout << extraPeople << " additional people can attend the meeting" << endl;
  }else if (people > capacity){
    extraPeople = people - capacity;
    cout << "This meeting is illegal to hold due to fire regulations" << endl;
    cout << "Please exclude " << extraPeople << " people to legally attend the meeting" << endl;
  }

  return 0;
}
