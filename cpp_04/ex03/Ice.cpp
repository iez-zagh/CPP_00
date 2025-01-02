#include "Ice.hpp"

Ice::~Ice()
{
    // std::cout << "destructor for Ice called\n";
}

Ice::Ice() : AMateria("Ice")
{
    std::cout << "a Ice is build\n";
}

Ice::Ice(Ice const &other) : AMateria(other)
{
    *this = other;
    std::cout << "copy constructor for Ice called\n";
}

Ice& Ice::operator=(Ice const &other)
{
    if (this != &other)
    {
        //copy elements
    }
    std::cout << "copy assigement for Ice called\n";
    return *this;
}

void Ice::use(ICharacter &target)
{
    std::cout << "Ice: * heals " << target.getName() <<  " wounds *" << std::endl;
}

Ice* Ice::clone() const
{
    return new Ice(*this); // new inst from the old Ice
}