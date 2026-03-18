/*
 * XREFs of RtlGetNextEntryHashTable @ 0x140337E80
 * Callers:
 *     SepRmReferenceFindCap @ 0x1405B9948 (SepRmReferenceFindCap.c)
 *     SepGetCachedHandlesEntry @ 0x1407F4CCC (SepGetCachedHandlesEntry.c)
 *     SepFindMatchingLowBoxNumberEntry @ 0x1407F504C (SepFindMatchingLowBoxNumberEntry.c)
 *     SepFindMatchingLuidEntry @ 0x1409D1138 (SepFindMatchingLuidEntry.c)
 *     SepFindSharedSidEntry @ 0x1409D17FC (SepFindSharedSidEntry.c)
 * Callees:
 *     <none>
 */

PRTL_DYNAMIC_HASH_TABLE_ENTRY __stdcall RtlGetNextEntryHashTable(
        PRTL_DYNAMIC_HASH_TABLE HashTable,
        PRTL_DYNAMIC_HASH_TABLE_CONTEXT Context)
{
  struct _LIST_ENTRY *Flink; // r8
  PRTL_DYNAMIC_HASH_TABLE_ENTRY result; // rax
  PRTL_DYNAMIC_HASH_TABLE_ENTRY v4; // r10

  Flink = Context->PrevLinkage->Flink;
  result = (PRTL_DYNAMIC_HASH_TABLE_ENTRY)Flink->Flink;
  if ( Flink->Flink == Context->ChainHead )
    return 0LL;
  if ( HashTable->NumEnumerators )
  {
    v4 = (PRTL_DYNAMIC_HASH_TABLE_ENTRY)Flink->Flink;
    do
    {
      result = v4;
      if ( v4->Signature )
        break;
      Flink = &v4->Linkage;
      v4 = (PRTL_DYNAMIC_HASH_TABLE_ENTRY)v4->Linkage.Flink;
    }
    while ( v4 != (PRTL_DYNAMIC_HASH_TABLE_ENTRY)Context->ChainHead );
  }
  if ( result->Signature != Context->Signature )
    return 0LL;
  Context->PrevLinkage = Flink;
  return result;
}
