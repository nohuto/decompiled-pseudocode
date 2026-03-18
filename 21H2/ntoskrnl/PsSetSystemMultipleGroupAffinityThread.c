/*
 * XREFs of PsSetSystemMultipleGroupAffinityThread @ 0x1405E0B40
 * Callers:
 *     <none>
 * Callees:
 *     KeSetSystemMultipleGroupAffinityThread @ 0x14056B9FC (KeSetSystemMultipleGroupAffinityThread.c)
 */

__int64 __fastcall PsSetSystemMultipleGroupAffinityThread(__int64 *a1, __int64 a2, __int64 a3)
{
  return KeSetSystemMultipleGroupAffinityThread(a1, a2, a3);
}
