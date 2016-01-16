#---------
#
# CppUTest Examples Makefile
#
#----------

#Set this to @ to keep the makefile quiet
ifndef SILENCE
	SILENCE = @
endif

#--- Inputs ----#
COMPONENT_NAME = tdd-exercises
CPPUTEST_HOME = cpputest

CPPUTEST_USE_EXTENSIONS = Y
CPP_PLATFORM = Gcc

SRC_DIRS = \
	src/

TEST_SRC_DIRS = \
	Testing/ \
	Testing/Tests/ \

INCLUDE_DIRS =\
	$(SRC_DIRS) \
	$(TEST_SRC_DIRS) \
	$(CPPUTEST_HOME)/include \

include $(CPPUTEST_HOME)/build/MakefileWorker.mk


