/*
 * XREFs of KeSetSystemPriorityThread @ 0x140574720
 * Callers:
 *     MiZeroHugeRangeCore @ 0x140A2B20C (MiZeroHugeRangeCore.c)
 * Callees:
 *     KiSetSystemPriorityThread @ 0x1402E9F30 (KiSetSystemPriorityThread.c)
 */

__int64 __fastcall KeSetSystemPriorityThread(ULONG_PTR a1, int a2)
{
  return KiSetSystemPriorityThread(a1, a2, 0);
}
