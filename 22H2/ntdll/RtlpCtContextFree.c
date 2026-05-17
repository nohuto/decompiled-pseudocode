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

__int64 __fastcall RtlpCtContextFree(__int64 *a1)
{
  __int64 v2; // rcx
  void *v3; // rcx

  v2 = a1[1];
  if ( v2 )
    RtlUnsubscribeWnfNotificationWaitForCompletion(v2);
  v3 = (void *)a1[2];
  if ( v3 )
  {
    NtClose(v3);
    a1[2] = 0LL;
  }
  if ( *a1 )
    TpReleaseWork(*a1);
  return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)a1);
}
