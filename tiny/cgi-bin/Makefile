CC = gcc

#Release
CFLAGS = -O2 -Wall -I ..
#Debug
#CFLAGS = -g -Wall -I ..

all: adder #proofofwork

adder: adder.c 
	$(CC) $(CFLAGS) -o adder adder.c

#proofofwork: proofofwork.c 
#$(CC) $(CFLAGS) -o PoW proofofwork.c

clean:
	rm -f adder *~
