/*
 * XREFs of EtwpFreeStackWalkApcs @ 0x14028DCA0
 * Callers:
 *     EtwpFreeLoggerContext @ 0x1406F29FC (EtwpFreeLoggerContext.c)
 * Callees:
 *     RtlpInterlockedFlushSList @ 0x1404204E0 (RtlpInterlockedFlushSList.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpFreeStackWalkApcs(__int64 a1)
{
  PSLIST_ENTRY v2; // rbx
  struct _SLIST_ENTRY *v3; // rcx

  v2 = RtlpInterlockedFlushSList((PSLIST_HEADER)(a1 + 944));
  while ( v2 )
  {
    v3 = v2 - 6;
    v2 = v2->Next;
    ExFreePoolWithTag(v3, 0);
    _InterlockedDecrement((volatile signed __int32 *)(a1 + 960));
  }
}
