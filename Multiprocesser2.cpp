#include<iostream>
 using namespace std;
 class Employee
 {
 	public :
 		
 	void setdata()
 	{
 		cout<<"Employee of SD company"<<endl;
	 }
	 void setdata(int n)
	 {
	 	cout<< n <<" Employee are working in this company."<<endl;
	 }
	 void setdata(int n,char c[])
	 {
	 	cout<< n <<" Worker are working in "<< c <<" department."<<endl;
	 }
	 void setdata(float f,char c[])
	 {
	 	cout<< f <<" percent worker are well "<< c <<endl;
	 }
 };
 main()
 {
 	Employee e1;
 	e1.setdata();
 	e1.setdata(300);
 	e1.setdata(50,"managing");
 	e1.setdata(70.60f,"experienced");
 	
 }
