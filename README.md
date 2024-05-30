# Wyvern Roost Program

## Project Summary
The Wyvern Roost Program is a fun and interactive console application that simulates a medieval inn and tavern. The program welcomes a knight and his retinue, records the knight's name and main characteristic, and then takes orders for food and drink. Finally, it calculates the subtotal, taxes, and total cost of the meal.

## Running the Program
To compile and run the program, follow these steps:

1. **Download or clone the repository.**
2. **Navigate to the directory containing the source file.**
3. **Compile the program using a C++ compiler:**
   ```bash
   g++ -o WyvernRoost WyvernRoost.cpp
Run the executable:
bash
Copy code
./WyvernRoost
Source Code
cpp
Copy code
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    cout << "Welcome to Wyvern Roost! The finest establishment in the realm!\n";
    cout << "It was a dark and stormy night when a hungry and exhausted knight, and his retinue, entered our Inn and Tavern.\n";
    cout << "Fear not, Sir Knight, for we shall provide you with the finest food and drink!\n\n";

    string knightName, characteristic;
    cout << "May I ask for your name for my records, Sir Knight? ";
    cin >> knightName;
    cout << "What is your main characteristic? ";
    cin >> characteristic;

    cout << "\nSir " << knightName << " the " << characteristic << ", welcome to our fine establishment!\n";

    const double costFood1 = 15.10;
    const double costFood2 = 3.49;
    const double costFood3 = 5.17;
    const double costFood4 = 1.19;
    const double costDrink = 2.15;

    int quantityFood1, quantityFood2, quantityFood3, quantityFood4, quantityDrink;
    cout << "How many of <Roasted boar> will your party require us to prepare, Sir " << knightName << " the " << characteristic << "? ";
    cin >> quantityFood1;
    cout << "How many of the sweet chicken will your party require us to prepare, Sir " << knightName << " the " << characteristic << "? ";
    cin >> quantityFood2;
    cout << "How many of the Corn on the cob will your party require us to prepare, Sir " << knightName << " the " << characteristic << "? ";
    cin >> quantityFood3;
    cout << "How many of the loaded potatoes will your party require us to prepare, Sir " << knightName << " the " << characteristic << "? ";
    cin >> quantityFood4;
    cout << "How many mugs of Mead will your party require us to prepare, Sir " << knightName << " the " << characteristic << "? ";
    cin >> quantityDrink;

    double subtotal = (quantityFood1 * costFood1) + (quantityFood2 * costFood2) +
        (quantityFood3 * costFood3) + (quantityFood4 * costFood4) +
        (quantityDrink * costDrink);

    double taxes = 0.05 * subtotal;
    double totalPrice = subtotal + taxes;

    cout << fixed << setprecision(2);
    cout << "\nThe subtotal for tonight’s meal is: " << subtotal << " silver pieces.\n";
    cout << "With taxes, you owe: " << totalPrice << " silver pieces.\n";

    return 0;
}
Program Logic
Introduction and Welcome:

The program begins by welcoming the knight to the Wyvern Roost Inn and Tavern.
User Input for Knight's Details:

The program asks for the knight's name and main characteristic.
User Input for Food and Drink Orders:

The program prompts the user to input the quantities of various food items and drinks needed by the knight's party.
Calculation of Costs:

The program calculates the subtotal of the order based on the quantities and prices of the items.
A 5% tax is applied to the subtotal to calculate the total price.
Display of Costs:

The program displays the subtotal and the total cost (including taxes) to the user.
License
This project is licensed under the MIT License - see the LICENSE.md file for details.

Author
Aidan Clark
