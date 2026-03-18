/*
 * XREFs of KeClearSystemPriorityThread @ 0x140576D0C
 * Callers:
 *     MiZeroHugeRangeCore @ 0x140A2DF6C (MiZeroHugeRangeCore.c)
 * Callees:
 *     KiClearSystemPriority @ 0x140345AF0 (KiClearSystemPriority.c)
 */

char __fastcall KeClearSystemPriorityThread(ULONG_PTR a1, int a2)
{
  int v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  return KiClearSystemPriority(a1, (char *)&v3);
}
