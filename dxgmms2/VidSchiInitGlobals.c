/*
 * XREFs of VidSchiInitGlobals @ 0x1C00B4B00
 * Callers:
 *     DriverEntry @ 0x1C010D1E8 (DriverEntry.c)
 * Callees:
 *     <none>
 */

__int64 VidSchiInitGlobals()
{
  qword_1C0076918 = (__int64)&gAdapterListHead;
  gAdapterListHead = &gAdapterListHead;
  return 0LL;
}
