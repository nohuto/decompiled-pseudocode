/*
 * XREFs of PopFxNotifySxTransitionState @ 0x1409825D4
 * Callers:
 *     PoBroadcastSystemState @ 0x140AA38F8 (PoBroadcastSystemState.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     ExQueueWorkItem @ 0x14033F3D0 (ExQueueWorkItem.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 */

NTSTATUS __fastcall PopFxNotifySxTransitionState(char a1)
{
  struct _WORK_QUEUE_ITEM *v2; // rcx
  __int64 v3; // rax

  if ( a1 )
  {
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopFxUpdateDripsConstraintContext, 0LL);
    byte_140C3E8D8 = 1;
    if ( (_InterlockedExchangeAdd64(
            (volatile signed __int64 *)&PopFxUpdateDripsConstraintContext,
            0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&PopFxUpdateDripsConstraintContext);
    KeAbPostRelease((ULONG_PTR)&PopFxUpdateDripsConstraintContext);
    return KeWaitForSingleObject(&stru_140C3E8E0, Executive, 0, 0, 0LL);
  }
  else
  {
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopFxUpdateDripsConstraintContext, 0LL);
    byte_140C3E8D8 = 0;
    while ( 1 )
    {
      v2 = (struct _WORK_QUEUE_ITEM *)qword_140C3E8C8;
      if ( (__int64 *)qword_140C3E8C8 == &qword_140C3E8C8 )
        break;
      if ( *(__int64 **)(qword_140C3E8C8 + 8) != &qword_140C3E8C8
        || (v3 = *(_QWORD *)qword_140C3E8C8, *(_QWORD *)(*(_QWORD *)qword_140C3E8C8 + 8LL) != qword_140C3E8C8) )
      {
        __fastfail(3u);
      }
      qword_140C3E8C8 = *(_QWORD *)qword_140C3E8C8;
      *(_QWORD *)(v3 + 8) = &qword_140C3E8C8;
      ExQueueWorkItem(v2 + 1, DelayedWorkQueue);
    }
    if ( (_InterlockedExchangeAdd64(
            (volatile signed __int64 *)&PopFxUpdateDripsConstraintContext,
            0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&PopFxUpdateDripsConstraintContext);
    return KeAbPostRelease((ULONG_PTR)&PopFxUpdateDripsConstraintContext);
  }
}
