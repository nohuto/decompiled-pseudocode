/*
 * XREFs of IncrementCompositedCount @ 0x1C00059EC
 * Callers:
 *     SetRedirectedWindow @ 0x1C002BE1C (SetRedirectedWindow.c)
 *     SetVisible @ 0x1C002DB8C (SetVisible.c)
 *     ?IncComposited@@YAXPEAUtagWND@@@Z @ 0x1C0223340 (-IncComposited@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     _SetSystemTimer @ 0x1C0006384 (_SetSystemTimer.c)
 */

__int64 __fastcall IncrementCompositedCount(__int64 a1)
{
  unsigned int v1; // edx

  v1 = 0;
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 0x10) != 0 )
  {
    if ( !g_cVisibleComposited++ )
      SetSystemTimer(gTermIO[1], 65525, 100, (unsigned int)xxxSystemTimerProc, 1);
    return 1;
  }
  return v1;
}
