/*
 * XREFs of xxxDWP_EraseBkgnd @ 0x1C00A4F54
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C00A8800 (xxxRealDefWindowProc.c)
 * Callees:
 *     xxxInternalPaintDesktop @ 0x1C00F9338 (xxxInternalPaintDesktop.c)
 *     xxxFillWindow @ 0x1C00FC114 (xxxFillWindow.c)
 */

__int64 __fastcall xxxDWP_EraseBkgnd(__int64 a1, int a2, __int64 a3)
{
  unsigned __int64 v3; // r9

  if ( a2 == 20 )
  {
    v3 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 136) + 8LL) + 72LL);
    if ( !v3 )
      return 0LL;
    if ( v3 <= 0x1F )
      v3 = *(_QWORD *)(gpsi + 8 * v3 + 4688);
    xxxFillWindow(a1, a1, a3, v3);
  }
  else if ( a2 == 39 )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 0x40) != 0 )
      return 0LL;
    xxxInternalPaintDesktop(a1, a3, 1LL);
  }
  return 1LL;
}
