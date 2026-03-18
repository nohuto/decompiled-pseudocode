/*
 * XREFs of xxxPaintRect @ 0x1C00C1B34
 * Callers:
 *     xxxFillWindow @ 0x1C00C1AAC (xxxFillWindow.c)
 * Callees:
 *     _GetDesktopWindow @ 0x1C006FF60 (_GetDesktopWindow.c)
 *     GreSetBrushOrg @ 0x1C00C1C04 (GreSetBrushOrg.c)
 *     FillRect @ 0x1C00C1CEC (FillRect.c)
 *     xxxGetControlColor @ 0x1C0152424 (xxxGetControlColor.c)
 */

__int64 __fastcall xxxPaintRect(struct tagWND *a1, __int64 a2, HDC a3, HBRUSH ControlColor, LPCRECT a5)
{
  struct tagWND *v7; // rbx

  v7 = a1;
  if ( !a1 )
    v7 = *(struct tagWND **)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 456LL) + 8LL) + 24LL);
  GetDesktopWindow((__int64)v7);
  GreSetBrushOrg(a3);
  if ( (unsigned __int64)ControlColor < 7 )
    ControlColor = (HBRUSH)xxxGetControlColor(v7);
  FillRect(a3, a5, ControlColor);
  GreSetBrushOrg(a3);
  return 1LL;
}
