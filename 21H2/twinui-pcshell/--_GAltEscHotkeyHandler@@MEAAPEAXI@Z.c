/*
 * XREFs of ??_GAltEscHotkeyHandler@@MEAAPEAXI@Z @ 0x1804067A0
 * Callers:
 *     ??_EAltEscHotkeyHandler@@ODA@EAAPEAXI@Z @ 0x18016F260 (--_EAltEscHotkeyHandler@@ODA@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800906D4 (--3@YAXPEAX@Z.c)
 *     ??1AltEscHotkeyHandler@@MEAA@XZ @ 0x1804066B4 (--1AltEscHotkeyHandler@@MEAA@XZ.c)
 */

AltEscHotkeyHandler *__fastcall AltEscHotkeyHandler::`scalar deleting destructor'(AltEscHotkeyHandler *this, char a2)
{
  AltEscHotkeyHandler::~AltEscHotkeyHandler(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
