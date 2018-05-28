#include <iostream>
using namespace std;


class Animal
{
	public:
		virtual ~Animal() {}
		virtual double somevalue() = 0;
};
class Cat : public Animal
{
	public:
	int c1;
	Cat(int a) : c1(a){}

double somevalue()
{
	return c1;
}

};

class Dog : public Animal
{
	public:
	int c2;
	Car(int a) : c2(a){}

double somevalue()
{
	return c2;
}

};



class Parrot : public Animal
{
	public:
	int c3;
	Parrot(int a) : c3(a){}

double somevalue()
{
	return c3;
}

};

main()
{
	return 0;
}
