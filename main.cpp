// Name: Timothy Lee
// This program calculates and displays business expenses.
#include <iostream>
#include <string>
#include <iomanip>

int main ()
{
  //Create variables for various inputs
  std::string location;
  int days;
  float hotel_expense;
  float meal_expense;
  float total_expense;

  //Display the welcome statement.
  std::cout << "Welcome to the Business Trip Tracker!\n";

  //Blank line to separate lines.
  std::cout << std::endl;

  //Ask for location
  std::cout << "What is the business trip location? ";
  std::cin >> location;

  //Ask for number of days
  std::cout << "How many days will the trip take? ";
  std::cin >> days;

  //Ask for hotel expense
  std::cout << "What is the total hotel expense? $";
  std::cin >> hotel_expense;

  //Ask for meal expense
  std::cout << "What is the total meal expense? $";
  std::cin >> meal_expense;

  //Calculate total expense
  total_expense = hotel_expense + meal_expense;

  //Blank line to separate lines.
  std::cout << std::endl;

  //Display all the inputs into a table.
  std::cout << std::setw(8) << "Location"
    << std::setw(10) << "Days"
    << std::setw(10) << "Hotel"
    << std::setw(10) << "Meal"
    << std::setw(10) << "Total" << std::endl;
  std::cout << std::setw(8) << location
    << std::setw(10) << days
    << std::setw(10) << hotel_expense
    << std::setw(10) << meal_expense
    << std::setw(10) << total_expense << std::endl;

  return 0;
}
