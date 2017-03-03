PROGRAM_NAME=mygpio
FILES=main.c gpio.c gpio.h tsimple.h

CC=gcc
CFLAGS=-O2 -Wall



.PHONY: all clean

all:
	$(CC) $(CFLAGS) -o $(PROGRAM_NAME) $(FILES)
	
clean:
	rm -f $(PROGRAM_NAME)
	