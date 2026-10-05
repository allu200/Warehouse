#include <iostream>
using namespace std;

class Warehouse
{
private:
    int inventory;
    int shelfCapacity;

public:
    Warehouse(int i, int capacity)
    {
        inventory = i;
        shelfCapacity = capacity;
    }

    void addItems(int amount)
    {
        if (inventory + amount <= shelfCapacity)
            inventory += amount;
        else
            cout << "Shelf capacity exceeded." << endl;
    }

    void removeItems(int amount)
    {
        if (amount <= inventory)
            inventory -= amount;
        else
            cout << "Not enough inventory." << endl;
    }

    void display()
    {
        cout << "Inventory: " << inventory << endl;
        cout << "Shelf Capacity: " << shelfCapacity << endl;
        cout << "Available Space: "
            << shelfCapacity - inventory << endl;
    }
};

int main()
{
    Warehouse w(50, 100);

    w.addItems(20);
    w.removeItems(10);
    w.display();

    return 0;
}