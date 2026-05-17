/*
 * XREFs of RtlpAllocateSecondLevelDir @ 0x18007455C
 * Callers:
 *     RtlpCreateHashTable @ 0x1800743C8 (RtlpCreateHashTable.c)
 *     RtlExpandHashTable @ 0x180088C70 (RtlExpandHashTable.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpAllocateSecondLevelDir(char a1)
{
  return RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned int)(16 << (a1 + 7)));
}
