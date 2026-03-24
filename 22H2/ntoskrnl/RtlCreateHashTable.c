/*
 * XREFs of RtlCreateHashTable @ 0x140376230
 * Callers:
 *     SepSetTokenCachedHandles @ 0x14070EDA4 (SepSetTokenCachedHandles.c)
 *     SepInitializeLowBoxNumberTable @ 0x14078E458 (SepInitializeLowBoxNumberTable.c)
 *     SepInitializeSharedSidMap @ 0x14079E30C (SepInitializeSharedSidMap.c)
 * Callees:
 *     RtlpCreateHashTable @ 0x140376250 (RtlpCreateHashTable.c)
 */

BOOLEAN __stdcall RtlCreateHashTable(PRTL_DYNAMIC_HASH_TABLE *HashTable, ULONG Shift, ULONG Flags)
{
  return RtlpCreateHashTable(HashTable, 128LL, Shift, Flags);
}
