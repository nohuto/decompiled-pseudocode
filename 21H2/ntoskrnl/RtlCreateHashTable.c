/*
 * XREFs of RtlCreateHashTable @ 0x140376310
 * Callers:
 *     SepSetTokenCachedHandles @ 0x1406C6254 (SepSetTokenCachedHandles.c)
 *     SepInitializeLowBoxNumberTable @ 0x14078E718 (SepInitializeLowBoxNumberTable.c)
 *     SepInitializeSharedSidMap @ 0x14079E0DC (SepInitializeSharedSidMap.c)
 * Callees:
 *     RtlpCreateHashTable @ 0x140376330 (RtlpCreateHashTable.c)
 */

BOOLEAN __stdcall RtlCreateHashTable(PRTL_DYNAMIC_HASH_TABLE *HashTable, ULONG Shift, ULONG Flags)
{
  return RtlpCreateHashTable(HashTable, 128LL, Shift, Flags);
}
