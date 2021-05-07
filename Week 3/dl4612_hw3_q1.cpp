/*
Description: Write a program that	computes how much a	customer has to	pay	after	purchasing two items. The price is calculated according	to the	following	rules:
  * BOGO half off promotion: the lower price item is half price.
  * If the customer is club card member, additional 10% off.
  * Tax is added
Inputs to the program include:
  * Two items' prices
  * Have club card or not (User enters 'Y' or 'y' for "yes"; 'N' or 'n' for "no")
  * tax rate (User enters the percentage as a number; for example they enter 8.25 if the tax rate is 8.25%)
Program displays:
  * Base price - price before the discount and taxes
  * Price after discounts - the price after the BOGO half off promotion and the member's discount (if applicable)
  * Total price - the amount of money the customer has to pay after tax

Your program should interact with the user exactly as it shows in the following example:
Enter price of first item: 10
Enter price of second item: 20
Does customer have a club card? (Y/N): y
Enter tax rate, e.g. 5.5 for 5.5% tax: 8.25
Base price: 30.0
Price after discounts: 22.5
Total price: 24.35625
*/
#include <iostream>
using namespace std;

const double CLUB_MEM_DISCOUNT = 0.1;

int main() {
    char clubMemCard;
    double item1, item2;
    double taxRate, basePrice, priceDiscount, totalPrice;

    cout << "Enter price of first item: ";
    cin >> item1;

    cout << "Enter price of second item: ";
    cin >> item2;

    cout << "Does customer have a club card? (Y/N): ";
    cin >> clubMemCard;

    cout << "Enter tax rate, e.g. 5.5 for 5.5% tax: ";
    cin >> taxRate;

    //Base price - price before the discount and taxes
    basePrice = item1 + item2;

    //BOGO membership discount to apply to the lower priced item
    if (item1 > item2) {
        totalPrice = ((item1 + item2) / 2);
    }
    else {
        totalPrice = ((item1 / 2) + item2);
    }
    priceDiscount = totalPrice;
    //Membership Y or y, N or n
    //Price after discounts - the price after the BOGO half off promotion and the member's discount (if applicable)
    if ((clubMemCard == 'Y') || (clubMemCard == 'y')) {
        priceDiscount -= priceDiscount * CLUB_MEM_DISCOUNT;
    }
    else if ((clubMemCard == 'N') || (clubMemCard == 'n')) {
        totalPrice = priceDiscount + (priceDiscount * (taxRate / 100));
    }
    //Total price - the amount of money the customer has to pay after tax

    //output result
    cout << "Base price: " << basePrice << endl;

    cout << "Price after discounts: " << priceDiscount << endl;

    cout << "Total price: " << totalPrice << endl;

    return 0;
}
