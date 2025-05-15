#include <iostream>
#include <string>

using namespace std;

class Animal
{
public:
    virtual void Voice(){}
};

class Dog: public Animal
{
public:
    void Voice() override
    {
        cout << "Woof!" << endl;
    }
};

class Cat : public Animal
{
public:
    void Voice() override
    {
        cout << "Meow!" << endl;
    }
};

class Cow : public Animal
{
public:

    void Voice() override
    {
        cout << "Mooo!";
    }
};

int main()
{  
    Animal* animal[3];
    animal[0] = new Dog();
    animal[1] = new Cat();
    animal[2] = new Cow();

    for (Animal* animals : animal) animals->Voice();
}