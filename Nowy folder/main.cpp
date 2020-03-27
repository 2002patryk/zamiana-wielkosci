#include <iostream>
#include <fstream>
using namespace std;

	class zamiana{
		
   fstream plik;  
   ofstream plik1;
   
   public:
   	zamiana();
   	~zamiana();
   	
   	void liczba();

};
   	
   	zamiana::zamiana()
	{
		plik.open("c\\plik.txt");
		plik1.open("c\\plik1.txt");	
   }   
   
   void zamiana::liczba()
   {
   		string napis;
   		
   while(!plik.eof())
   {
   	plik >> napis;
   	
   	
   	for(int i=0;i<napis.length();i++)
   	{
   			napis[i] -= 32;
   			}
   			plik1<<napis;
	}
	   
   }
   zamiana::~zamiana()
   {
   	plik.close();
   	plik1.close();
   }

   
   int main() 
{
   zamiana z;
   z.liczba();
                             
	return 0;
}
