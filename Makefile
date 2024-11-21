all:
	cd src && g++ -std=c++14 -o HW5 HW5.cpp -I/opt/homebrew/include -L/opt/homebrew/lib -larmadillo && ./HW5