// ISO-Designer ISO 11783   Version 5.5.0.4333 Jetter AG
// Do not change!

#include "MyProject1.iop.h"
#include "MyProject1.c.h"

#define WORD(w)  (unsigned char)w, (unsigned char)(w >> 8)
#define LONG(l)  (unsigned char)l, \
					(unsigned char)((unsigned long)l >> 8), \
					(unsigned char)((unsigned long)l >> 16), \
					(unsigned char)((unsigned long)l >> 24)
#define ID(id)           WORD(id)
#define REF(id)          WORD(id)
#define XYREF(id, x, y)  WORD(id), WORD(x), WORD(y)
#define MACRO(ev, id)    ev, id
#define COLOR(c)         c

const unsigned char ISO_OP_MEMORY_CLASS isoOP_MyProject1[] = {
	17,
	ID(WorkingSet_0), TYPEID_WORKSET, COLOR(187), 1, ID(DataMask_Home), 1, 0, 2,
		XYREF(OutputString_Fasszaehler, 0, 20),
		'e', 'n',
		'd', 'e',
	ID(Macro_1), TYPEID_MACRO, WORD(8),
		CMD_CHANGE_ACTIVE_MASK, ID(WorkingSet_0), ID(DataMask_unterseite), 0xFF, 0xFF, 0xFF,
	ID(Macro_2), TYPEID_MACRO, WORD(8),
		CMD_CHANGE_ACTIVE_MASK, ID(WorkingSet_0), ID(DataMask_Home), 0xFF, 0xFF, 0xFF,
	ID(Macro_3), TYPEID_MACRO, WORD(9),
		CMD_CHANGE_CHILD_POSITION, ID(DataMask_unterseite), ID(Dreieckusw), WORD(200), WORD(200),
	ID(Macro_4), TYPEID_MACRO, WORD(9),
		CMD_CHANGE_CHILD_POSITION, ID(DataMask_unterseite), ID(Dreieckusw), WORD(100), WORD(100),
	ID(DataMask_Home), TYPEID_DATAMASK, COLOR(230), ID(SoftKeyMask_Home), 7, 0, 
		XYREF(Button_PlusPlus, 310, 380),
		XYREF(Container_Gesamtzaehler, 10, 10),
		XYREF(Container_Tageszaehler, 10, 98),
		XYREF(Meter_Gesamtzaehler, 10, 240),
		XYREF(Meter_Tageszaehler, 10, 240),
		XYREF(LinearBargraph_Gesamtzaehler, 310, 180),
		XYREF(LinearBargraph_Tageszaehler, 380, 180),
	ID(DataMask_unterseite), TYPEID_DATAMASK, COLOR(230), ID(SoftKeyMask_Home), 3, 0, 
		XYREF(Dreieckusw, 50, 60),
		XYREF(Button_6003, 400, 19),
		XYREF(Button_6004, 401, 117),
	ID(Container_Gesamtzaehler), TYPEID_CONTAINER, WORD(460), WORD(60), 0, 3, 0, 
		XYREF(OutputString_Gesamtzaehler, 0, 0),
		XYREF(OutputNumber_Gesamtzaehler, 210, 0),
		XYREF(Button_Reset_Gesamtzaehler, 330, 0),
	ID(Container_Tageszaehler), TYPEID_CONTAINER, WORD(460), WORD(60), 0, 3, 0, 
		XYREF(OutputNumber_Tageszaehler, 210, 0),
		XYREF(OutputString_Tageszaehler, 0, 0),
		XYREF(Button_Reset_Tageszaehler, 330, 0),
	ID(Dreieckusw), TYPEID_CONTAINER, WORD(144), WORD(163), 0, 3, 0, 
		XYREF(Rectangle_14000, 0, 0),
		XYREF(Ellipse_15000, 95, 9),
		XYREF(Polygon_16000, 8, 95),
	ID(SoftKeyMask_Home), TYPEID_SKEYMASK, COLOR(230), 6, 0, 
		REF(SoftKey_Reset_Gesamtzaehler),
		REF(SoftKey_Reset_Tageszaehler),
		REF(SoftKey_5003),
		REF(SoftKey_5004),
		REF(ObjectPointer_Null3),
		REF(SoftKey_PlusPlus),
	ID(SoftKey_PlusPlus), TYPEID_SOFTKEY, COLOR(187), 1, 1, 0, 
		XYREF(OutputString_PlusPlus, 0, 10),
	ID(SoftKey_Reset_Gesamtzaehler), TYPEID_SOFTKEY, COLOR(187), 1, 1, 0, 
		XYREF(OutputString_Reset_Gesamtzaehler, 0, 20),
	ID(SoftKey_Reset_Tageszaehler), TYPEID_SOFTKEY, COLOR(187), 1, 1, 0, 
		XYREF(OutputString_Reset_Tageszaehler, 0, 20),
	ID(SoftKey_5003), TYPEID_SOFTKEY, COLOR(187), 1, 1, 1, 
		XYREF(OutputString_11006, 0, 20),
		MACRO(EV_KEYRELEASE, Macro_1),
	ID(SoftKey_5004), TYPEID_SOFTKEY, COLOR(187), 1, 1, 1, 
		XYREF(OutputString_11007, 0, 20),
		MACRO(EV_KEYRELEASE, Macro_2),
	ID(Button_PlusPlus), TYPEID_BUTTON, WORD(154), WORD(88), 187, 144, 1, 0, 1, 0, 
		XYREF(OutputString_PlusPlus, 30, 20),
	ID(Button_Reset_Gesamtzaehler), TYPEID_BUTTON, WORD(130), WORD(60), 187, 144, 1, 0, 1, 0, 
		XYREF(OutputString_Reset_Gesamtzaehler, 20, 10),
	ID(Button_Reset_Tageszaehler), TYPEID_BUTTON, WORD(130), WORD(60), 187, 144, 1, 0, 1, 0, 
		XYREF(OutputString_Reset_Tageszaehler, 10, 10),
	ID(Button_6003), TYPEID_BUTTON, WORD(80), WORD(80), 8, 0, 1, 0, 1, 1, 
		XYREF(OutputString_11008, -4, 20),
		MACRO(EV_KEYRELEASE, Macro_3),
	ID(Button_6004), TYPEID_BUTTON, WORD(80), WORD(80), 249, 249, 1, 0, 1, 1, 
		XYREF(OutputString_11009, -4, 19),
		MACRO(EV_KEYRELEASE, Macro_4),
	ID(OutputString_PlusPlus), TYPEID_OUTSTR, WORD(80), WORD(44), COLOR_WHITE, ID(FontAttributes_Default), 1,
		ID(ID_NULL), 1, WORD(4), '+', '+', ' ', ' ', 0,
	ID(OutputString_Fasszaehler), TYPEID_OUTSTR, WORD(80), WORD(40), COLOR_WHITE, ID(FontAttributes_Button), 3,
		ID(ID_NULL), 1, WORD(12), 'F', 'a', 's', 's', '\r', '\n',
		'Z', '�', 'h', 'l', 'e', 'r', 0,
	ID(OutputString_Reset_Gesamtzaehler), TYPEID_OUTSTR, WORD(80), WORD(40), COLOR_WHITE, ID(FontAttributes_Button), 3,
		ID(ID_NULL), 1, WORD(13), 'R', 'e', 's', 'e', 't', '\r', '\n',
		'G', 'e', 's', 'a', 'm', 't', 0,
	ID(OutputString_Gesamtzaehler), TYPEID_OUTSTR, WORD(200), WORD(60), COLOR_WHITE, ID(FontAttributes_Default), 0,
		ID(ID_NULL), 0, WORD(12), 'G', 'e', 's', 'a', 'm', 't', 'z', '�', 'h', 'l', 'e', 'r', 0,
	ID(OutputString_Tageszaehler), TYPEID_OUTSTR, WORD(200), WORD(60), COLOR_WHITE, ID(FontAttributes_Default), 0,
		ID(ID_NULL), 0, WORD(11), 'T', 'a', 'g', 'e', 's', 'z', '�', 'h', 'l', 'e', 'r', 0,
	ID(OutputString_Reset_Tageszaehler), TYPEID_OUTSTR, WORD(80), WORD(40), COLOR_WHITE, ID(FontAttributes_Button), 3,
		ID(ID_NULL), 1, WORD(12), 'R', 'e', 's', 'e', 't', '\r', '\n',
		'T', 'a', 'g', 'e', 's', 0,
	ID(OutputString_11006), TYPEID_OUTSTR, WORD(80), WORD(58), COLOR_WHITE, ID(FontAttributes_Button), 1,
		ID(ID_NULL), 1, WORD(4), 'V', 'o', 'r', ' ', 0,
	ID(OutputString_11007), TYPEID_OUTSTR, WORD(80), WORD(40), COLOR_WHITE, ID(FontAttributes_Button), 1,
		ID(ID_NULL), 1, WORD(6), 'z', 'u', 'r', '�', 'c', 'k', 0,
	ID(OutputString_11008), TYPEID_OUTSTR, WORD(80), WORD(20), COLOR_WHITE, ID(FontAttributes_23000), 1,
		ID(ID_NULL), 1, WORD(6), 'r', 'u', 'n', 't', 'e', 'r', 0,
	ID(OutputString_11009), TYPEID_OUTSTR, WORD(91), WORD(20), COLOR_WHITE, ID(FontAttributes_23000), 1,
		ID(ID_NULL), 1, WORD(4), 'H', 'o', 'c', 'h', 0,
	ID(OutputNumber_Tageszaehler), TYPEID_OUTNUM, WORD(110), WORD(60), COLOR_WHITE, ID(FontAttributes_Default), 0,
		ID(NumberVariable_Tageszaehler), LONG(0UL), LONG(0L), FLOAT_1, 0, 0, 2, 0,
	ID(OutputNumber_Gesamtzaehler), TYPEID_OUTNUM, WORD(110), WORD(60), COLOR_WHITE, ID(FontAttributes_Default), 0,
		ID(NumberVariable_Gesamtzaehler), LONG(0UL), LONG(0L), FLOAT_1, 0, 0, 2, 0,
	ID(Rectangle_14000), TYPEID_OUTRECT, ID(LineAttributes_24000), 
		WORD(60), WORD(62), 0, ID(FillAttributes_25000), 0, 
	ID(Ellipse_15000), TYPEID_OUTELLIPSE, ID(LineAttributes_24000), 
		WORD(50), WORD(54), 0, 0, 0, ID(FillAttributes_25001), 0, 
	ID(Polygon_16000), TYPEID_OUTPOLY, WORD(78), WORD(69), 
		ID(LineAttributes_24000), ID(FillAttributes_25002), 2, 3, 0, 
		WORD(0), WORD(0), 
		WORD(0), WORD(68), 
		WORD(77), WORD(0), 
	ID(Meter_Gesamtzaehler), TYPEID_OUTMETER, WORD(220), COLOR_BLACK, COLOR_BLACK, COLOR_BLACK, 13, 11, 165, 105, 
		WORD(0), WORD(100), ID(NumberVariable_Gesamtzaehler), WORD(0), 0, 
	ID(Meter_Tageszaehler), TYPEID_OUTMETER, WORD(220), COLOR_BLACK, COLOR_BLACK, COLOR_BLACK, 13, 11, 165, 105, 
		WORD(0), WORD(100), ID(NumberVariable_Tageszaehler), WORD(0), 0, 
	ID(LinearBargraph_Gesamtzaehler), TYPEID_OUTLINBAR, WORD(60), WORD(180), COLOR_BLACK, COLOR_RED, 39, 11, 
		WORD(0), WORD(100), ID(NumberVariable_Gesamtzaehler), WORD(0), ID(ID_NULL), WORD(80), 0, 
	ID(LinearBargraph_Tageszaehler), TYPEID_OUTLINBAR, WORD(60), WORD(180), COLOR_BLACK, COLOR_RED, 39, 11, 
		WORD(0), WORD(100), ID(NumberVariable_Tageszaehler), WORD(0), ID(ID_NULL), WORD(80), 0, 
	ID(NumberVariable_Tageszaehler), TYPEID_VARNUM, LONG(0UL), 
	ID(NumberVariable_Gesamtzaehler), TYPEID_VARNUM, LONG(0UL), 
	ID(FontAttributes_23000), TYPEID_FONTATTR, COLOR_BLACK, 3, 0, 128, 0, 
	ID(FontAttributes_Default), TYPEID_FONTATTR, COLOR_BLACK, 5, 0, 0, 0, 
	ID(FontAttributes_Button), TYPEID_FONTATTR, COLOR_BLACK, 3, 0, 0, 0, 
	ID(LineAttributes_24000), TYPEID_LINEATTR, COLOR_BLACK, 1, WORD(65535), 0, 
	ID(FillAttributes_25000), TYPEID_FILLATTR, 2, COLOR_RED, ID(ID_NULL), 0, 
	ID(FillAttributes_25001), TYPEID_FILLATTR, 2, COLOR_LIME, ID(ID_NULL), 0, 
	ID(FillAttributes_25002), TYPEID_FILLATTR, 2, COLOR_YELLOW, ID(ID_NULL), 0, 
	ID(ObjectPointer_Null3), TYPEID_OBJPTR, ID(ID_NULL), 
	ID(AuxFunction2_PlusPlus), TYPEID_AUXFUNC2, COLOR_WHITE, 130, 1, 
		XYREF(OutputString_PlusPlus, -22, 0),
}; // isoOP_MyProject1
