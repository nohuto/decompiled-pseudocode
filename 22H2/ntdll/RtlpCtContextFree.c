/*
 * XREFs of RtlpCtContextFree @ 0x180102388
 * Callers:
 *     RtlRaiseCustomSystemEventTrigger @ 0x180102130 (RtlRaiseCustomSystemEventTrigger.c)
 *     RtlpCtContextInit @ 0x1801023E4 (RtlpCtContextInit.c)
 *     RtlpRtlpCtWaitForWnfQuiescentWorker @ 0x180102500 (RtlpRtlpCtWaitForWnfQuiescentWorker.c)
 * Callees:
 *     TpReleaseWork @ 0x18000F180 (TpReleaseWork.c)
 *     RtlUnsubscribeWnfNotificationWaitForCompletion @ 0x180063B40 (RtlUnsubscribeWnfNotificationWaitForCompletion.c)
 *     NtClose @ 0x18009D6C0 (NtClose.c)
 */

LOGICAL __fastcall RtlpCtContextFree(__int64 a1)
{
  void *v2; // rcx
  void *v3; // rcx

  v2 = *(void **)(a1 + 8);
  if ( v2 )
    RtlUnsubscribeWnfNotificationWaitForCompletion(v2);
  v3 = *(void **)(a1 + 16);
  if ( v3 )
  {
    NtClose(v3);
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  if ( *(_QWORD *)a1 )
    TpReleaseWork(*(PTP_WORK *)a1);
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, (PVOID)a1);
}
