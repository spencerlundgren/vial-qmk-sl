VIAL_ENABLE = yes
OLED_GAMING = no
WPM_ENABLE = no

ifeq ($(strip $(OLED_ENABLE)), yes)
  SRC += font_block.c
endif

ifeq ($(strip $(OLED_GAMING)), yes)
  SRC += keyboards/ergohaven/k02/game/game.c
  SRC += keyboards/ergohaven/k02/game/drawing.c
  SRC += keyboards/ergohaven/k02/game/rndgen.c
endif
