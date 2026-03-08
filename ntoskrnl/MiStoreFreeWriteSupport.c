/*
 * XREFs of MiStoreFreeWriteSupport @ 0x140659CD0
 * Callers:
 *     MiStoreWriteModifiedPages @ 0x14046554A (MiStoreWriteModifiedPages.c)
 *     MiStoreModifiedWriteComplete @ 0x14065A174 (MiStoreModifiedWriteComplete.c)
 * Callees:
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x140283390 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     RtlpInterlockedPushEntrySList @ 0x1404204A0 (RtlpInterlockedPushEntrySList.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall MiStoreFreeWriteSupport(struct _SLIST_ENTRY *P, union _SLIST_HEADER *a2)
{
  _SLIST_ENTRY *Next; // rcx

  Next = P[4].Next;
  if ( Next )
  {
    ObDereferenceObjectDeferDeleteWithTag(Next, 0x746C6644u);
    P[4].Next = 0LL;
  }
  if ( LOWORD(a2[81].Alignment) >= 0x100u )
    ExFreePoolWithTag(P, 0);
  else
    RtlpInterlockedPushEntrySList(a2 + 81, P);
}
