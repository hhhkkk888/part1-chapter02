/*
#include <iostream>

using namespace std;

int main(void)
{
	int num = 10;
	int i = 0;

	cout << "true: " << true << endl;
	cout << "false: " << false << endl;

	while (true)
	{
		cout << i++ << ' ';
		if (i > num)
			break;
	}
	cout << endl;

	cout << "sizeof 1: " << sizeof(1) << endl;
	cout << "sizeof 0: " << sizeof(0) << endl;
	cout << "sizeof true: " << sizeof(true) << endl;
	cout << "sizeof false: " << sizeof(false) << endl;
	return 0;

}


#include <iostream>

bool ispositive(int num)
{
	if (num <= 0)
		return false;
	else
		return true;
}

int main(void)
{
	bool ispos;
	int num;
	std::cout << "input number: ";
	std::cin >> num;

	ispos = ispositive(num);

	if (ispos)
		std::cout << "positive number" << std::endl;
	else
		std::cout << "negative number" <<std::endl;

	return 0;

}

#include <iostream>


int main(void)
{
	int num1 = 1020;
	int& num2 = num1;//참조자

	num2 = 3047;

	std::cout << "VAL: " << num1 << std::endl;//같은 값
	std::cout << "REF: " << num2 << std::endl;//같은 값

	std::cout << "VAL: " << &num1 << std::endl;//같은 주소값
	std::cout << "REF: " << &num2 << std::endl;//같은 주소값

	return 0;
}

#include <iostream>

int main(void)
{
	int arr[3] = { 1,3,5 };
	int& ref1 = arr[0];
	int& ref2 = arr[1];
	int& ref3 = arr[2];

	std::cout << ref1 << std::endl;
	std::cout << ref2 << std::endl;
	std::cout << ref3 << std::endl;
	return 0;
}

#include <iostream>

int main(void)
{
	int num = 12;
	int* ptr = &num;
	int** dptr = &ptr;

	int& ref = num;
	int* (&pref) = ptr;
	int** (&dpref) = dptr;

	std::cout << ref << std::endl;
	std::cout << *pref << std::endl;
	std::cout << **dpref << std::endl;
}

#include <iostream>
using namespace std;

void swapbyref2(int& ref1, int& ref2)
{
	int temp = ref1;
	ref1 = ref2;
	ref2 = temp;
}

int main()
{
	int val1 = 10;
	int val2 = 20;

	swapbyref2(val1, val2);
	std::cout << "val1: " << val1 << endl;
	std::cout << "val2: " << val2 << endl;
	return 0;
}

#include <iostream>

using namespace std;

void swap1(int& ref)
{
	ref++;
}

void swap2(int& ref2)
{
	ref2 = ref2 * -1;
}

int main(void)
{
	int num1 = 10;
	int num2 = 20;

	swap1(num1);
	std::cout << num1 << endl;
	swap2(num2);
	std::cout << num2 << endl;

	retyrn 0;
}

#include <iostream>

void swapPointer(int& ref1, int& ref2)
{
	int temp = ref1;
	ref1 = ref2;
	ref2 = temp;
}

int main(void)
{
	int num1 = 5;
	int* ptr1 = &num1;
	int num2 = 10;
	int* ptr2 = &num2;

	swapPointer(*ptr1, *ptr2);
	std::cout << *ptr1 << ' ' << *ptr2 << std::endl;

	return 0;

}*/
#include <iostream>

using namespace std;

typedef struct __point
{
	int xpos;
	int ypos;
}point;

point &PointAdd(const point &x1,const point &x2) 
{
	point* ref = new point;

	ref->xpos = x1.xpos + x2.xpos;   //x1은 힙 영역 할당x
	ref->ypos = x1.ypos + x2.ypos;   //x2는 힙 영역 할당x
	return *ref;
	
}

int main(void)
{
	point* p1 = new point;
	point* p2 = new point;

	cin>>p1->xpos>>p1->ypos>>p2->xpos>>p2->ypos;
	
	point &result= PointAdd(*p1,*p2);

	cout<<result.xpos<<","<<result.ypos;

	delete p1;
	delete p2;
	
}

