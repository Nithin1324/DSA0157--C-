#include <iostream>

using namespace std;

// Base class: Animal
class Animal {
public:
    virtual void eat() const {
        cout << "Animal is eating." << endl;
    }
};

// Derived class: Herbivore
class Herbivore : public Animal {
public:
    void eat() const override {
        cout << "Herbivore is eating plants." << endl;
    }
};

// Derived class: Carnivore
class Carnivore : public Animal {
public:
    void eat() const override {
        cout << "Carnivore is eating meat." << endl;
    }
};

int main() {
    Animal animal;
    Herbivore herbivore;
    Carnivore carnivore;

    animal.eat();      // Output: Animal is eating.
    herbivore.eat();   // Output: Herbivore is eating plants.
    carnivore.eat();   // Output: Carnivore is eating meat.

    return 0;
}

