/****************************************************************************************
* 76
* GT2560 V3.0
****************************************************************************************/

//###CHIP
#if DISABLED(__AVR_ATmega1280__) && DISABLED(__AVR_ATmega2560__)
  #error "Oops! Select 'Arduino Mega' in 'Tools > Board.'"
#endif
//@@@

#define KNOWN_BOARD 1

//###BOARD_NAME
#if DISABLED(BOARD_NAME)
  #define BOARD_NAME "GT2560 V3.0"
#endif
//@@@


//###X_AXIS
#define ORIG_X_STEP_PIN            37
#define ORIG_X_DIR_PIN             39
#define ORIG_X_ENABLE_PIN          35
#define ORIG_X_CS_PIN              NoPin

//###Y_AXIS
#define ORIG_Y_STEP_PIN            31
#define ORIG_Y_DIR_PIN             33
#define ORIG_Y_ENABLE_PIN          29
#define ORIG_Y_CS_PIN              NoPin

//###Z_AXIS
#define ORIG_Z_STEP_PIN            25
#define ORIG_Z_DIR_PIN             23
#define ORIG_Z_ENABLE_PIN          27
#define ORIG_Z_CS_PIN              NoPin

//###EXTRUDER_0
#define ORIG_E0_STEP_PIN           46
#define ORIG_E0_DIR_PIN            44
#define ORIG_E0_ENABLE_PIN         12
#define ORIG_E0_CS_PIN             NoPin
#define ORIG_SOL0_PIN              NoPin

//###EXTRUDER_1
#define ORIG_E1_STEP_PIN           49
#define ORIG_E1_DIR_PIN            47
#define ORIG_E1_ENABLE_PIN         48
#define ORIG_E1_CS_PIN             NoPin
#define ORIG_SOL1_PIN              NoPin

//###EXTRUDER_2
#define ORIG_E2_STEP_PIN           NoPin
#define ORIG_E2_DIR_PIN            NoPin
#define ORIG_E2_ENABLE_PIN         NoPin
#define ORIG_E2_CS_PIN             NoPin
#define ORIG_SOL2_PIN              NoPin

//###EXTRUDER_3
#define ORIG_E3_STEP_PIN           NoPin
#define ORIG_E3_DIR_PIN            NoPin
#define ORIG_E3_ENABLE_PIN         NoPin
#define ORIG_E3_CS_PIN             NoPin
#define ORIG_SOL3_PIN              NoPin

//###EXTRUDER_4
#define ORIG_E4_STEP_PIN           NoPin
#define ORIG_E4_DIR_PIN            NoPin
#define ORIG_E4_ENABLE_PIN         NoPin
#define ORIG_E4_CS_PIN             NoPin
#define ORIG_SOL4_PIN              NoPin

//###EXTRUDER_5
#define ORIG_E5_STEP_PIN           NoPin
#define ORIG_E5_DIR_PIN            NoPin
#define ORIG_E5_ENABLE_PIN         NoPin
#define ORIG_E5_CS_PIN             NoPin
#define ORIG_SOL5_PIN              NoPin

//###EXTRUDER_6
#define ORIG_E6_STEP_PIN           NoPin
#define ORIG_E6_DIR_PIN            NoPin
#define ORIG_E6_ENABLE_PIN         NoPin
#define ORIG_E6_CS_PIN             NoPin
#define ORIG_SOL6_PIN              NoPin

//###EXTRUDER_7
#define ORIG_E7_STEP_PIN           NoPin
#define ORIG_E7_DIR_PIN            NoPin
#define ORIG_E7_ENABLE_PIN         NoPin
#define ORIG_E7_CS_PIN             NoPin
#define ORIG_SOL7_PIN              NoPin

//###ENDSTOP
#define ORIG_X_MIN_PIN             24
#define ORIG_X_MAX_PIN             22
#define ORIG_Y_MIN_PIN             28
#define ORIG_Y_MAX_PIN             26
#define ORIG_Z_MIN_PIN             30
#define ORIG_Z_MAX_PIN             32
#define ORIG_Z2_MIN_PIN            NoPin
#define ORIG_Z2_MAX_PIN            NoPin
#define ORIG_Z3_MIN_PIN            NoPin
#define ORIG_Z3_MAX_PIN            NoPin
#define ORIG_Z4_MIN_PIN            NoPin
#define ORIG_Z4_MAX_PIN            NoPin
#define ORIG_Z_PROBE_PIN           32

//###SINGLE_ENDSTOP
#define X_STOP_PIN                 NoPin
#define Y_STOP_PIN                 NoPin
#define Z_STOP_PIN                 NoPin

