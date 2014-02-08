CFLAGS = -I../lib

EXEC = daytimetcpcli daytimetcpsrv

all: ${EXEC}

daytimetcpcli: ../lib/error.o
daytimetcpsrv: ../lib/wrapsock.o ../lib/error.o

clean:
	-rm *.o ${EXEC}

