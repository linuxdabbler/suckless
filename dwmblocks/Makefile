.POSIX:

PREFIX ?= ~/git/suckless/dwmblocks 
CC = gcc

dwmblocks: dwmblocks.o
	$(CC) dwmblocks.o -lX11 -o dwmblocks
dwmblocks.o: dwmblocks.c config.h
	$(CC) -c dwmblocks.c
clean:
	rm -f *.o *.gch dwmblocks
install: dwmblocks
	cp -f dwmblocks ~/bin/
	chmod 755 ~/bin/dwmblocks
uninstall:
	rm -f ~/bin/dwmblocks

.PHONY: clean install uninstall


