/****************************************************************************************
* 100
* ANET board A2, A6 and A8
****************************************************************************************/

#define KNOWN_BOARD
#define BOARD_NAME "Anet"

#if !defined(__AVR_ATmega644P__) && !defined(__AVR_ATmega1284P__)
  #error Oops!  Make sure you have 'Anet' selected from the 'Tools -> Boards' menu.
#endif

#if defined(__AVR_ATmega1284P__)
  #define LARGE_FLASH true
#endif

// X axis pins
#define ORIG_X_STEP_PIN         15
#define ORIG_X_DIR_PIN          21
#define ORIG_X_ENABLE_PIN       14
#define X_STOP_PIN              18

// Y axis pins
#define ORIG_Y_STEP_PIN         22
#define ORIG_Y_DIR_PIN          23
#define ORIG_Y_ENABLE_PIN       14
#define Y_STOP_PIN              19

// Z axis pins
#define ORIG_Z_STEP_PIN          3
#define ORIG_Z_DIR_PIN           2
#define ORIG_Z_ENABLE_PIN       26
#define Z_STOP_PIN              20

// E axis pins
#define ORIG_E0_STEP_PIN         1
#define ORIG_E0_DIR_PIN          0
#define ORIG_E0_ENABLE_PIN      14

#define SDPOWER                 -1
#define SDSS                    31
#define LED_PIN                 -1

#define ORIG_FAN_PIN             4
#define ORIG_FAN1_PIN           -1
#define ORIG_PS_ON_PIN          -1

#define ORIG_HEATER_0_PIN       13  // HOTEND 1
#define ORIG_HEATER_1_PIN       -1
#define ORIG_HEATER_2_PIN       -1
#define ORIG_HEATER_3_PIN       -1

#define ORIG_TEMP_0_PIN          7  // ANALOG NUMBERING
#define ORIG_TEMP_1_PIN         -1  // ANALOG NUMBERING
#define ORIG_TEMP_2_PIN         -1  // ANALOG NUMBERING
#define ORIG_TEMP_3_PIN         -1  // ANALOG NUMBERING

#define ORIG_HEATER_BED_PIN     12  // BED
#define ORIG_TEMP_BED_PIN        6  // ANALOG NUMBERING

#if ENABLED(ULTRA_LCD) && ENABLED(NEWPANEL)

	#if ENABLED(ADC_KEYPAD)
		#undef BTN_EN1
		#undef BTN_EN2
		#undef BTN_ENC

		#define LCD_PINS_RS         28
		#define LCD_PINS_ENABLE     29
		#define LCD_PINS_D4         10
		#define LCD_PINS_D5         11
		#define LCD_PINS_D6         16
		#define LCD_PINS_D7         17

		#define BTN_EN1 			      -1
		#define BTN_EN2 			      -1
		#define BTN_ENC 			      -1

    #define ADC_KEYPAD_PIN       1

		#define ENCODER_FEEDRATE_DEADZONE 2
   
      #ifndef ENCODER_STEPS_PER_MENU_ITEM
      #define ENCODER_STEPS_PER_MENU_ITEM 1
    #endif
    #ifndef ENCODER_PULSES_PER_STEP
      #define ENCODER_PULSES_PER_STEP 1
    #endif
    
	#elif ENABLED(U8GLIB_ST7920)

    #define DOGLCD_A0           30
    #define DOGLCD_CS           29
    #define LCD_CONTRAST         1

    #if ENABLED(REPRAP_DISCOUNT_FULL_GRAPHIC_SMART_CONTROLLER)
      // For RepRap Discount (with Anet Adapter wiring)
      #define SERVO0_PIN        27 // free for BLTouch/3D-Touch
      #define BEEPER_PIN        28
      #define LCD_PINS_RS       30
      #define	LCD_PINS_ENABLE   29
      #define LCD_PINS_D4       17
      #define BTN_EN1           11
      #define BTN_EN2           10
      #define BTN_ENC           16
    #elif ENABLED(ANET_FULL_GRAPHICS_LCD)
      #define BEEPER_PIN 17

      #define LCD_PINS_RS       27
      #define LCD_PINS_ENABLE   28
      #define LCD_PINS_D4       30

      #define BTN_EN1           11
      #define BTN_EN2           10
      #define BTN_ENC           16
    #else
      #error "You need to select ANET or RepRap Version"
    #endif

		#define ST7920_DELAY_1 DELAY_0_NOP
		#define ST7920_DELAY_2 DELAY_1_NOP
		#define ST7920_DELAY_3 DELAY_2_NOP

		#ifndef ENCODER_STEPS_PER_MENU_ITEM
			#define ENCODER_STEPS_PER_MENU_ITEM 1
		#endif
		#ifndef ENCODER_PULSES_PER_STEP
			#define ENCODER_PULSES_PER_STEP 4
		#endif
	#endif

#endif
