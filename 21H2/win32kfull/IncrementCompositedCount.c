/*
 * XREFs of IncrementCompositedCount @ 0x1C01E25D4
 * Callers:
 *     SetRedirectedWindow @ 0x1C001F9FC (SetRedirectedWindow.c)
 *     SetVisible @ 0x1C001FE88 (SetVisible.c)
 *     ?IncComposited@@YAXPEAUtagWND@@@Z @ 0x1C0239040 (-IncComposited@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     _SetSystemTimer @ 0x1C00C2F28 (_SetSystemTimer.c)
 */

__int64 __fastcall IncrementCompositedCount(__int64 a1)
{
  unsigned int v1; // edx

  v1 = 0;
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 0x10) != 0 )
  {
    if ( !g_cVisibleComposited++ )
      SetSystemTimer(gTermIO[1], 65525LL, 0x64u, (__int64)xxxSystemTimerProc, 1);
    return 1;
  }
  return v1;
}
