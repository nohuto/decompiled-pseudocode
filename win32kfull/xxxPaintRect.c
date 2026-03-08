/*
 * XREFs of xxxPaintRect @ 0x1C0007680
 * Callers:
 *     xxxFillWindow @ 0x1C00FC114 (xxxFillWindow.c)
 * Callees:
 *     GreSetBrushOrg @ 0x1C0007754 (GreSetBrushOrg.c)
 *     xxxGetControlColor @ 0x1C0007848 (xxxGetControlColor.c)
 *     _GetDesktopWindow @ 0x1C0044670 (_GetDesktopWindow.c)
 *     FillRect @ 0x1C00881F8 (FillRect.c)
 */

__int64 __fastcall xxxPaintRect(__int64 a1, __int64 a2, HDC a3, HBRUSH ControlColor, const RECT *a5)
{
  __int64 v8; // rbx

  v8 = a1;
  if ( !a1 )
    v8 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 456LL) + 8LL) + 24LL);
  GetDesktopWindow(v8, 0LL);
  GreSetBrushOrg(a3);
  if ( (unsigned __int64)ControlColor < 7 )
    ControlColor = (HBRUSH)xxxGetControlColor(v8, a2, a3, (unsigned int)((_DWORD)ControlColor + 306));
  FillRect(a3, a5, ControlColor);
  GreSetBrushOrg(a3);
  return 1LL;
}
