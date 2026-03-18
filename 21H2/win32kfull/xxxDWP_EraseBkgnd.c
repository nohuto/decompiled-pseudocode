/*
 * XREFs of xxxDWP_EraseBkgnd @ 0x1C00C2600
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0067528 (xxxRealDefWindowProc.c)
 * Callees:
 *     xxxFillWindow @ 0x1C00C1AAC (xxxFillWindow.c)
 *     xxxInternalPaintDesktop @ 0x1C0110D3C (xxxInternalPaintDesktop.c)
 */

__int64 __fastcall xxxDWP_EraseBkgnd(struct tagWND *a1, int a2, __int64 a3)
{
  if ( a2 == 20 )
  {
    if ( !*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 17) + 8LL) + 72LL) )
      return 0LL;
    xxxFillWindow(a1, (__int64)a1, a3);
  }
  else if ( a2 == 39 )
  {
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x40) != 0 )
      return 0LL;
    xxxInternalPaintDesktop(a1, a3, 1LL);
  }
  return 1LL;
}
