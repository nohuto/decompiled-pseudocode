/*
 * XREFs of VidSchiProcessIsrSchedulingLogFull @ 0x1C0045D04
 * Callers:
 *     VidSchDdiNotifyInterruptWorker @ 0x1C000B040 (VidSchDdiNotifyInterruptWorker.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001A8E0 (_guard_dispatch_icall_nop.c)
 */

PSLIST_ENTRY __fastcall VidSchiProcessIsrSchedulingLogFull(__int64 a1)
{
  union _SLIST_HEADER *v1; // rdi
  PSLIST_ENTRY v3; // rax

  v1 = *(union _SLIST_HEADER **)(a1 + 24);
  v3 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(a1 + 6048));
  if ( v3 )
  {
    v3[2].Next = (struct _SLIST_ENTRY *)a1;
    LODWORD(v3->Next) = 15;
    return ExpInterlockedPushEntrySList(v1 + 111, v3 + 1);
  }
  else
  {
    WdLogSingleEntry1(1LL, *(unsigned __int16 *)(a1 + 4));
    return (PSLIST_ENTRY)((__int64 (*)(_QWORD, __int64, __int64, const wchar_t *, ...))DxgCoreInterface[86])(
                           0LL,
                           0x40000LL,
                           0xFFFFFFFFLL,
                           L"The list of pending scheduling log interrupts is full on node %d. There must be severe conten"
                            "tion on the scheduler spin lock. This interrupt will be ignored, and a preceding interrupt w"
                            "ill grow the scheduling log if needed.",
                           *(unsigned __int16 *)(a1 + 4),
                           0LL,
                           0LL,
                           0LL,
                           0LL);
  }
}
