[DISPLAY]
DISPLAY =               axis
CYCLE_TIME =            0.100
POSITION_OFFSET =       RELATIVE
POSITION_FEEDBACK =     ACTUAL
MAX_FEED_OVERRIDE =     1.2
MAX_SPINDLE_OVERRIDE =  1.0
PROGRAM_PREFIX =        ../../nc_files/
INTRO_GRAPHIC =         linuxcnc.gif
INTRO_TIME =            5
EDITOR = geany
GEOMETRY =              XYZABCUVW
INCREMENTS = 1 mm, .01 in, .1mm, 1 mil, .1 mil, 1/8000 in

[FILTER]
PROGRAM_EXTENSION = .png,.gif,.jpg Grayscale Depth Image
PROGRAM_EXTENSION = .py Python Script
png = image-to-gcode
gif = image-to-gcode
jpg = image-to-gcode
py = python3

[TASK]
TASK =                  milltask
CYCLE_TIME =            0.001

[RS274NGC]
PARAMETER_FILE = sim-9axis.var
SUBROUTINE_PATH   = ../../nc_files/ngcgui_lib:../../nc_files/ngcgui_lib/utilitysubs
# for demo of M110:
USER_M_PATH       = ../../nc_files/ngcgui_lib/mfiles

[EMCMOT]
EMCMOT =                motmod
COMM_TIMEOUT =          1.0
SERVO_PERIOD =          1000000

[EMCIO]
TOOL_TABLE =           sim.tbl
TOOL_CHANGE_POSITION = 0 0 2

[AXIS_X]
MIN_LIMIT = -10.0
MAX_LIMIT = 10.0
MAX_VELOCITY = 1.2
MAX_ACCELERATION = 20.0

[JOINT_0]
TYPE =                  LINEAR
MAX_VELOCITY =          1.2
MAX_ACCELERATION =      20.0
MIN_LIMIT =             -10.0
MAX_LIMIT =             10.0
HOME_SEARCH_VEL =       5.0
HOME_LATCH_VEL =        1.0
HOME_SEQUENCE =         0

[AXIS_Y]
MIN_LIMIT = -10.0
MAX_LIMIT = 10.0
MAX_VELOCITY = 1.2
MAX_ACCELERATION = 20.0

[JOINT_1]
TYPE =                  LINEAR
MAX_VELOCITY =          1.2
MAX_ACCELERATION =      20.0
MIN_LIMIT =             -10.0
MAX_LIMIT =             10.0
HOME_SEARCH_VEL =       5.0
HOME_LATCH_VEL =        1.0
HOME_SEQUENCE =         0

[AXIS_Z]
MIN_LIMIT = -2.0
MAX_LIMIT = 4.0
MAX_VELOCITY = 1.2
MAX_ACCELERATION = 20.0

[JOINT_2]
TYPE =                  LINEAR
MAX_VELOCITY =          1.2
MAX_ACCELERATION =      20.0
MIN_LIMIT =             -2.0
MAX_LIMIT =             4.0
HOME_SEARCH_VEL =       5.0
HOME_LATCH_VEL =        1.0
HOME_SEQUENCE =         0

[AXIS_C]
MAX_VELOCITY = 90.0
MAX_ACCELERATION = 1200.0

[JOINT_3]
TYPE =                  ANGULAR
MAX_VELOCITY =          90.0
MAX_ACCELERATION =      1200.0
HOME_SEARCH_VEL =       0.0
HOME_LATCH_VEL =        0.0
HOME_SEQUENCE =         0