//###HEATER
#define ORIG_HEATER_HE0_PIN        10
#define ORIG_HEATER_HE1_PIN         3
#define ORIG_HEATER_HE2_PIN         1
#define ORIG_HEATER_HE3_PIN        NoPin
#define ORIG_HEATER_HE4_PIN        NoPin
#define ORIG_HEATER_HE5_PIN        NoPin
#define ORIG_HEATER_BED0_PIN        4
#define ORIG_HEATER_BED1_PIN       NoPin
#define ORIG_HEATER_BED2_PIN       NoPin
#define ORIG_HEATER_BED3_PIN       NoPin
#define ORIG_HEATER_CHAMBER0_PIN   NoPin
#define ORIG_HEATER_CHAMBER1_PIN   NoPin
#define ORIG_HEATER_CHAMBER2_PIN   NoPin
#define ORIG_HEATER_CHAMBER3_PIN   NoPin

//###TEMPERATURE
#define ORIG_TEMP_HE0_PIN          11
#define ORIG_TEMP_HE1_PIN           9
#define ORIG_TEMP_HE2_PIN           1
#define ORIG_TEMP_HE3_PIN          NoPin
#define ORIG_TEMP_HE4_PIN          NoPin
#define ORIG_TEMP_HE5_PIN          NoPin
#define ORIG_TEMP_BED0_PIN         10
#define ORIG_TEMP_BED1_PIN         NoPin
#define ORIG_TEMP_BED2_PIN         NoPin
#define ORIG_TEMP_BED3_PIN         NoPin
#define ORIG_TEMP_CHAMBER0_PIN     NoPin
#define ORIG_TEMP_CHAMBER1_PIN     NoPin
#define ORIG_TEMP_CHAMBER2_PIN     NoPin
#define ORIG_TEMP_CHAMBER3_PIN     NoPin

//###FAN
#define ORIG_FAN0_PIN               9
#define ORIG_FAN1_PIN              NoPin
#define ORIG_FAN2_PIN              NoPin
#define ORIG_FAN3_PIN              NoPin
#define ORIG_FAN4_PIN              NoPin
#define ORIG_FAN5_PIN              NoPin

//###SERVO
#define SERVO0_PIN                 11
#define SERVO1_PIN                 NoPin
#define SERVO2_PIN                 NoPin
#define SERVO3_PIN                 NoPin

//###MISC
#define ORIG_PS_ON_PIN             12
#define ORIG_BEEPER_PIN            18
#define LED_PIN                     6
#define SDPOWER_PIN                NoPin
#define SD_DETECT_PIN              38
#define SDSS                       53
#define KILL_PIN                   NoPin
#define DEBUG_PIN                  NoPin
#define SUICIDE_PIN                54

//###LASER
#define ORIG_LASER_PWR_PIN         NoPin
#define ORIG_LASER_PWM_PIN         NoPin



//###IF_BLOCKS
#if ENABLED(ULTIMAKERCONTROLLER) || ENABLED(REPRAP_DISCOUNT_SMART_CONTROLLER) || ENABLED(G3D_PANEL) || ENABLED(MKS_MINI_12864)
  #define SDSUPPORT   // Force SD Card support on for these displays
#elif HAS_SPI_LCD && HAS_GRAPHICAL_LCD // No panel, just graphical LCD?
  #define LCD_WIDTH_OVERRIDE 20 // Default is 22. For this Geeetech use 20
#endif
#if HAS_SPI_LCD

  #define ORIG_BEEPER_PIN     18

  #if ENABLED(NEWPANEL)

    #define LCD_PINS_RS       20
    #define LCD_PINS_ENABLE   17
    #define LCD_PINS_D4       16
    #define LCD_PINS_D5       21
    #define LCD_PINS_D6        5
    #define LCD_PINS_D7       36

    // Buttons are directly attached
    #define BTN_EN1           42
    #define BTN_EN2           40
    #define BTN_ENC           19

    #define SD_DETECT_PIN     38

  #else // !NEWPANEL

    #define SHIFT_CLK         38
    #define SHIFT_LD          42
    #define SHIFT_OUT         40
    #define SHIFT_EN          17

    #define LCD_PINS_RS       16
    #define LCD_PINS_ENABLE    5
    #define LCD_PINS_D4        6
    #define LCD_PINS_D5       21
    #define LCD_PINS_D6       20
    #define LCD_PINS_D7       19

    #define SD_DETECT_PIN     NoPin

  #endif // !NEWPANEL

#endif // ULTRA_LCD
//@@@
