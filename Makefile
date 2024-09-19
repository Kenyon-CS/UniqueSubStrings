# Makefile for finding unique substrings using std::set

CXX = g++
CXXFLAGS = -Wall -std=c++11

# Target to compile and link the program
unique_substrings: unique_substrings.o
	$(CXX) $(CXXFLAGS) -o unique_substrings unique_substrings.o

# Compile the object file for unique_substrings.cpp
unique_substrings.o: unique_substrings.cpp
	$(CXX) $(CXXFLAGS) -c unique_substrings.cpp

# Clean up the compiled files
clean:
	rm -f *.o unique_substrings
