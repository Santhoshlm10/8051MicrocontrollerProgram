rm -rf main.asm main.hex main.ihx main.lk main.lst main.map main.mem main.rel main.rst main.sym
sdcc -mmcs51 --model-small --iram-size 128 --xram-size 0 --code-size 2048 main.c
objcopy -I ihex -O ihex main.ihx main.hex
sudo avrdude -p AT89S52 -c usbasp -P /dev/ttyUSB1 -U flash:w:main.hex:i
