Sign Language Analyzer using Python Programming Language 
 
 
 
 
Abstract—This paper details the research done in the development of a web-based application to be used as a training program for the American Sign Language. The goal of this project is to preserve and promote the American Sign Language (ASL) and Deaf Culture through interactive learning. The users are encouraged to engage to a fun-learning system that the project has to offer. The project will be implementing digital signal processing and image processing in performing comparison between the user input (answer) and the stored ASL in the dataset of images. The project also tackles an interdisciplinary field that deals with how computers can be made for gaining high-level understanding from digital images and videos.
Keywords—image processing, filters, digital signals processing, computer vision.
I.	INTRODUCTION

The use of web-based applications is one of the most efficient ways of presenting solutions to users. Unlike app-based software or that with accompanying hardware, web-based applications may be accessed everywhere. As long as the user/s has a computer, they are good to go.
In the development of web-based applications, tools and readily-available datasets were used. The dataset used was a compilation of images for each letter in the American sign language. Using those pictures, an image processing algorithm may be developed to analyze uploaded pictures and identify what letter was displayed after its comparison with the program’s dataset.
Most previous works use datasets readily available online for identifying gestures in the American sign language. Most programs use software such as MATLAB, Python, or even SciLab. In the development of this research, web based packages proved useful, especially since the main objective is the development of a training software accessible without installation of any software and pure web connection.
In this research, the general objective is to develop a web-based application that acts as a training program for the American sign language. Specific objectives for this study are as follows: (1) to develop an algorithm to identify gestures uploaded by the user through the webcam, (2) to develop different levels wherein users can both identify gestures and send in gestures through the program, and (3) to include a gamification of the program, wherein users shall be scored based on their performance.
The study aims to address one of the largest problems encountered by the deaf and mute – lack of knowledge in the American sign language. Through the development of this training program, anyone interested in the American sign language may access the web-based application. The gamification of the software shall further allow the users to enjoy the learning process.
The study shall focus on the processing of images uploaded and comparing them to the given dataset. The use of Python and OpenCV shall provide flexibility and freedom in the development of this software. Filters not previously mentioned shall be excluded in the scope of this research.

II.	REVIEW OF RELATED LITERATURE

A.	Image Processing
Image processing is a method used to analyze and modify the image through both mathematical and observational approaches using computer vision. Different algorithms are formulated to automate the process of filtering and manipulating pictures without the need of special tools and much human intervention. The preceding subsections detail the different image processing operations used in this research.

B.	Color Manipulation
In the manipulation of colors, it is imperative to note the different color channels present: red, blue, and green. Unlike the primary colors, the computer reads color in the previously mentioned parameters. In colored images, each pixel has a specified value for red, blue, and green. In order to come up with complex colors, manipulation of those three parameters produce a spectrum of colors.
C.	Grayscaling Methods
Gray scaling is an operation that aims to remove color and transform an image to that in monochrome. Given that part of this research includes the addition of a filter to transform a images to monochrome, a simple average grayscaling operation shall suffice. The average gray scaling method involves the summation of the intensities of each color, divided by three. The quotient of which shall then replace the value of the colors with the acquired quotient. Figure 2.1 shows how the different Gray scaling operations affect the transformation of the image.
  
Figure 1 – Effects of Different Grayscaling Operations
(Source: Cook, 2009)

D.	Python
	Python is a high-level programming language used in programming. Its syntax is easy to learn as it is logical and contains similar syntaxes with other high-level programming languages. Python may be programmed using different editors such as Vim, Nano, LeafPad, and through the Integrated Development Environment (IDLE). Just like other programing language, Python supports numerous libraries, some of which are ideal for image processing.

E.	OpenCV Library
	The OpenCV Library or open source computer vision library is used mainly for image and video processing. Its library is made available with many different programming languages. It has a wide array of applications ranging from filtering to the development of augmented reality. The current research shall use the library manipulating color and in the development of filters.

III.	METHODOLOGY

A.	Research Outcome
The research focuses on the development of a program that can compare an image uploaded to a given dataset, through image processing. The development of a solution that is web based is identified as a solution that is easily accessible by anyone with a web browser, webcam, and internet connection.
 
Figure 2. Use Case Diagram
In this diagram, there are two actors that has its own functionality. The USER, its functionality or use case, depends whether the user will login, signup, see the scoreboard, or checks the options. When a user has an existing account, the user will access the game. In the game proper system, the user can choose its own difficulty whether it is hard, medium, or easy. The game is established with a database about American sign language. When a user is new to the system. The administrator, the managing actor, will include the new user. The administrator can also modify the account, it can edit the personals or discards the personals.


