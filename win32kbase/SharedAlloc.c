/*
 * XREFs of SharedAlloc @ 0x1C00CA5F0
 * Callers:
 *     HMAllocObjectEx @ 0x1C00122BC (HMAllocObjectEx.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall SharedAlloc(SIZE_T Size)
{
  return RtlAllocateHeap(gpvSharedAlloc, 0, (unsigned int)Size);
}
