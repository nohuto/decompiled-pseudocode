/*
 * XREFs of PsSetSystemMultipleGroupAffinityThread @ 0x1405A1C90
 * Callers:
 *     <none>
 * Callees:
 *     KeSetSystemMultipleGroupAffinityThread @ 0x140301184 (KeSetSystemMultipleGroupAffinityThread.c)
 */

__int64 __fastcall PsSetSystemMultipleGroupAffinityThread(__int64 *a1, unsigned __int16 a2, __int64 a3)
{
  return KeSetSystemMultipleGroupAffinityThread(a1, a2, a3);
}
