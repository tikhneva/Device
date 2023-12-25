#include <iostream>
#include <string>
using namespace std;

class Device
{
protected:
    string manufacturer;
    string model;
    string name;
    string creator;
    int capacity;
    int quantity;

public:
    Device(string manufacturer, string model, string name, int capacity, int quantity, string creator)
        : manufacturer(manufacturer), model(model), name(name), capacity(capacity), quantity(quantity), creator(creator){}

    virtual void print() = 0;
    virtual void load() = 0;
    virtual void save() = 0;
};

class IPhone : public Device {
public:
    IPhone(string model, int capacity, int quantity, string creator)
        : Device("Apple", model, "IPhone", capacity, quantity, "Steve Jobs") {}

    void print() override {
        cout << "IPhone: " << manufacturer << " " << model << " " << capacity << "GB " << quantity << "pcs" << "\nCreator: " << creator;
        cout << "\n";
    }

    void load() override {
        cout << "IPhone is Loading\n";
    }

    void save() override {
        cout << "IPhone is Saving\n";
        cout << "\n";
    }
};

class Nintendo : public Device
{
public:
    Nintendo(string model, int capacity, int quantity, string creator)
        : Device("Nintendo", model, "Nintendo", capacity, quantity, "Fusajiro Yamauchi") {}

    void print() override {
        cout << "Nintendo: " << manufacturer << " " << model << " " << capacity << "GB " << quantity << "pcs" << "\nCreator: " << creator;
        cout << "\n";
    }

    void load() override {
        cout << "Nintendo is Loading\n";
    }
    void save() override {
        cout << "Nintendo is Saving\n";
        cout << "\n";
    }
};

class Samsung : public Device {
public:
    Samsung(string model, int capacity, int quantity, string creator)
        : Device("Samsung", model, "Samsung", capacity, quantity, "Lee Ben Choel") {}

    void print() override {
        cout << "Samsung: " << manufacturer << " " << model << " " << capacity << "GB " << quantity << "pcs " << "\nCreator: " << creator;
        cout << "\n";
    }

    void load() override {
        cout << "Samsung is Loading\n";
    }

    void save() override {
        cout << "Samsung is Saving\n";
    }
};

int main() {
    Device* devices[3];
    devices[0] = new IPhone("iPhone 13", 128, 10, "Steve Jobs");
    devices[1] = new Nintendo("Switch", 64, 5, "Fusajiro Yamauchi");
    devices[2] = new Samsung("Galaxy S20", 128, 8, "Lee Ben Choel");

    for (int i = 0; i < 3; i++) {
        devices[i]->print();
        devices[i]->load();
        devices[i]->save();
    }

    return 0;
}