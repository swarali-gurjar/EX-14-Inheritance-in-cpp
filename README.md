# Aim: To study Inheritance in C++

## Theory: 

Inheritance is one of the fundamental features of Object-Oriented Programming (OOP) in C++.
It allows a class (called the derived class) to acquire the properties and behaviors (data members and member functions) of another class (called the base class). This promotes code reusability, extensibility, and better organization of programs.

The class that inherits is called the derived class, and the class being inherited from is called the base class.

**Single Inheritance**: A derived class inherits from a single base class.

**Multiple Inheritance**: A derived class inherits from more than one base class.

**Multilevel Inheritance**: A class is derived from another derived class (grandchild relationship).

**Hierarchical Inheritance**: Multiple derived classes inherit from a single base class.

Advantages of Inheritance:

- Promotes code reusability by avoiding rewriting of common code.

- Helps in building a clear hierarchical relationship between classes.

- Provides a way to extend existing classes without modifying them.

## Algorithm

**Step 1**: Start

**Step 2**: Define the first base class Electronics with:

- Data member: brand = "Samsung".

- Member function: model() to display "Galaxy S21".

**Step 3**: Define the second base class Specs with:

- Data member: battery = "4000 mAh".

- Member function: colour() to display "Phantom Black".

**Step 4**: Define a derived class Smartphone that inherits publicly from both Electronics and Specs, with:

- Data member: sim = "Dual SIM".

**Step 5**: In the main() function:

- Create an object phone of class Smartphone.

- Call colour() (inherited from Specs).

- Display brand and call model() (inherited from Electronics).

- Display sim (from Smartphone) and battery (from Specs).

**Step 6**: End

## Conclusion

In this experiment, we learned how inheritance in C++ allows one class to derive properties and behaviors from another, promoting code reusability and extensibility. 
By implementing different types of inheritance (single, multiple, multilevel and hierarchical), we observed how relationships between classes can be established.
