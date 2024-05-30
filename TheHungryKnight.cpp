// Name: Aidan CLark
//Class: CS231
// The hungry knight.cpp
//Calculates the cost of the hungry knights meal.

#include <iostream>
#include <iomanip> // For setprecision
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
