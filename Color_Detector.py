import cv2
import colorsys


cap = cv2.VideoCapture(0)
green = [120,255,255]    
blue = [160,50,50]      
yellow = [40,255,255]     
white = [0,5,5]  
orange = [17,100,100]  
red = [179,255,255]
black= [0,0,0]

green_bgr = [0,255,0]
blue_bgr = [255,0,0]
red_bgr = [0,0,255]
yellow_bgr = [0,255,255]
orange_bgr = [0,130,245]
white_bgr = [255,255,255]

# This function fixes the color of the pixel into the standard color
def colorFix(color):   
    # The color of the pixel at first is in BGR 
    # Now we have to convert it into HSV
    color = colorsys.rgb_to_hsv(color[2]/255, color[1]/255, color[0]/255)
    color = (color[0]*255,color[1]*255,color[2]*255)
    print(color)
    color = list(color)
    # Depend on the color code in HSV, we classify them into 6 different color
    if (color>[yellow[0]-15,50,50]) and color < [yellow[0]+15,255,255]:
        print('Yellow')
        return yellow_bgr
    elif (color>[orange[0]-10,50,50]) and color < [orange[0]+10,255,255]:
        print('Orange')
        return orange_bgr
    elif ((color<[6,255,255]) and color > [0,255,255]) or (color>[230,100,100]) and color < [254,255,255]:
        print('Red')
        return red_bgr
    elif(color[2]>=150) and color[1]<100:
        print('White')
        return white_bgr
    elif (color>[green[0]-15,50,50]) and color < [green[0]+25,255,255]:
        print('Green')
        return green_bgr
    elif (color>[blue[0]-5,50,50]) and color < [blue[0]+15,255,255]:
        print('Blue')
        return blue_bgr
    
    else:
        return black
    
while True:
    #Turn the capture into a frame
    _, frame = cap.read()
    
    #Initialize the coordinates of the scanning pixel
    X = 240
    Y = 100
    originX = (X,Y)
    originY = (X+50,Y+50)
    X1 =((originX[0]+originY[0])/2)
    Y1 = ((originX[1]+originY[1])/2)
    origin = (int (X1),int (Y1))
    
    #Take the center pixel of each square
    cl1 = frame[int (Y1),int (X1)]
    c1 = cl1.tolist()   #Convert the tuple into a list
    c1 = colorFix(c1)   #Turn the color of the pixel 
    
    
    cl2 = frame[int (Y1)+100,int (X1)]
    c2 = cl2.tolist()
    c2 =  colorFix(c2)
    
    cl3 = frame[int (Y1)+200,int (X1)]
    c3 = cl3.tolist()
    c3 =  colorFix(c3)
    
    cl4= frame[int (Y1),int (X1) +100]
    c4 = cl4.tolist()
    c4 =  colorFix(c4)
    
    cl5 = frame[int (Y1)+100,int (X1)+100]
    c5 = cl5.tolist()
    c5 =  colorFix(c5)
    
    cl6 = frame[int (Y1)+200,int (X1)+100]
    c6 = cl6.tolist()
    c6 =  colorFix(c6)
    
    cl7 = frame[int (Y1),int (X1)+200]
    c7 = cl7.tolist()
    c7 =  colorFix(c7)
    
    cl8 = frame[int (Y1)+100,int (X1)+200]
    c8 = cl8.tolist()
    c8 =  colorFix(c8)
    
    cl9 = frame[int (Y1)+200,int (X1)+200]
    c9 = cl9.tolist()
    c9 =  colorFix(c9)
 
    #Draw the square and the point
    # Square 1
    cv2.rectangle(frame, originX, originY, color = c1, thickness=15, lineType=8, shift=0)
    cv2.circle(frame, origin, radius = 10, color = c1, thickness=15, lineType=8, shift=0)    
    # Square 2
    cv2.rectangle(frame, (originX[0]+100,originX[1]), (originY[0]+100,originY[1]), color = c4, thickness=15, lineType=8, shift=0)    
    cv2.circle(frame, (origin[0]+100,origin[1]), radius = 10, color = c4, thickness=15, lineType=8, shift=0)
    # Square 3
    cv2.rectangle(frame, (originX[0]+200,originX[1]), (originY[0]+200,originY[1]), color = c7, thickness=15, lineType=8, shift=0)    
    cv2.circle(frame, (origin[0]+200,origin[1]), radius = 10, color = c7, thickness=15, lineType=8, shift=0)
    # Square 4
    cv2.rectangle(frame, (originX[0],originX[1]+100), (originY[0],originY[1]+100), color = c2, thickness=15, lineType=8, shift=0)    
    cv2.circle(frame, (origin[0],origin[1]+100), radius = 10, color = c2, thickness=15, lineType=8, shift=0)
    # Square 5
    cv2.rectangle(frame, (originX[0]+100,originX[1]+100), (originY[0]+100,originY[1]+100), color = c5, thickness=15, lineType=8, shift=0)    
    cv2.circle(frame, (origin[0]+100,origin[1]+100), radius = 10, color = c5, thickness=15, lineType=8, shift=0)
    # Square 6
    cv2.rectangle(frame, (originX[0]+200,originX[1]+100), (originY[0]+200,originY[1]+100), color = c8, thickness=15, lineType=8, shift=0)    
    cv2.circle(frame, (origin[0]+200,origin[1]+100), radius = 10, color = c8, thickness=15, lineType=8, shift=0)
    # Square 7
    cv2.rectangle(frame, (originX[0],originX[1]+200), (originY[0],originY[1]+200), color = c3, thickness=15, lineType=8, shift=0)    
    cv2.circle(frame, (origin[0],origin[1]+200), radius = 10, color = c3, thickness=15, lineType=8, shift=0)
    # Square 8
    cv2.rectangle(frame, (originX[0]+100,originX[1]+200), (originY[0]+100,originY[1]+200), color = c6, thickness=15, lineType=8, shift=0)    
    cv2.circle(frame, (origin[0]+100,origin[1]+200), radius = 10, color = c6, thickness=15, lineType=8, shift=0)
    # Square 9
    cv2.rectangle(frame, (originX[0]+200,originX[1]+200), (originY[0]+200,originY[1]+200), color = c9, thickness=15, lineType=8, shift=0)    
    cv2.circle(frame, (origin[0]+200,origin[1]+200), radius = 10, color = c9, thickness=15, lineType=8, shift=0)
    
    # Show the frame to scan
    cv2.imshow('Frame',frame)
    
    k = cv2.waitKey(5) & 0xFF
    if k == 27:
        break
cv2.destroyAllWindows()
cap.release()