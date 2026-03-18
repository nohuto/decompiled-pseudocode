/*
 * XREFs of DecrementCompositedCount @ 0x1C00178C4
 * Callers:
 *     SetVisible @ 0x1C00EBC94 (SetVisible.c)
 *     ?DecComposited@@YAXPEAUtagWND@@@Z @ 0x1C0220610 (-DecComposited@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     FindTimer @ 0x1C003BF24 (FindTimer.c)
 */

__int64 DecrementCompositedCount()
{
  int v0; // ecx

  v0 = g_cVisibleComposited--;
  if ( v0 == 1 )
    FindTimer(gTermIO[1], 65525, 2, 1, 0LL);
  return 1LL;
}
