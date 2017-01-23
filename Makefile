#Fill in the dependencies and rules to make the make file
CC = gcc
LD = gcc
ifdef DEBUG
CFLAGS = -ggdb -Wall
else
CFLAGS = -std = c99 -O3
endif
LIBS = -lm

testVectors: testVectors.o vectors.c vectors.h
	$(LD) -o testVectors vectors.o testVectors.o $(LIBS)
	
vectors.o: vectors.c vectors.h
	$(CC) $(CFLAGS) -o vectors.o -c vectors.c

testVectors.o: testVectors.c vectors.c
	$(CC) $(CFLAGS) -o testVectors.o -c testVectors.c

clean:
	rm *.o
	rm testVectors
