AM_LDFLAGS=$(LIBS)

res/en.res: res/en.txt
	genrb -d res res/en.txt

res/da.res: res/da.txt
	genrb -d res res/da.txt

bin_PROGRAMS = i18n

i18n_SOURCES = i18n.cpp

all: res/da.res res/en.res
