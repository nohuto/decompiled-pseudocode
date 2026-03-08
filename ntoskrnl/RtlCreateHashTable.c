/*
 * XREFs of RtlCreateHashTable @ 0x1402B8530
 * Callers:
 *     SepSetTokenCachedHandles @ 0x140739630 (SepSetTokenCachedHandles.c)
 *     SepInitializeLowBoxNumberTable @ 0x140739CF0 (SepInitializeLowBoxNumberTable.c)
 *     SepInitializeSharedSidMap @ 0x140810CFC (SepInitializeSharedSidMap.c)
 * Callees:
 *     RtlpCreateHashTable @ 0x1402B8550 (RtlpCreateHashTable.c)
 */

BOOLEAN __stdcall RtlCreateHashTable(PRTL_DYNAMIC_HASH_TABLE *HashTable, ULONG Shift, ULONG Flags)
{
  return RtlpCreateHashTable(HashTable, 128LL, Shift, Flags);
}
