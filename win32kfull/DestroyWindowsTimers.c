/*
 * XREFs of DestroyWindowsTimers @ 0x1C00DB1CC
 * Callers:
 *     xxxFreeWindow @ 0x1C0031C50 (xxxFreeWindow.c)
 *     ?xxxClientShutdown2@@YAJPEAUtagBWL@@I_K@Z @ 0x1C00DB088 (-xxxClientShutdown2@@YAJPEAUtagBWL@@I_K@Z.c)
 * Callees:
 *     FreeTimer @ 0x1C003A800 (FreeTimer.c)
 */

__int64 DestroyWindowsTimers()
{
  return gtmrListHead[0];
}
