/*
 * XREFs of RtlRemoveEntryHashTable @ 0x1402B8170
 * Callers:
 *     SepCleanupMarkedForDeletionEntries @ 0x1402B7F18 (SepCleanupMarkedForDeletionEntries.c)
 *     SepDereferenceCachedHandlesEntry @ 0x140744278 (SepDereferenceCachedHandlesEntry.c)
 *     SepDereferenceLowBoxNumberEntry @ 0x14074438C (SepDereferenceLowBoxNumberEntry.c)
 *     SepDeReferenceSharedSidEntries @ 0x1409CE4F0 (SepDeReferenceSharedSidEntries.c)
 *     SepInsertOrReferenceSharedSidEntries @ 0x1409CE9FC (SepInsertOrReferenceSharedSidEntries.c)
 *     SepRmDestroyCapTable @ 0x1409CF58C (SepRmDestroyCapTable.c)
 * Callees:
 *     RtlpPopulateContext @ 0x1402B8294 (RtlpPopulateContext.c)
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
