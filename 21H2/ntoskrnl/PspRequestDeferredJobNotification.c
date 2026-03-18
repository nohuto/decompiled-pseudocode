/*
 * XREFs of PspRequestDeferredJobNotification @ 0x14025CFA4
 * Callers:
 *     PspJobCycleTimeNotificationDpcRoutine @ 0x1405E0E20 (PspJobCycleTimeNotificationDpcRoutine.c)
 *     PspSendWakeNotification @ 0x1406792F4 (PspSendWakeNotification.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 */

char __fastcall PspRequestDeferredJobNotification(signed __int64 a1, unsigned int a2)
{
  signed __int64 v2; // rax
  signed __int64 v3; // rdx

  _m_prefetchw((const void *)(a1 + 1512));
  if ( (_InterlockedOr((volatile signed __int32 *)(a1 + 1512), a2) & 0x22000) != 0 )
    return 0;
  _m_prefetchw(&PspJobNotificationList);
  v2 = PspJobNotificationList;
  do
  {
    v3 = v2;
    *(_QWORD *)(a1 + 1160) = v2;
    v2 = _InterlockedCompareExchange64(&PspJobNotificationList, a1, v2);
  }
  while ( v2 != v3 );
  if ( !v3 )
    ExQueueWorkItem(&PspJobNotificationItem, NormalWorkQueue);
  return 1;
}
