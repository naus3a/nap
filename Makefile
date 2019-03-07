all: nap

nap: nap.hpp main.cpp 
	g++ main.cpp -o nap

clean:
	rm -f nap