B.	Conceptual Framework
Figure 3.1 below shows the conceptual framework of the research. The research aims to obtain an image input from a webcam, and applying the image processing techniques to compare it to the given dataset. Furthermore, other levels include the identification of gestures through typing what they represent.

 
Figure 3 – Conceptual Framework


Data Flow Diagram 
Figure 4.1 – Data Flow Diagram Level 0

In this figure there are three sources that shares the same function of this system. The user uploads the text or the image into the system. Wherein the web-based system, as its function, will check the rendered image from the dataset. The web-based then update the score of the user and will shows the user whether he is correct or not. 


Figure 4.2 – Data Flow Diagram Level 1
This figure shows how the system is divided into different sub-systems each of which deals with one or more of the data flows to or from an external agent, and which together provide all of the functionality of the system as a whole.


C.	Program Processes
The program, just like any other software, contains several sub processes and the preceding subsections explain each sub process.

1)	Main Menu
The program begins with a main menu that allows the user to either login, create an account, modify the display settings, or access the score board. Figure 3.2 below shows the main menu of the program.

 
Figure 5 – Main Menu

2)	User Login

The program begins with a main menu that allows the user to either login, create an account, modify the display settings, or access the score board. Figure 3.2 below shows the main menu of the program.
 
Figure 5.1 – User Login Flowchart

To log-in, the user is required to input a username and a password. This data is compared with the list of usernames and password that are currently stored in the database. If the username and password match that of the database, then the user log-in is successful. However, if no match is found, and error message will prompt the user. The user will then again input a username and password with the number of allowable attempts being incremented. The user will be given three attempts to enter the correct username and password. On the fourth error, the program is terminated.

3.)	Create Account

The user must create an account to be able to gain access in the program. First, the user is required to fill up a form with the account information in the required fields. This information is then checked for error (blank fields, underage, invalid email address, etc.). If an error is detected, it goes back to the fill up form. Once the required information is corrected, the account is then saved into a store account information storage and the new account is enabled to have access with the program.


 
Figure 5.2 – Create Account

 
Figure 5.3 – Account Verification Flowchart

This flowchart shows the functionality of the account verification process of the system. The sequence of operation performed by the user in entering its personals. After the user enter its personals into the system, if the details found no match into the database the user is added to the database, and if a match is found it will access the account.

3.)	Score Board

The program consists of a score board database which stores the scores of each corresponding user registered in one’s account by username. Score board tab has a basic function of displaying the scores attained by the user. The scores are ranked from highest to lowest. This portion of the program can only be modified by an administrator account.

 
Figure 5.4 – Score Board


4.)	Menu
After the create account and log-in process has been carried out, a menu with a new set of options with be available for the account. Under this menu are the options: play game, view ASL, and log-out.

\ 
Figure 6 – Menu

4.1)	Play Game
This function consists of the gameplay itself that is experience by the user. The user has an option for difficulty level (easy, medium, hard), or to go back to the menu.

 
Figure 6.1 – Play Game Options

6.1.1-6.1.3) Gameplay by Level of Difficulty

For the easy level (figure 4.1.1), the program will display a random letter (in American sign language). The user will input a guess regarding the appropriate letter as displayed by the program. The system will then analyze the input of the user whether it is correct by comparing the input of the user to the dataset images stores in the ASL dataset. If the correct match is found, the answer is considered correct and the score is incremented. The next item will then be displayed, and the same process is proceeded. An item count is incremented whether the user input is correct of incorrect. After ten (10) iterations, the score is displayed and at the same time, stored in the scoreboard database. The user has the option to play again. If the user wants to play again, the score is initialized again to zero (0), if not, the user can go back to the menu. 
The same iterative process is executed on medium-level and hard-level except that the displayed text to be interpreted by the user changes. For the medium-level (figure 4.1.2), the text to be interpreted will be a phrase (composed of 3-5 words). For the hard-level (figure 4.1.3.), the text to be interpreted is in sentence form (6 or more words). 










































Figure 6.1.1 – Easy Level



























































Figure 6.1.2 – Medium Level
























































Figure 6.1.3– Hard Level

5.)	Activity Diagram
















































































































