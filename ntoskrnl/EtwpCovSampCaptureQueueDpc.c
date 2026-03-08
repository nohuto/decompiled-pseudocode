/*
 * XREFs of EtwpCovSampCaptureQueueDpc @ 0x140461BD0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     RtlpInterlockedFlushSList @ 0x1404204E0 (RtlpInterlockedFlushSList.c)
 *     EtwpCovSampPushListSList @ 0x140461D1E (EtwpCovSampPushListSList.c)
 */

void __fastcall EtwpCovSampCaptureQueueDpc(
        struct _KDPC *Dpc,
        char *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  PSLIST_ENTRY v5; // rax
  int v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = 0;
  v5 = RtlpInterlockedFlushSList((PSLIST_HEADER)DeferredContext + 67);
  if ( v5 )
  {
    if ( !EtwpCovSampPushListSList(DeferredContext + 1088, v5, &v6) )
      KeSetEvent((PRKEVENT)DeferredContext + 46, *((_DWORD *)DeferredContext + 326), 0);
  }
}
