/*
 * XREFs of DeleteMonitorsAndWindowsSnapShot @ 0x1C01D7760
 * Callers:
 *     <none>
 * Callees:
 *     CleanMonitorsAndWindowsSnapshot @ 0x1C01D76D4 (CleanMonitorsAndWindowsSnapshot.c)
 */

void __fastcall DeleteMonitorsAndWindowsSnapShot(void *a1)
{
  CleanMonitorsAndWindowsSnapshot((__int64)a1);
  Win32FreePool(a1);
}