D.	Filtering Method
In the program, the manipulation of the BGR values of each pixel is done to change color. Given a monochrome image, the values of blue, green, and red are all equal. For color to be seen, an imbalance between those values must be present; otherwise, the pixel is a mere variation of the intensity of white. Below are the different filters used in the program.

1.	BGR Filter
The BGR is a mask that combines the blue, red, and green channels. After separating color, combining the end results would produce a colored image. Each pixel has a respective value of red, blue, and green. As seen in the image below, the color was restored.

  
Figure 7.1 – BGR Filter

2.	Blue Channel Filter 
The blue channel filter is a mask that only uses the blue channel. Given the BGR parameters of a given pixel at a given time, the value for green and red are reduced to filter. After such manipulation of values, only the shade of blue is seen. As seen in the image below, the image is only in a shade of blue.

  
7.2 – Blue Filter

3.	Red Channel Filter 
The red channel filter is a mask that only uses the red channel. Given the BGR parameters of a given pixel at a given time, the value for green and blue are reduced to filter. After such manipulation of values, only the shade of red is seen. As seen in the image below, the image is only in a shade of red.
 
Figure 7.3 – Red Filter

4.	Green Channel Filter 
The green channel filter is a mask that only uses the green channel. Given the BGR parameters of a given pixel at a given time, the value for blue and red are reduced to filter. After such manipulation of values, only the shade of green is seen. As seen in the image below, the image is only in a shade of green.

  
Figure 7.4 – Green Filter

5.	Sepia Filter 
The sepia filter is a mask that combines the blue, red, and green channels. After separating color, combining the end results would produce a colored image. Given the colored image, a manipulation of the RGB values shall be done once more. The set of equations below show how the RGB values are modified.

  
Figure 7.5 – BGR Filter
6.	Grayscale Filter 
When performing image processing, factors such as hue and color complicate the entire procedure. Since the concern of this research is the elemental count based on shapes; color and hue are both negligible factors in the process. The grayscaling method transforms the image based on the given presence of the colors red, blue, and green. To manipulate color and transform it to grayscale using the image processing libraries, the average grayscaling formula must be used. Equation 3.1 below shows the formula for averaging the grayscale. In the equation, the values of the intensity value of red, green, and blue are summed up and average. The obtained average value shall then be used to replace the values of the intensities of red, green, and blue.


  Figure 7.6 – BGR Filter
IV.	CONCLUSION
This study was to make a web design that will train a user or rather help the user to understand the American sign language. The system offers different level for the user, the user can choose its own difficulty. The system uses an image processing as its medium to answer the question, Python at its programming language used, and to further enhance the image grayscaling method was used to transform the image. To sum it up, the design that will help the user to understand the American sign language with the use of this website design, is a success. The website design was able to meet all its objective.
V.	RECOMMENDATION
Although the results of the research proved to be successful, further recommendations and improvements can be done to the program. Improvement for this website is still needed despite of its successfulness. This program can greatly benefit a user that has friend that has a hearing problem or a friend that has a speaking problem. For further improvement of this design, the database that is embedded on its system must be widen or updated systematically. Moreover, future researchers may develop an algorithm that can suffice in a more efficient way to the system.

VI.	ACKNOWLEDGEMENT
The system developers would like to thank Professor Dionis Padilla of Mapua University, School of E.E.C.E. for imparting his knowledge in dataset images and database concepts which we have implemented in our system development. The lectures on the different diagrams were also an essential aid for us in construction our flowcharts, data flow diagrams, use case diagrams, activity diagrams, and the like, which greatly helped in the step by step procedure of the project development.
VII.	REFERENCES
[1]	https://web.stanford.edu/class/ee368/Project_06/Project/ee368_reports/ee368group26.pdf
[2]	R. C. Gonzales and R. E Woods, Digital Image Processing, 2nd ed. Upper Saddle River, New Jersey: Prentice Hall, 2002.
[3]	Rouse, M. (n.d.). MATLAB. Retrieved from WhatIs.com: http://whatis.techtarget.com/definition/MATLAB
[4]	Cheng, H., Huang, Z., & Kumimoto, M. (2006). Final Project Report -Image Processing Techniques. Los Angeles.
[5]	Digital Image Processing. (n.d.). Retrieved from University of Tartu: https://sisu.ut.ee/imageprocessing/book/1
[6]	Graphical User Interface. (n.d.). Retrieved from TechTarget: http://searchwindevelopment.techtarget.com/definition/GUI
[7]	GUI. (2017, April 26). Retrieved from Computer Hope: https://www.computerhope.com/jargon/g/gui.htm 


