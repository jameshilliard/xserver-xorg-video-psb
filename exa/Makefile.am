module_LTLIBRARIES = libexa.la

libexa_la_LDFLAGS = -avoid-version

INCLUDES = \
	$(XORG_INCS) 

AM_CFLAGS = $(DIX_CFLAGS) $(XORG_CFLAGS)

libexa_la_SOURCES = \
	examodule.c \
	exa_accel.c\
	exa.c\
	exa.h\
	exa_migration.c\
	exa_offscreen.c\
	exa_priv.h\
	exa_render.c\
	exa_unaccel.c\
	fbpict.h\
	cw.h\
	shmint.h

include cpprules.in

drivermandir = $(DRIVER_MAN_DIR)
driverman_DATA = exa.$(DRIVER_MAN_SUFFIX)
CLEANFILES = $(driverman_DATA) exa.man

exa.$(DRIVER_MAN_SUFFIX): exa.man
	-rm -f exa.$(DRIVER_MAN_SUFFIX)
	$(LN_S) exa.man exa.$(DRIVER_MAN_SUFFIX)

EXTRA_DIST = exa.man.pre
