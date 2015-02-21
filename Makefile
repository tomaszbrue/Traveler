PREFIX?=/usr/local
CC	= g++-4.9
CFLAGS	= -Wall -g 
LDFLAGS	= -L${PREFIX}/lib -pthread -lboost_system -lboost_thread
EXE = traveler
OBJ = edge.o vertex.o
INC =

all: $(EXE)

clean:
	rm -f *~ *.o core $(EXE)
	rm -rf *.dSYM

$(EXE): % : %.o $(OBJ)
	$(CC) -o build/$@ $@.o $(OBJ) $(LDFLAGS)

%.o: %.cc $(INC)
	$(CC) $(CFLAGS) -c $<