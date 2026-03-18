/*
 * XREFs of RtlInitWeakEnumerationHashTable @ 0x1403D7520
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitEnumerationHashTable @ 0x14036F6E0 (RtlInitEnumerationHashTable.c)
 */

BOOLEAN __stdcall RtlInitWeakEnumerationHashTable(
        PRTL_DYNAMIC_HASH_TABLE HashTable,
        PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR Enumerator)
{
  return RtlInitEnumerationHashTable(HashTable, Enumerator);
}
