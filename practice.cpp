#include <iostream>
#include <string>
#define TAX_RATE 0.15 // Preprocessor Directive for Tax rate constant
using namespace std;
int main() {
    // 1. Display an introductory message cout <<"Welcometo the store sales and Inventory System!\
    // n";
    cout <<"Reminder: c++ is a compiled language.\n\n";
    //2. Declair vvariables for product details
    string productName;
    int productCategory;
    float productPrice;
    int itemsSold;
    //3. Declare variables for computed values
    int newInventory;
    float totalSales;
    string inventoryStatus;
    //6. Define a constant using const keyword
    const double CONST_TAX_RATE = 0.15;
    //7. Input from the user
    cout <<"Enter the product name:" ;
    cin>> productCategory;
    cout<<"Enter the product catagory(1-5:) ";
    cin >> productCategory;
    cout << "Enter the initial inventory quantity:";
    cin >> initialInventory;
    cout <<"Enter the prodact prive per unit: ";
    cin >> productPrice;
    cout <<"Enter the number of items sold:";
    cin >>itemsSold;
    //8. perform calculations
    newInventory = initialInventory
    itemsSold; // Comput new inventory
    totalSales = itemsSold*
    productPrice; // compute total sales amount
     // 9. Use a ternary operator for inventory status
      inventoryStatus = (newInventory < 10) ? 
      "Low Inventory" : "Sufficient Inventory";
       // 5. Use type deduction
        auto salesHelper = totalSales;
         decltype(initialInventory) 
     inventoryHelper = initialInventory;
    // 10. Implement flow control
      if (productCategory < 1 || productCategory > 5) {
      cout << "Invalid category! Please enter a number between 1 and 5.\n";
     return 1;
     }
      switch (productCategory) {
      case 1: cout << "Category:
       Electronics\n"; break;
        case 2: cout << "Category:
         Groceries\n"; break;
      case 3: cout << "Category: Clothing\n"; break;
       case 4: cout << "Category: Stationery\n"; break;
        case 5: cout << "Category: Miscellaneous\n"; break;
     }
     // 11. Use a for loop to simulate receipt printing
     cout << "\nReceipt:\n";
    for (int i = 1; i <= itemsSold; i++) { cout << "Item " << i << ": " << productName << " sold at $" << productPrice << endl; } 
     // 12. Output all information
     cout << "\n--- Sales Summary ---\n";
     cout << "Product Name: " << productName << endl;
    cout << "Product Category: " << productCategory << endl;
     cout << "Initial Inventory: " << initialInventory << endl;
     cout << "Price per unit: $" << productPrice << endl;
     cout << "Items Sold: " << itemsSold << endl; 
     cout << "New Inventory: " << newInventory << endl;
    cout << "Total Sales: $" << totalSales << endl; 
    cout << "Inventory Status: " << inventoryStatus <<<< CONST_TAX_RA endl;
     cout << "Helper Variable (auto): " << salesHelper << endl;
    cout << "Helper Variable (decltype): " << inventoryHelper << endl;
    cout << "Tax Rate (Preprocessor Directive): " << TAX_RATE << endl; 
     cout << "Tax Rate (const variable): " TE << endl; return 0;
     }
