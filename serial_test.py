import serial

ser = serial.Serial('COM15', baudrate=9600)  # open serial port
ser.flushInput()  # flush input buffer

power = 0

buffer = []  # buffer to store data
while True:
    ser_bytes = ser.read(1)
    if ser_bytes:
        buffer.append(ser_bytes)
        if ser_bytes == b'\r':
            # print buffer as hex
            print(" ".join("{:02x}".format(ord(c)) for c in buffer))
            # if the buffer matches 7e 30 30 31 35 30 20 31 0d
            if buffer == [b'~', b'0', b'0', b'1', b'5', b'0', b' ', b'1', b'\r']:
                # a = 0/1 (off/on)
                # bbbb = lampHours
                # cc = source (n: 00/01/02/03/04/05 = None/VGA1/VGA2/Video/HDMI1/HDMI2)
                # dddd = FW version
                # e = display mode (0/1/2/3/4/5/6 None/Cinema/Reference/Photo/Bright/3D/Use)
                writebuf = b"OK160600513374"#OK 1 6060 05 1337 4
                ser.write(writebuf)

            buffer = []
   


ser.close()  # close the serial port when finished
