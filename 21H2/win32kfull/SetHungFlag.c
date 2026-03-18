/*
 * XREFs of SetHungFlag @ 0x1C0110FEC
 * Callers:
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C007D36C (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 * Callees:
 *     SetOrClrWF @ 0x1C0069680 (SetOrClrWF.c)
 *     _GetDesktopWindow @ 0x1C006FF60 (_GetDesktopWindow.c)
 *     ?VWPLAddBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@KH@Z @ 0x1C007A438 (-VWPLAddBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@KH@Z.c)
 */

__int64 __fastcall SetHungFlag(struct tagWND *a1, unsigned __int16 a2)
{
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 19LL) & 0x18) == 0 && *((_QWORD *)a1 + 13) == GetDesktopWindow((__int64)a1) )
    VWPLAddBase(gpvwplHungRedraw, 0LL, a1, 0xAu);
  return SetOrClrWF(1, a1, a2, 1);
}
