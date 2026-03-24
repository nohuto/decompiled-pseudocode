/*
 * XREFs of DeleteMonitorsAndWindowsSnapShot @ 0x1C01D71A0
 * Callers:
 *     <none>
 * Callees:
 *     CleanMonitorsAndWindowsSnapshot @ 0x1C01D7114 (CleanMonitorsAndWindowsSnapshot.c)
 */

void __fastcall DeleteMonitorsAndWindowsSnapShot(void *a1)
{
  CleanMonitorsAndWindowsSnapshot((__int64)a1);
  Win32FreePool(a1);
}
