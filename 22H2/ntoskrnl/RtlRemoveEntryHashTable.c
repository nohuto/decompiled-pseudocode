/*
 * XREFs of RtlRemoveEntryHashTable @ 0x14036F630
 * Callers:
 *     SepCleanupMarkedForDeletionEntries @ 0x14036F3DC (SepCleanupMarkedForDeletionEntries.c)
 *     SepDereferenceLowBoxNumberEntry @ 0x1407EF74C (SepDereferenceLowBoxNumberEntry.c)
 *     SepDereferenceCachedHandlesEntry @ 0x1407EF89C (SepDereferenceCachedHandlesEntry.c)
 *     SepDeReferenceSharedSidEntries @ 0x1409D1390 (SepDeReferenceSharedSidEntries.c)
 *     SepInsertOrReferenceSharedSidEntries @ 0x1409D189C (SepInsertOrReferenceSharedSidEntries.c)
 *     SepRmDestroyCapTable @ 0x1409D242C (SepRmDestroyCapTable.c)
 * Callees:
 *     RtlpPopulateContext @ 0x14036F754 (RtlpPopulateContext.c)
 */

BOOLEAN __stdcall RtlRemoveEntryHashTable(
        PRTL_DYNAMIC_HASH_TABLE HashTable,
        PRTL_DYNAMIC_HASH_TABLE_ENTRY Entry,
        PRTL_DYNAMIC_HASH_TABLE_CONTEXT Context)
{
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *Blink; // rax

  --HashTable->NumEntries;
  if ( Entry->Linkage.Flink == Entry->Linkage.Blink )
    --HashTable->NonEmptyBuckets;
  Flink = Entry->Linkage.Flink;
  if ( (PRTL_DYNAMIC_HASH_TABLE_ENTRY)Entry->Linkage.Flink->Blink != Entry
    || (Blink = Entry->Linkage.Blink, (PRTL_DYNAMIC_HASH_TABLE_ENTRY)Blink->Flink != Entry) )
  {
    __fastfail(3u);
  }
  Blink->Flink = Flink;
  Flink->Blink = Blink;
  if ( Context && !Context->ChainHead )
    RtlpPopulateContext(HashTable, Context);
  return 1;
}
