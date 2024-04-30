#include <iostream>
using namespace std;

int main() {
  char choice;
  do {
    cout << "Hello BILAL NADEEM, studentId = BC230409790, Welcome to the Main "
            "Menu"
         << endl;
    cout << "1.Addition" << endl;
    cout << "2.Subtraction" << endl;
    cout << "3.Multiplication" << endl;
    cout << "4.Division" << endl;
    cout << "5.Exit" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    if (choice >= '1' && choice <= '4') {
      int num;
      cout << "How many numbers do you want to ";
      if (choice == '1')
        cout << "add";
      else if (choice == '2')
        cout << "subtract";
      else if (choice == '3')
        cout << "multiply";
      else
        cout << "divide";
      cout << "? ";
      cin >> num;

      double result = 0;
      if (num > 0) {
        double operand;
        for (int i = 1; i <= num; ++i) {
          cout << "Enter number " << i << ": ";
          cin >> operand;
          if (choice == '1')
            result += operand;
          else if (choice == '2') {
            if (i == 1)
              result = operand;
            else
              result -= operand;
          } else if (choice == '3') {
            if (i == 1)
              result = operand;
            else
              result *= operand;
          } else {
            if (i == 1)
              result = operand;
            else if (operand == 0) {
              cout << "Cannot divide by zero!" << endl;
              result = 0;
              break;
            } else
              result /= operand;
          }
        }
        cout << "Result of ";
        if (choice == '1')
          cout << "addition";
        else if (choice == '2')
          cout << "subtraction";
        else if (choice == '3')
          cout << "multiplication";
        else
          cout << "division";
        cout << ": " << result << endl;
      } else {
        cout << "Please enter a valid number of operands." << endl;
      }
    } else if (choice != '5') {
      cout << "Invalid option! Try inserting number betwen 1-5" << endl;
    }
  } while (choice != '5');

  cout << "EXIT FROM MENU\nTHANKYOU FOR USING CALCULATOR" << endl;

  return 0;
}
