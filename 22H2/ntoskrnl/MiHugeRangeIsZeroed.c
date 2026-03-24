/*
 * XREFs of MiHugeRangeIsZeroed @ 0x1405332B8
 * Callers:
 *     MiAllocatePartitionPhysicalPages @ 0x1408DA9C8 (MiAllocatePartitionPhysicalPages.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiHugeRangeIsZeroed(int a1)
{
  return (*(_DWORD *)(qword_140C4E670 + 8 * (*(_QWORD *)&a1 & 0x3FFFFLL)) & 0x3FFFFLL) != 1;
}
