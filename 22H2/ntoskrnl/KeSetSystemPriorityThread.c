/*
 * XREFs of KeSetSystemPriorityThread @ 0x140576D40
 * Callers:
 *     MiZeroHugeRangeCore @ 0x140A2DF6C (MiZeroHugeRangeCore.c)
 * Callees:
 *     KiSetSystemPriorityThread @ 0x1403558D0 (KiSetSystemPriorityThread.c)
 */

char __fastcall KeSetSystemPriorityThread(ULONG_PTR a1, int a2)
{
  return KiSetSystemPriorityThread(a1, a2, 0);
}
