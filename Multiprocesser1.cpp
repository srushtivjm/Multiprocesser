#include<iostream>
#include<string.h>
using namespace std;

class Message
{
	private :
		
		char ch[];
		
	public :
		
		Message(char mh[])
		{
			strcpy(ch,mh);
		}
		void print()
		{
			cout<<"Noice pollution =";
		}
		void print(char mh[])
		{
			cout<<ch<<" "<<mh;
		}
};

main()
{

	Message m1("Quite nuture helps in concentretion.");
	m1.print();
	m1.print("But because of noice pollution it is difficlute to find quite place.");
}
