/*
 * XREFs of StorpAllocateContiguousMemorySpecifyCacheNode @ 0x1C003AB8C
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000F6F0 (StorPortExtendedFunction.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StorpAllocateContiguousMemorySpecifyCacheNode(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        int a7,
        __int64 *a8)
{
  int v9; // r8d
  __int64 ContiguousNodeMemory; // rax

  v9 = 4;
  if ( a6 != 1 )
  {
    v9 = 516;
    if ( a6 == 2 )
      v9 = 1028;
  }
  ContiguousNodeMemory = MmAllocateContiguousNodeMemory(a2, a3, a4, a5, v9, a7);
  *a8 = ContiguousNodeMemory;
  return ContiguousNodeMemory == 0 ? 0xC1000003 : 0;
}
