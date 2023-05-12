#include<iostream>
using namespace std;
class Company
{
	public :
		
		void material()
		{
			cout<<"Company`s first priority is exparienced employee. "<<endl;
		}
};
class Student :public Company
{
	public :
		void material()
		{
			cout<<"Student start to do internship for gain their expariance"<<endl;
		}
};

main()
{
	Student s1;
	s1.material();
	s1.Company::material();
}
