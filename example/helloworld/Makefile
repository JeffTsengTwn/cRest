CC = gcc
SRC_PROGRAM = main.c
INC = -I /usr/include   #include headers的位置
LIB = -lcREST -lfcgi           #include libraries的位置
program = hello

all: $(program)

$(program): $(SRC_PROGRAM) 
	$(CC) -o $@ $< ${INC} ${LIB}

clean:
	rm -f $(TARGET_LIB) $(program)

install:
	# 如果需要安裝共享庫到系統，可以在這裡添加相應的安裝命令
	cp $(TARGET_LIB) /usr/lib/
	cp $(HDR_LIB) /usr/include

uninstall:
	# 如果需要卸載共享庫，可以在這裡添加相應的卸載命令
	rm /usr/lib/$(TARGET_LIB)
	rm /usr/include/$(HDR_LIB)
