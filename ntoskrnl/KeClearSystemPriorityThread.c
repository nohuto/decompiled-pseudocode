/*
 * XREFs of KeClearSystemPriorityThread @ 0x1405746EC
 * Callers:
 *     MiZeroHugeRangeCore @ 0x140A2B20C (MiZeroHugeRangeCore.c)
 * Callees:
 *     KiClearSystemPriority @ 0x1402DAA90 (KiClearSystemPriority.c)
 */

__int64 __fastcall KeClearSystemPriorityThread(ULONG_PTR a1, int a2)
{
  int v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  return KiClearSystemPriority(a1, (char *)&v3);
}
