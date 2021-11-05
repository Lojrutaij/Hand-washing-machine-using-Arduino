# Hand washing Machine 
  โปรเจกต์นี้เป็นแนวคิดต้นแบบของการทำเครื่องล้างมืออัตโนมัติ โดยเวลาใช้งานผู้ใช้จะนำมือไปที่ใต้ IR sensor เมื่อเซนเซอร์ตรวจจับได้แล้วจะมีหน้าจอ LCD ขึ้นว่า Detect hands ถ้าไม่สามารถตรวจจับมือได้จะขึ้นคำว่า Insert hands
  ซึ่งสามารถต่อยอดโปรเจกต์ต่างๆ ได้ เช่น ต่อมอเตอร์น้ำ หรือต่อกับหัวพ่นเพื่อพ่นเจลแอลกอฮอล์ เป็นต้น
# Curcuit Diagram
![Lab17](https://user-images.githubusercontent.com/91018933/140504011-22119bce-b9c2-44ff-aa9a-fe8d060c0346.jpg)
  1. Arduino Uno R3
  2. Infrared sensor
  3. LEDs
  4. LCD I2C 16*2
 
 # Coding
  ติดตั้ง Library สำหรับ LCD I2C 16*2 (LiquidCrystal I2C Marco Schwartz)
  https://www.arduino.cc/reference/en/libraries/liquidcrystal-i2c/
  
 # Results
![20210823_104213000_iOS](https://user-images.githubusercontent.com/91018933/140504259-4f3a2937-4af5-4a87-b72f-fb2dfa0109ef.png)
![20210823_104217000_iOS](https://user-images.githubusercontent.com/91018933/140504267-f8ccb320-fd41-491a-8920-adc14e44059b.png)
