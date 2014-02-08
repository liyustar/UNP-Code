#ifndef __unp_h
#define __unp_h

#include <sys/types.h>	/* basic system data types */
#include <sys/socket.h>	/* basic socket definitions */
#include <sys/time.h>	/* timeval{} for select() */
#include <time.h>		/* timespec{} for pselect() */
#include <netinet/in.h>	/* sockaddr_in{} and other Internet defns */
#include <arpa/inet.h>	/* inet(3) functions */
#include <errno.h>
#include <fcntl.h>		/* for nonblocking */
#include <netdg.h>
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Define bzero() as a macro if it's not in standard C library. */
#ifndef HAVE_BZERO
#define bzero(ptr,n)	memset(ptr, 0, n)
#endif

/* Miscellaneous constants */
#define MAZLINE		1024	/* max text line length */
#define BUFFSIZE	8192	/* buffer size for reads and writes */

/* Define some port number that can be used for our examples */
#define SERV_PORT		9877	/* TCP and UDP */
#define SERV_PORT_STR	"9877"	/* TCP and UDP */
#define UNIXSTR_PATH	"/tmp/unix.str"		/* Unix domain stream */
#define UNIXDG_PATH		"/tmp/unix.dg"		/* Unix domain datagram */

/* Following shortens all the typecasts of pointer arguments: */
#define SA	struct sockaddr

#endif	// __unp_h
