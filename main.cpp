#include <iostream>
#include <fstream>
#include <string>
#include <vector>


using namespace std;

int main() 
{
	ifstream is("D:\\data.txt");
	if(!is.is_open())
	{
		cout << "tdk dapat membuka file" ;
		return 1;
	}
	
	vector<string> data;
	string line;
	while(getline(is,line))
	{
		data.push_back(line);
	}
	
	for(auto d:data)
	{
		cout << d << endl;
	}
	
	is.close();
	return 0;
}
