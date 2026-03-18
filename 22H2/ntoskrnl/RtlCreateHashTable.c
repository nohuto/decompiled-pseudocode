/*
 * XREFs of RtlCreateHashTable @ 0x14036F030
 * Callers:
 *     SepSetTokenCachedHandles @ 0x1407F4B10 (SepSetTokenCachedHandles.c)
 *     SepInitializeLowBoxNumberTable @ 0x1407F5AE0 (SepInitializeLowBoxNumberTable.c)
 *     SepInitializeSharedSidMap @ 0x14082433C (SepInitializeSharedSidMap.c)
 * Callees:
 *     RtlpCreateHashTable @ 0x14036F050 (RtlpCreateHashTable.c)
 */

BOOLEAN __stdcall RtlCreateHashTable(PRTL_DYNAMIC_HASH_TABLE *HashTable, ULONG Shift, ULONG Flags)
{
  return RtlpCreateHashTable(HashTable, 128LL, Shift, Flags);
}
