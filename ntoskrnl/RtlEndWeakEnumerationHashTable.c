/*
 * XREFs of RtlEndWeakEnumerationHashTable @ 0x1403D2020
 * Callers:
 *     <none>
 * Callees:
 *     RtlEndEnumerationHashTable @ 0x1402B81D0 (RtlEndEnumerationHashTable.c)
 */

void __stdcall RtlEndWeakEnumerationHashTable(
        PRTL_DYNAMIC_HASH_TABLE HashTable,
        PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR Enumerator)
{
  RtlEndEnumerationHashTable(HashTable, Enumerator);
}
