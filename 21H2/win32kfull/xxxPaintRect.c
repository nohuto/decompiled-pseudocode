/*
 * XREFs of xxxPaintRect @ 0x1C004555C
 * Callers:
 *     xxxFillWindow @ 0x1C00454D4 (xxxFillWindow.c)
 * Callees:
 *     GreSetBrushOrg @ 0x1C004562C (GreSetBrushOrg.c)
 *     FillRect @ 0x1C0045734 (FillRect.c)
 *     _GetDesktopWindow @ 0x1C00704C0 (_GetDesktopWindow.c)
 *     xxxGetControlColor @ 0x1C015114C (xxxGetControlColor.c)
 */

__int64 __fastcall xxxPaintRect(__int64 a1, __int64 a2, HDC a3, HBRUSH ControlColor, const RECT *a5)
{
  __int64 v8; // rbx

  v8 = a1;
  if ( !a1 )
    v8 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 456LL) + 8LL) + 24LL);
  GetDesktopWindow(v8);
  GreSetBrushOrg(a3);
  if ( (unsigned __int64)ControlColor < 7 )
    ControlColor = (HBRUSH)xxxGetControlColor(v8, a2, a3, (unsigned int)((_DWORD)ControlColor + 306));
  FillRect(a3, a5, ControlColor);
  GreSetBrushOrg(a3);
  return 1LL;
}
