/*
 * XREFs of PspRequestDeferredJobNotification @ 0x140200BEC
 * Callers:
 *     PspJobCycleTimeNotificationDpcRoutine @ 0x1405A1FD0 (PspJobCycleTimeNotificationDpcRoutine.c)
 *     PspSendWakeNotification @ 0x140751A40 (PspSendWakeNotification.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14033F3D0 (ExQueueWorkItem.c)
 */

char __fastcall PspRequestDeferredJobNotification(signed __int64 a1, unsigned int a2)
{
  signed __int64 v2; // rax
  signed __int64 v3; // rdx

  _m_prefetchw((const void *)(a1 + 1536));
  if ( (_InterlockedOr((volatile signed __int32 *)(a1 + 1536), a2) & 0x22000) != 0 )
    return 0;
  _m_prefetchw(&PspJobNotificationList);
  v2 = PspJobNotificationList;
  do
  {
    v3 = v2;
    *(_QWORD *)(a1 + 1184) = v2;
    v2 = _InterlockedCompareExchange64(&PspJobNotificationList, a1, v2);
  }
  while ( v2 != v3 );
  if ( !v3 )
    ExQueueWorkItem(&PspJobNotificationItem, NormalWorkQueue);
  return 1;
}
