/*
 * XREFs of RtlEndWeakEnumerationHashTable @ 0x1403D7540
 * Callers:
 *     <none>
 * Callees:
 *     RtlEndEnumerationHashTable @ 0x14036F690 (RtlEndEnumerationHashTable.c)
 */

void __stdcall RtlEndWeakEnumerationHashTable(
        PRTL_DYNAMIC_HASH_TABLE HashTable,
        PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR Enumerator)
{
  RtlEndEnumerationHashTable(HashTable, Enumerator);
}
