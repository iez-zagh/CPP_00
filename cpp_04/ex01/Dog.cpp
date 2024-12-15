#include "Dog.hpp"

Dog::Dog(): Animal("Dog"){
    _br = new Brain();
    std::cout << "default constructor for Dog called\n";
}

Dog::~Dog(){
    delete _br;
    std::cout << "destructor for Dog called\n";
}


void    Dog::makeSound(void) const{
    std::cout << "haww !\n";
}