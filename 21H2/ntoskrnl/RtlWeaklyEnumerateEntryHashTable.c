/*
 * XREFs of RtlWeaklyEnumerateEntryHashTable @ 0x14045F160
 * Callers:
 *     <none>
 * Callees:
 *     RtlEnumerateEntryHashTable @ 0x140206880 (RtlEnumerateEntryHashTable.c)
 */

PRTL_DYNAMIC_HASH_TABLE_ENTRY __stdcall RtlWeaklyEnumerateEntryHashTable(
        PRTL_DYNAMIC_HASH_TABLE HashTable,
        PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR Enumerator)
{
  return RtlEnumerateEntryHashTable(HashTable, Enumerator);
}
