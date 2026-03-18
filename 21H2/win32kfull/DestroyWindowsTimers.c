/*
 * XREFs of DestroyWindowsTimers @ 0x1C0060DA4
 * Callers:
 *     xxxFreeWindow @ 0x1C005E458 (xxxFreeWindow.c)
 *     ?xxxClientShutdown2@@YAJPEAUtagBWL@@I_K@Z @ 0x1C010945C (-xxxClientShutdown2@@YAJPEAUtagBWL@@I_K@Z.c)
 * Callees:
 *     FreeTimer @ 0x1C0070D80 (FreeTimer.c)
 */

__int64 DestroyWindowsTimers()
{
  return gtmrListHead[0];
}
