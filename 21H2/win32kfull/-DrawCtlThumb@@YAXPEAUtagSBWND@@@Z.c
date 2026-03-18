/*
 * XREFs of ?DrawCtlThumb@@YAXPEAUtagSBWND@@@Z @ 0x1C02402EC
 * Callers:
 *     xxxEndScroll @ 0x1C0241878 (xxxEndScroll.c)
 * Callees:
 *     DrawThumb2 @ 0x1C00C5BBC (DrawThumb2.c)
 *     ?xxxGetColorObjects@@YAPEAUHBRUSH__@@PEAUtagWND@@PEAUHDC__@@@Z @ 0x1C00C5CF8 (-xxxGetColorObjects@@YAPEAUHBRUSH__@@PEAUtagWND@@PEAUHDC__@@@Z.c)
 *     SBCtlSetup @ 0x1C024155C (SBCtlSetup.c)
 */

void __fastcall DrawCtlThumb(struct tagSBWND *a1)
{
  HDC DCEx; // rsi
  HBRUSH ColorObjects; // rbx
  __int64 v4; // rdi

  DCEx = (HDC)_GetDCEx(*(_QWORD *)a1, 0LL, 65537LL);
  SBCtlSetup(a1);
  ColorObjects = (HBRUSH)xxxGetColorObjects(*(struct tagWND **)a1, (unsigned __int64)DCEx);
  v4 = GreSelectBrush(DCEx, ColorObjects);
  DrawThumb2(*(_QWORD *)a1, (_DWORD *)a1 + 4, DCEx, ColorObjects, *((_DWORD *)a1 + 2), *((_DWORD *)a1 + 3));
  GreSelectBrush(DCEx, v4);
  _ReleaseDC(DCEx);
}
