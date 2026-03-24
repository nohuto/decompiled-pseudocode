/*
 * XREFs of RtlCreateHashTable @ 0x1403767C0
 * Callers:
 *     SepSetTokenCachedHandles @ 0x140717C04 (SepSetTokenCachedHandles.c)
 *     SepInitializeLowBoxNumberTable @ 0x14078E558 (SepInitializeLowBoxNumberTable.c)
 *     SepInitializeSharedSidMap @ 0x14079DEDC (SepInitializeSharedSidMap.c)
 * Callees:
 *     RtlpCreateHashTable @ 0x1403767E0 (RtlpCreateHashTable.c)
 */

BOOLEAN __stdcall RtlCreateHashTable(PRTL_DYNAMIC_HASH_TABLE *HashTable, ULONG Shift, ULONG Flags)
{
  return RtlpCreateHashTable(HashTable, 128LL, Shift, Flags);
}
