// Group-4
// Assignment: 03
// Section: 01
// Question-2

#include <iostream> 
#include <fstream>
#include <iomanip>
using namespace std;
void Output (double price[], double discount[], double priceafterdiscount[], int x);
void Input (int itemno[],double price[], double discount[], int x);

main()
{   const int rows = 10;
    int itemno[rows];
    double price[rows];
    double discount[rows];
    double priceafterdiscount[rows];
    Input (itemno, price, discount, rows);
    Output (price, discount, priceafterdiscount, rows);


    for (int i = 0; i < rows; i++)
    { 
    cout<<right;
    cout << setw(10) << itemno[i]; 
    cout << setw(10) << price[i]; 
    cout << setw(10) << discount[i]; 
    cout << setw(15) << priceafterdiscount[i];
    cout << endl;
    }

    system ("pause");
    return 0;

}

void Output (double price[], double discount[], double priceafterdiscount[], int x)
{
    
    for (int i = 0; i < x; i++)
    {
        priceafterdiscount[i] = price[i] * (100 - discount[i]) / 100;
    }

    cout<<"  Item No    Price     Discount(%)   Price after discount\n";

}

void Input (int itemno[],double price[], double discount[], int x)
{
    ifstream file("input.txt");

    if (!file)
    { 
        cout << "ERROR MESSAGE" << endl; 
        exit(1); 
    }

    for (int i = 0; i < x; i++)
    {
        file >> itemno[i];
        file >> price[i];
        file >> discount[i];
    }

} //the end




