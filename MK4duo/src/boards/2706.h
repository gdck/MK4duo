/****************************************************************************************
* 2706
* Minitronics v2.0
*****************************************************************************************/

//###CHIP
#if DISABLED(_VARIANT_MINITRONICS_20_)
  #error Oops!  Make sure you have 'Minitronics v2.0' selected from the 'Tools -> Boards' menu.
#endif
//@@@

#define KNOWN_BOARD 1

//###BOARD_NAME
#if DISABLED(BOARD_NAME)
  #define BOARD_NAME "Minitronics v2.0"
#endif
//@@@


//###X_AXIS
#define ORIG_X_STEP_PIN            1
#define ORIG_X_DIR_PIN             3
#define ORIG_X_ENABLE_PIN          0
#define ORIG_X_CS_PIN              NoPin

//###Y_AXIS
#define ORIG_Y_STEP_PIN            29
#define ORIG_Y_DIR_PIN             28
#define ORIG_Y_ENABLE_PIN          0
#define ORIG_Y_CS_PIN              NoPin

//###Z_AXIS
#define ORIG_Z_STEP_PIN            16
#define ORIG_Z_DIR_PIN             17
#define ORIG_Z_ENABLE_PIN          0
#define ORIG_Z_CS_PIN              NoPin

//###EXTRUDER_0
#define ORIG_E0_STEP_PIN           14
#define ORIG_E0_DIR_PIN            15
#define ORIG_E0_ENABLE_PIN         0
#define ORIG_E0_CS_PIN             NoPin
#define ORIG_SOL0_PIN              NoPin

//###EXTRUDER_1
#define ORIG_E1_STEP_PIN           NoPin
#define ORIG_E1_DIR_PIN            NoPin
#define ORIG_E1_ENABLE_PIN         NoPin
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
#define ORIG_X_MIN_PIN             NoPin
#define ORIG_X_MAX_PIN             8
#define ORIG_Y_MIN_PIN             NoPin
#define ORIG_Y_MAX_PIN             9
#define ORIG_Z_MIN_PIN             NoPin
#define ORIG_Z_MAX_PIN             4
#define ORIG_Z2_MIN_PIN            NoPin
#define ORIG_Z2_MAX_PIN            NoPin
#define ORIG_Z3_MIN_PIN            NoPin
#define ORIG_Z3_MAX_PIN            NoPin
#define ORIG_Z4_MIN_PIN            NoPin
#define ORIG_Z4_MAX_PIN            NoPin
#define ORIG_E_MIN_PIN             NoPin
#define ORIG_Z_PROBE_PIN           NoPin

//###SINGLE_ENDSTOP
#define X_STOP_PIN                 NoPin
#define Y_STOP_PIN                 NoPin
#define Z_STOP_PIN                 NoPin

//###HEATER
#define ORIG_HEATER_0_PIN           11
#define ORIG_HEATER_1_PIN           NoPin
#define ORIG_HEATER_2_PIN           NoPin
#define ORIG_HEATER_3_PIN           NoPin
#define ORIG_HEATER_BED_PIN         NoPin
#define ORIG_HEATER_CHAMBER_PIN    NoPin
#define ORIG_COOLER_PIN            NoPin

//###TEMPERATURE
#define ORIG_TEMP_0_PIN             4
#define ORIG_TEMP_1_PIN             NoPin
#define ORIG_TEMP_2_PIN             NoPin
#define ORIG_TEMP_3_PIN             NoPin
#define ORIG_TEMP_BED_PIN           NoPin
#define ORIG_TEMP_CHAMBER_PIN      NoPin
#define ORIG_TEMP_COOLER_PIN       NoPin

//###FAN
#define ORIG_FAN0_PIN               NoPin
#define ORIG_FAN1_PIN               NoPin
#define ORIG_FAN2_PIN              NoPin
#define ORIG_FAN3_PIN              NoPin

//###SERVO
#define SERVO0_PIN                 NoPin
#define SERVO1_PIN                 NoPin
#define SERVO2_PIN                 NoPin
#define SERVO3_PIN                 NoPin

//###MISC
//#define ORIG_PS_ON_PIN             32
//#define ORIG_BEEPER_PIN            27
#define LED_PIN                    13
#define SDPOWER_PIN                NoPin
//#define SD_DETECT_PIN              60
#define SDSS                       4
#define KILL_PIN                   NoPin
#define DEBUG_PIN                  NoPin
#define SUICIDE_PIN                NoPin

//###LASER
#define ORIG_LASER_PWR_PIN         NoPin
#define ORIG_LASER_PWM_PIN         NoPin


//###UNKNOWN_PINS
//#define EEPROM_SD


//#define HAVE_MCU_TEMPERATURE
#define STAT_LED_RED_PIN 13
//@@@

//###IF_BLOCKS
#if ENABLED(REPRAPWORLD_GRAPHICAL_LCD)

  #define LCD_PINS_RS         SS  // CS chip select / SS chip slave select
  #define LCD_PINS_ENABLE     MOSI  // SID (MOSI)
  #define LCD_PINS_D4         SCK  // SCK (CLK) clock
  #define ORIG_BEEPER_PIN     NoPin

  #define BTN_EN1             33
  #define BTN_EN2             27
  #define BTN_ENC             23

#endif // REPRAPWORLD_GRAPHICAL_LCD
//@@@