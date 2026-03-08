/*
 * XREFs of MiSetBasicInfoPartitionId @ 0x1402FE994
 * Callers:
 *     MmQueryVirtualMemory @ 0x1407C6390 (MmQueryVirtualMemory.c)
 * Callees:
 *     <none>
 */

void __fastcall MiSetBasicInfoPartitionId(__int64 a1, __int16 a2)
{
  *(_WORD *)(a1 + 20) = a2;
}
