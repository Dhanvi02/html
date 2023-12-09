#include<iostream>
using namespace std;
class student
{
	public:
		student()
		{
			cout<<"welcome to the constructur\n";
		}
		student(int a, int b)
		{
			cout<<"a = "<<a;
			cout<<"	b = "<<b;
		}
};
main()
{
	student s1=student();
	student s2=student(10,20);
}
