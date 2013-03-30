/* Program version */
/* not for the inetutils version */
#define VERSION "4.7.26"

/* Configurable features */

/* Always hide legal disclaimers */
#undef ALWAYS_HIDE_DISCL

/* Default server */
#define DEFAULTSERVER   "whois.arin.net"

/* Configuration file */
/*
#define CONFIG_FILE "/etc/whois.conf"
*/

/* autoconf in cpp macros */
#ifdef linux
# define ENABLE_NLS
#endif

#ifdef __FreeBSD__
/* which versions? */
# define HAVE_GETOPT_LONG
# define HAVE_GETADDRINFO
# define ENABLE_NLS
# define LOCALEDIR "/usr/local/share/locale"
#endif

/* needs unistd.h */
#ifdef _ISO_CPP_14882_1998
/* Solaris 8 and better. What else? */
# define HAVE_GETADDRINFO
#endif

#if defined __GLIBC__
# define HAVE_GETOPT_LONG
# if __GLIBC__ >= 2 && __GLIBC_MINOR__ >= 1
#  define HAVE_GETADDRINFO
# endif
# if __GLIBC__ >= 2 && __GLIBC_MINOR__ >= 7
#  define HAVE_SHA_CRYPT
# endif
#endif

/* Linux, Solaris 5, FreeBSD 5.x. What else? */
#if defined _POSIX_VERSION && _POSIX_VERSION >= 200112L
# define HAVE_WORDEXP
#endif

#if defined _POSIX2_VERSION
# define HAVE_REGEXEC
#endif


/* system features */
#ifdef ENABLE_NLS
# ifndef NLS_CAT_NAME
#  define NLS_CAT_NAME   "whois"
# endif
# ifndef LOCALEDIR
#  define LOCALEDIR     "/usr/share/locale"
# endif
#endif

