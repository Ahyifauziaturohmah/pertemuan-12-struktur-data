#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	ifstream is("D:\\data.txt");
	
	if(!is.is_open())
	{
		cout << "file gagal di buka";
		return 1;
		
	}
	
	string line;
	while(getline(is, line))
	{
		cout << line << endl;
	}
	return 0;
}
