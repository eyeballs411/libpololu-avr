/*
  OrangutanPushbuttons.h - Library for using the thee user pushbuttons on the
      Orangutan LV-168
  Written by Ben Schmidel, May 23, 2008.
  Released into the public domain.
*/
#ifndef OrangutanPushbuttons_h
#define OrangutanPushbuttons_h

void buttons_init();
unsigned char wait_for_button_press(unsigned char buttons);
unsigned char wait_for_button_release(unsigned char buttons);
unsigned char wait_for_button(unsigned char buttons);
unsigned char button_is_pressed(unsigned char buttons);

#define TOP_BUTTON	(1 << 5)		// Arduino pin 13
#define MIDDLE_BUTTON	(1 << 4)		// Arduino pin 12
#define BOTTOM_BUTTON	(1 << 1)		// Arduino pin 9

#define ALL_BUTTONS		(TOP_BUTTON | MIDDLE_BUTTON | BOTTOM_BUTTON)

#endif
