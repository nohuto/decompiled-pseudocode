/*
 * XREFs of EtwpReleaseQueueEntry @ 0x1406909C8
 * Callers:
 *     EtwpQueueNotification @ 0x14069039C (EtwpQueueNotification.c)
 *     EtwpReceiveNotification @ 0x1406907F4 (EtwpReceiveNotification.c)
 *     EtwpDeleteRegistrationObject @ 0x140693BC0 (EtwpDeleteRegistrationObject.c)
 *     EtwpRundownNotifications @ 0x140695998 (EtwpRundownNotifications.c)
 *     EtwpSendReplyDataBlock @ 0x140783DB4 (EtwpSendReplyDataBlock.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     PsReleaseProcessWakeCounter @ 0x140711BD0 (PsReleaseProcessWakeCounter.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpReleaseQueueEntry(PVOID *P, int a2)
{
  PVOID v4; // rcx

  if ( (a2 & 2) != 0 )
  {
    ObfDereferenceObject(P[4]);
    v4 = P[5];
    if ( v4 )
      PsReleaseProcessWakeCounter(v4, P[3]);
  }
  _m_prefetchw((char *)P + 52);
  if ( (~a2 & _InterlockedAnd((volatile signed __int32 *)P + 13, ~a2)) == 0 )
    ExFreePoolWithTag(P, 0);
}
