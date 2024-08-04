//
//  main.cpp
//  Cash Register 
//
//

#include "Inventory_item.h"
#include "Cash_Register.h"
#include <iostream>
#include <string>
using namespace std;
int main() {
    string description;
    double cost;
    int units;
    int quantity;

    cout << "Enter item description: ";
    getline(std::cin, description);
    cout << "Enter item cost: ";
    cin >> cost;
    cout << "Enter item units in stock: ";
    cin >> units;

    InventoryItem item(description, cost, units);

    cout << "Enter quantity to purchase: ";
    cin >> quantity;

    CashRegister register1(item, quantity);

    register1.processTransaction();

    return 0;
}
