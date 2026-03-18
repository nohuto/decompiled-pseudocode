/*
 * XREFs of RtlInitWeakEnumerationHashTable @ 0x14045F140
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitEnumerationHashTable @ 0x140206B50 (RtlInitEnumerationHashTable.c)
 */

BOOLEAN __stdcall RtlInitWeakEnumerationHashTable(
        PRTL_DYNAMIC_HASH_TABLE HashTable,
        PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR Enumerator)
{
  return RtlInitEnumerationHashTable(HashTable, Enumerator);
}
