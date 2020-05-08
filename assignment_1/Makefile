#CPPFLAGS = -g -O0

average: main.o average.o 
	g++ main.o average.o -o average

main.o: main.c average.h
	g++ main.c -c

average.o: average.c average.h
	g++ average.c -c


