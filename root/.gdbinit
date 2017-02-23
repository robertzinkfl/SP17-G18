define setup
dir ../src/kern/compile/DUMBVM/
target remote unix:.sockets/gdb
break panic
end
