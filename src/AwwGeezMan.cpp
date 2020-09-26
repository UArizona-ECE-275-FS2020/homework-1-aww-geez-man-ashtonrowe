/*
 _____ ____ _____   ____ _____ ____  
| ____/ ___| ____| |___ \___  | ___| 
|  _|| |   |  _|     __) | / /|___ \ 
| |__| |___| |___   / __/ / /  ___) |
|_____\____|_____| |_____/_/  |____/ 
                                     
 _   _                                         _      _ 
| | | | ___  _ __ ___   _____      _____  _ __| | __ / |
| |_| |/ _ \| '_ ` _ \ / _ \ \ /\ / / _ \| '__| |/ / | |
|  _  | (_) | | | | | |  __/\ V  V / (_) | |  |   <  | |
|_| |_|\___/|_| |_| |_|\___| \_/\_/ \___/|_|  |_|\_\ |_|
 
 
Aww Geez Man: Interdimensional Mortys.

One of Morty C137's favorite phrases is "Aww Geez Man". But, in dimension Z286, there
exists a Morty who says everything backwards.

*/

// Include the Morty header file
#include "Morty.hpp"


int main (int ac, char** av) {
	int start, stop;
	int step = 1;
	std::string dim;
	
	// Parse the command line arguments. The program is executed as
	// ./AwwGeezMan {start} {stop} {dimension}
	// or 
	// ./AwwGeezMan {start} {stop} {step} {dimension}
	if (ac != 4 and ac != 5) {
		std::cout << "Error: Command line arguments are incorrect. Call program as (1) or (2)" 
			<< std::endl;
		std::cout << "(1)\t./AwwGeezMan {start} {stop} {dimension}" << std::endl;
		std::cout << "(2)\t./AwwGeezMan {start} {stop} {step} {dimension}" << std::endl;
		
		return -1;
	}
	
	else {
		// assign start, stop, and dimension variables from cmd args
		start = atoi(*(av + 1));
		stop = atoi(*(av + 2));
		dim.assign(*(av + ac - 1));

		if (ac == 5) // if step value included in cmd arg, assign to step, else step is 1
			step = atoi(*(av + 3));

		if ((dim != "C137") && (dim != "Z286")) {
			std::cout << "Error: Unknown Dimension!!";
			
			return -1;
		}
		else {
			if (dim == "C137") {
				std::cout << "Morty C137 says:" << std::endl;
				if (step == 1) // if no step value in cmd args
					C137::Morty(start, stop);
				else
					C137::Morty(start, stop, step);
			}
			else {
				std::cout << "Morty Z286 says:" << std::endl;
				if (step == 1)
					Z286::Morty(start, stop);
				else
					Z286::Morty(start, stop, step);
			}
		}
	}
		
	return 0;
}
