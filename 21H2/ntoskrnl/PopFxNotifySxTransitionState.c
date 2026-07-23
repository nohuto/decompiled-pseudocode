/*
 * XREFs of PopFxNotifySxTransitionState @ 0x140776CE4
 * Callers:
 *     PoBroadcastSystemState @ 0x1409932E0 (PoBroadcastSystemState.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1402E2FA0 (ExQueueWorkItem.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 */

char __fastcall PopFxNotifySxTransitionState(char a1)
{
  char v1; // al
  struct _WORK_QUEUE_ITEM *v3; // rcx
  char v4; // al
  __int64 v5; // rax

  if ( a1 )
  {
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopFxUpdateDripsConstraintContext, 0LL);
    byte_140C24A38 = 1;
    v1 = _InterlockedExchangeAdd64((volatile signed __int64 *)&PopFxUpdateDripsConstraintContext, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v1 & 2) != 0 && (v1 & 4) == 0 )
      ExfTryToWakePushLock(&PopFxUpdateDripsConstraintContext);
    KeAbPostRelease((ULONG_PTR)&PopFxUpdateDripsConstraintContext);
    return KeWaitForSingleObject(&stru_140C24A40, Executive, 0, 0, 0LL);
  }
  else
  {
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopFxUpdateDripsConstraintContext, 0LL);
    byte_140C24A38 = 0;
    while ( 1 )
    {
      v3 = (struct _WORK_QUEUE_ITEM *)qword_140C24A28;
      if ( (__int64 *)qword_140C24A28 == &qword_140C24A28 )
        break;
      if ( *(__int64 **)(qword_140C24A28 + 8) != &qword_140C24A28
        || (v5 = *(_QWORD *)qword_140C24A28, *(_QWORD *)(*(_QWORD *)qword_140C24A28 + 8LL) != qword_140C24A28) )
      {
        __fastfail(3u);
      }
      qword_140C24A28 = *(_QWORD *)qword_140C24A28;
      *(_QWORD *)(v5 + 8) = &qword_140C24A28;
      ExQueueWorkItem(v3 + 1, DelayedWorkQueue);
    }
    v4 = _InterlockedExchangeAdd64((volatile signed __int64 *)&PopFxUpdateDripsConstraintContext, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v4 & 2) != 0 && (v4 & 4) == 0 )
      ExfTryToWakePushLock(&PopFxUpdateDripsConstraintContext);
    return KeAbPostRelease((ULONG_PTR)&PopFxUpdateDripsConstraintContext);
  }
}
