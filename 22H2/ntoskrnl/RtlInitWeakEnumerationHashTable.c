/*
 * XREFs of RtlInitWeakEnumerationHashTable @ 0x140588A10
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitEnumerationHashTable @ 0x14031EB70 (RtlInitEnumerationHashTable.c)
 */

BOOLEAN __stdcall RtlInitWeakEnumerationHashTable(
        PRTL_DYNAMIC_HASH_TABLE HashTable,
        PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR Enumerator)
{
  return RtlInitEnumerationHashTable(HashTable, Enumerator);
}
