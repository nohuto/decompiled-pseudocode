/*
 * XREFs of ExFlushLookasideListEx @ 0x1402EC3C0
 * Callers:
 *     ExDeleteLookasideListEx @ 0x1402EC380 (ExDeleteLookasideListEx.c)
 * Callees:
 *     RtlpInterlockedFlushSList @ 0x1404204E0 (RtlpInterlockedFlushSList.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

void __stdcall ExFlushLookasideListEx(PLOOKASIDE_LIST_EX Lookaside)
{
  PSLIST_ENTRY v2; // rcx
  struct _SLIST_ENTRY *Next; // rbx

  v2 = RtlpInterlockedFlushSList(&Lookaside->L.ListHead);
  if ( v2 )
  {
    do
    {
      Next = v2->Next;
      Lookaside->L.FreeEx(v2, Lookaside);
      v2 = Next;
    }
    while ( Next );
  }
}
