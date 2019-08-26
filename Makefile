
all:
	@gcc -c clib.c
	@gcc -c helper.c
	@ar rsv libclib.a clib.o helper.o

clean:
	@rm -f *.o
	@rm -f *.a
