PROGRAM_NAME = main
FLAGS = -lpthread -std=c++11 -Wall -Werror
CPP = g++

main: main.o
	$(CPP) $(FLAGS) -o main main.o

main.o: main.cpp
	$(CPP) -c $(FLAGS) main.cpp -o  main.o

run:
	./$(PROGRAM_NAME)
