/*
 * XREFs of ExpFlushGeneralLookaside @ 0x1402EC330
 * Callers:
 *     ExDeletePagedLookasideList @ 0x1402EC300 (ExDeletePagedLookasideList.c)
 *     ExDeleteNPagedLookasideList @ 0x1403C0DB0 (ExDeleteNPagedLookasideList.c)
 * Callees:
 *     RtlpInterlockedFlushSList @ 0x1404204E0 (RtlpInterlockedFlushSList.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ExpFlushGeneralLookaside(__int64 a1)
{
  PSLIST_ENTRY v2; // rcx
  struct _SLIST_ENTRY *Next; // rbx

  v2 = RtlpInterlockedFlushSList((PSLIST_HEADER)a1);
  if ( v2 )
  {
    do
    {
      Next = v2->Next;
      (*(void (**)(void))(a1 + 56))();
      v2 = Next;
    }
    while ( Next );
  }
  return 0LL;
}
