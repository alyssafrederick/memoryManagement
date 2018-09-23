#include <memory>
#include <iostream>

class MyClass {
public:
	MyClass() {
		std::cout << "constructor" << std::endl;
	}

	~MyClass() {
		std::cout << "destructor" << std::endl;
	}
	int x = 42;
};

void takesUnique(std::shared_ptr<MyClass> myCls) {
	std::cout << myCls->x << std::endl;
	static std::shared_ptr<MyClass> store;
	store = myCls;
}

int main() {
	{
		std::shared_ptr<MyClass> myInt = std::make_shared<MyClass>();
		takesUnique(myInt);
		std::cout << "Hello" << std::endl;
	}

	

	system("PAUSE");
}