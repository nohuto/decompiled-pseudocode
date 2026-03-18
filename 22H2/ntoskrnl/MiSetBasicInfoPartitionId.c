/*
 * XREFs of MiSetBasicInfoPartitionId @ 0x140369AAC
 * Callers:
 *     MmQueryVirtualMemory @ 0x1406F8400 (MmQueryVirtualMemory.c)
 * Callees:
 *     <none>
 */

void __fastcall MiSetBasicInfoPartitionId(__int64 a1, __int16 a2)
{
  *(_WORD *)(a1 + 20) = a2;
}
