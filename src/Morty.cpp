/* 
 __  __            _                                
|  \/  | ___  _ __| |_ _   _        ___ _ __  _ __  
| |\/| |/ _ \| '__| __| | | |      / __| '_ \| '_ \ 
| |  | | (_) | |  | |_| |_| |  _  | (__| |_) | |_) |
|_|  |_|\___/|_|   \__|\__, | (_)  \___| .__/| .__/ 
                       |___/           |_|   |_|  
*/

// Include the Morty header file
#include "Morty.hpp"

// =========================================================================== // 
//          Define functions enclosed in Namespace C137 here 
// =========================================================================== // 

namespace C137 {
	void Morty(int start, int stop) {
		for (int i = start; i <= stop; i++) {
			if (i % 15 == 0) // if divisible by 15
				std::cout << i << ": Aww Geez Man" << std::endl;
			else if (i % 5 == 0) // if divisible by 5
				std::cout << i << ": Geez" << std::endl;
			else if (i % 3 == 0) // if divisible by 3
				std::cout << i << ": Aww" << std::endl;
			else
				std::cout << i << ": " << std::endl;
		}
	}
	
	void Morty(int start, int stop, int step) {
		for (int i = start; i <= stop; i += step) {
			if (i % 15 == 0) // if divisible by 15
				std::cout << i << ": Aww Geez Man" << std::endl;
			else if (i % 5 == 0) // if divisible by 5
				std::cout << i << ": Geez" << std::endl;
			else if (i % 3 == 0) // if divisible by 3
				std::cout << i << ": Aww" << std::endl;
			else
				std::cout << i << ": " << std::endl;
		}
	}
}


// =========================================================================== // 
//          Define functions enclosed in Namespace Z286 here 
// =========================================================================== //

namespace Z286 {
	void Morty(int start, int stop) {
		for (int i = start; i <= stop; i++) {
			if (i % 15 == 0) // if divisible by 15
				std::cout << i << ": naM zeeG wwA" << std::endl;
			else if (i % 5 == 0) // if divisible by 5
				std::cout << i << ": zeeG" << std::endl;
			else if (i % 3 == 0) // if divisible by 3
				std::cout << i << ": wwA" << std::endl;
			else
				std::cout << i << ": " << std::endl;
		}
	}

	void Morty(int start, int stop, int step) {
		for (int i = start; i <= stop; i += step) {
			if (i % 15 == 0) // if divisible by 15
				std::cout << i << ": naM zeeG wwA" << std::endl;
			else if (i % 5 == 0) // if divisible by 5
				std::cout << i << ": zeeG" << std::endl;
			else if (i % 3 == 0) // if divisible by 3
				std::cout << i << ": wwA" << std::endl;
			else
				std::cout << i << ": " << std::endl;
		}
	}
}