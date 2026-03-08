/*
 * XREFs of RtlInitWeakEnumerationHashTable @ 0x1403D2000
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitEnumerationHashTable @ 0x1402B8220 (RtlInitEnumerationHashTable.c)
 */

BOOLEAN __stdcall RtlInitWeakEnumerationHashTable(
        PRTL_DYNAMIC_HASH_TABLE HashTable,
        PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR Enumerator)
{
  return RtlInitEnumerationHashTable(HashTable, Enumerator);
}
