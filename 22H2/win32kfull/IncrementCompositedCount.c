/*
 * XREFs of IncrementCompositedCount @ 0x1C01E7980
 * Callers:
 *     SetVisible @ 0x1C004BCA0 (SetVisible.c)
 *     SetRedirectedWindow @ 0x1C00BCE5C (SetRedirectedWindow.c)
 *     ?IncComposited@@YAXPEAUtagWND@@@Z @ 0x1C023D6B0 (-IncComposited@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     _SetSystemTimer @ 0x1C002CA18 (_SetSystemTimer.c)
 */

__int64 __fastcall IncrementCompositedCount(__int64 a1)
{
  unsigned int v1; // edx

  v1 = 0;
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 0x10) != 0 )
  {
    if ( !g_cVisibleComposited++ )
      SetSystemTimer(gTermIO[1], 65525, 100, (int)xxxSystemTimerProc, 1);
    return 1;
  }
  return v1;
}
