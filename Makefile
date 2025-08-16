objects = src/main.o

calci : $(objects)
	cc -o calci $(objects)

clean :
	rm calci $(objects)
