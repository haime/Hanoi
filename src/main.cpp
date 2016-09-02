#include "Hanoi.h"

int main()
{
	
	std::cout<<"Torres de Hanoi"<<std::endl;
	Hanoi H(3);
	H.LlenarTorre();
	//H.MostrarTorres();


	H.Resolver();
	std::cout<<"_______________________________________________"<<std::endl;
	H.MostrarTorres();
	return 0;
}
