/*
 * XREFs of KiWakeQueueWaiter @ 0x14024BE60
 * Callers:
 *     KeRegisterObjectNotification @ 0x140202ED8 (KeRegisterObjectNotification.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x140203110 (NtWaitForWorkViaWorkerFactory.c)
 *     NtReleaseWorkerFactoryWorker @ 0x1402424E0 (NtReleaseWorkerFactoryWorker.c)
 *     IoSetIoCompletionEx2 @ 0x140245BA0 (IoSetIoCompletionEx2.c)
 *     KiTimerWaitTest @ 0x140247760 (KiTimerWaitTest.c)
 *     KiExpireTimer2 @ 0x14024AF30 (KiExpireTimer2.c)
 *     KeSetProcess @ 0x14025157C (KeSetProcess.c)
 *     KeReleaseSemaphoreEx @ 0x140262770 (KeReleaseSemaphoreEx.c)
 *     KeSetEventBoostPriorityEx @ 0x140271E08 (KeSetEventBoostPriorityEx.c)
 *     CcUnpinFileDataEx @ 0x140274CB0 (CcUnpinFileDataEx.c)
 *     KeReleaseMutant @ 0x1402C2B40 (KeReleaseMutant.c)
 *     KeSetEvent @ 0x1402C3C30 (KeSetEvent.c)
 *     KiCommitThreadWait @ 0x1402C6640 (KiCommitThreadWait.c)
 *     ExpReleaseResourceSharedForThreadLite @ 0x1402CBCD0 (ExpReleaseResourceSharedForThreadLite.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x1402CD8D0 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     IoSetIoCompletionEx @ 0x1402E6D30 (IoSetIoCompletionEx.c)
 *     KeInsertQueueEx @ 0x1402E6F10 (KeInsertQueueEx.c)
 *     NtAssociateWaitCompletionPacket @ 0x1402ED670 (NtAssociateWaitCompletionPacket.c)
 *     KeReleaseSemaphore @ 0x1402F19A0 (KeReleaseSemaphore.c)
 *     KiActivateWaiterKQueue @ 0x1402F7950 (KiActivateWaiterKQueue.c)
 *     KeRundownQueueCommon @ 0x1403026FC (KeRundownQueueCommon.c)
 *     KeDeleteMutant @ 0x140302978 (KeDeleteMutant.c)
 *     KeWakeWaitChain @ 0x1403121AC (KeWakeWaitChain.c)
 *     KiInsertQueueInternal @ 0x140316088 (KiInsertQueueInternal.c)
 *     KeSignalGate @ 0x14031BEE0 (KeSignalGate.c)
 *     KeInsertQueue @ 0x140326130 (KeInsertQueue.c)
 *     KePulseEvent @ 0x14033AAD0 (KePulseEvent.c)
 *     KiRundownMutants @ 0x140340660 (KiRundownMutants.c)
 *     KeTerminateThread @ 0x140341500 (KeTerminateThread.c)
 *     KiResumeThread @ 0x1403428E0 (KiResumeThread.c)
 *     KeInsertHeadQueue @ 0x14051AEC0 (KeInsertHeadQueue.c)
 * Callees:
 *     KiSignalThread @ 0x140245E10 (KiSignalThread.c)
 *     KeYieldProcessorEx @ 0x14024ABF0 (KeYieldProcessorEx.c)
 *     KiReleaseThreadLockSafe @ 0x1402F1590 (KiReleaseThreadLockSafe.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall KiWakeQueueWaiter(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rbx
  _QWORD *v5; // rsi
  __int64 v8; // rdi
  _QWORD *v10; // rax
  char v11; // r12
  struct _KPRCB *CurrentPrcb; // r13
  __int64 v13; // rbp
  _DWORD *SchedulerAssist; // rcx
  _DWORD *v15; // rcx
  _DWORD *v16; // rcx
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // [rsp+58h] [rbp+10h] BYREF

  v4 = *(_QWORD **)(a2 + 8);
  v5 = (_QWORD *)(a2 + 8);
  while ( 1 )
  {
    v8 = (__int64)v4;
    v4 = (_QWORD *)*v4;
    if ( *(_BYTE *)(v8 + 16) != 3 )
      return 0;
    v10 = *(_QWORD **)(v8 + 8);
    if ( v4[1] != v8 || *v10 != v8 )
      __fastfail(3u);
    *v10 = v4;
    v11 = 0;
    v4[1] = v10;
    CurrentPrcb = KeGetCurrentPrcb();
    v13 = *(_QWORD *)(v8 + 24);
    v20 = 0;
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v17 = SchedulerAssist[6];
        SchedulerAssist[6] = v17 + 1;
        if ( v17 == -1 )
LABEL_18:
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 64), 0LL) )
    {
      v15 = CurrentPrcb->SchedulerAssist;
      if ( v15 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v18 = v15[6] - 1;
          v15[6] = v18;
          if ( !v18 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      do
        KeYieldProcessorEx(&v20, a2, a3, a4);
      while ( *(_QWORD *)(v13 + 64) );
      v16 = CurrentPrcb->SchedulerAssist;
      if ( v16 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v19 = v16[6];
          v16[6] = v19 + 1;
          if ( v19 == -1 )
            goto LABEL_18;
        }
      }
    }
    if ( *(_BYTE *)(v13 + 388) == 5 )
      v11 = KiSignalThread(a1, v13, a3, v8);
    KiReleaseThreadLockSafe(v13);
    ++*(_BYTE *)(v8 + 17);
    if ( v11 )
      return 1;
    if ( v4 == v5 )
      return 0;
  }
}
