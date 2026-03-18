/*
 * XREFs of ViPoolDelayFreeTrimThreadRoutine @ 0x140A9A410
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     RtlpInterlockedFlushSList @ 0x140429900 (RtlpInterlockedFlushSList.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall __noreturn ViPoolDelayFreeTrimThreadRoutine(union _SLIST_HEADER *StartContext)
{
  PSLIST_ENTRY v2; // rax
  struct _SLIST_ENTRY *Next; // rbx

  while ( 1 )
  {
    do
    {
      KeWaitForSingleObject(&StartContext[1], Executive, 0, 0, 0LL);
      ++*((_DWORD *)&StartContext[3].HeaderX64 + 3);
      v2 = RtlpInterlockedFlushSList(StartContext);
    }
    while ( !v2 );
    do
    {
      Next = v2->Next;
      ExFreePoolWithTag(v2, 0);
      v2 = Next;
    }
    while ( Next );
  }
}
