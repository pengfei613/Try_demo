cc=g++
FLAG=-lm -wall -g

TaskPool:TaskPool.cpp TaskPool.h TaskPool.c
	$(cc) $(FLAG) TaskPool.cpp TaskPool.h TaskPool.c -o TaskPool -std=c++11 -lpthread
clean:
	rm -rf *.o
