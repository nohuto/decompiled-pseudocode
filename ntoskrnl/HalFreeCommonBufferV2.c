/*
 * XREFs of HalFreeCommonBufferV2 @ 0x1405136F0
 * Callers:
 *     <none>
 * Callees:
 *     MmFreeContiguousMemory @ 0x1403BD6E0 (MmFreeContiguousMemory.c)
 */

void __fastcall HalFreeCommonBufferV2(__int64 a1, __int64 a2, __int64 a3, void *a4)
{
  MmFreeContiguousMemory(a4);
}
