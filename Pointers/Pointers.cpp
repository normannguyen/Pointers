//Norman Nguyen
//Program: Pointers - 

#include <iostream>
#include <string>
//Standard Library
using namespace std;
//Welcome Message
void WelcomeUser()
{
	cout << "\tWelcome, we're now going to inspect your computers CPU and GPU." << endl;
}
//Nvidia Function
void NvidiaGPU()
{
	string nGPU = "Nvidia"; //String
	string *slot = &nGPU; //String Pointers
	cout << "\nYour graphics card is " << nGPU << endl;
	cout << "That graphics card you're looking for is in " << slot << "\n" << endl;
	//System Pause
	system("pause");
}
//Intel Function
void IntelCPU()
{
	double GHz = 3.4; //Double for GHz
	double *socket = &GHz; //Int Pointers
	string cores = "quad core"; //String
	string *cpuCores = &cores; //String Pointers
	cout << "\nYour CPU speed is "<< GHz << "GHz" << endl;
	cout << "Your CPU is located in " << &socket << endl;
	cout << "Your CPU cores are " << cores << endl;
	cout << "Cores info located in " << cpuCores << "\n" <<endl;
}
//Main Function
int main()
{
	//Functions listed in main.
	WelcomeUser();
	NvidiaGPU();
	IntelCPU();
	//System Pause
	system("pause");
	return 0;
}
