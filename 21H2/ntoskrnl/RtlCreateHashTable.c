/*
 * XREFs of RtlCreateHashTable @ 0x14021FAF0
 * Callers:
 *     SepInitializeLowBoxNumberTable @ 0x140695078 (SepInitializeLowBoxNumberTable.c)
 *     SepSetTokenCachedHandles @ 0x1406962A4 (SepSetTokenCachedHandles.c)
 *     SepInitializeSharedSidMap @ 0x140848B8C (SepInitializeSharedSidMap.c)
 * Callees:
 *     RtlpCreateHashTable @ 0x14021FB10 (RtlpCreateHashTable.c)
 */

BOOLEAN __stdcall RtlCreateHashTable(PRTL_DYNAMIC_HASH_TABLE *HashTable, ULONG Shift, ULONG Flags)
{
  return RtlpCreateHashTable(HashTable, 128LL, Shift, Flags);
}
