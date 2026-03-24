/*
 * XREFs of KiAcquireKobjectLockSafe @ 0x14024BE10
 * Callers:
 *     KeDeregisterObjectNotification @ 0x140202E20 (KeDeregisterObjectNotification.c)
 *     KeRegisterObjectNotification @ 0x140202ED8 (KeRegisterObjectNotification.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x140203110 (NtWaitForWorkViaWorkerFactory.c)
 *     KeRemoveQueueEx @ 0x140204790 (KeRemoveQueueEx.c)
 *     KiDetachProcess @ 0x1402075C0 (KiDetachProcess.c)
 *     KiDecrementProcessStackCount @ 0x140207A40 (KiDecrementProcessStackCount.c)
 *     KeInsertPriQueue @ 0x14023B8E0 (KeInsertPriQueue.c)
 *     NtReleaseWorkerFactoryWorker @ 0x1402424E0 (NtReleaseWorkerFactoryWorker.c)
 *     IoSetIoCompletionEx2 @ 0x140245BA0 (IoSetIoCompletionEx2.c)
 *     KiProcessExpiredTimerList @ 0x140247410 (KiProcessExpiredTimerList.c)
 *     KiTimerWaitTest @ 0x140247760 (KiTimerWaitTest.c)
 *     KiReadyThread @ 0x140247FB0 (KiReadyThread.c)
 *     KiTimer2Expiration @ 0x140248150 (KiTimer2Expiration.c)
 *     KiOutSwapProcesses @ 0x140249C20 (KiOutSwapProcesses.c)
 *     KiInSwapProcesses @ 0x140249EA8 (KiInSwapProcesses.c)
 *     KiProcessThreadWaitList @ 0x14024AC40 (KiProcessThreadWaitList.c)
 *     KiExpireTimer2 @ 0x14024AF30 (KiExpireTimer2.c)
 *     KeWaitForMultipleObjects @ 0x14024B500 (KeWaitForMultipleObjects.c)
 *     KiDirectSwitchThread @ 0x14024C1B0 (KiDirectSwitchThread.c)
 *     KeSetProcess @ 0x14025157C (KeSetProcess.c)
 *     KeReleaseSemaphoreEx @ 0x140262770 (KeReleaseSemaphoreEx.c)
 *     KeSetEventBoostPriorityEx @ 0x140271E08 (KeSetEventBoostPriorityEx.c)
 *     CcUnpinFileDataEx @ 0x140274CB0 (CcUnpinFileDataEx.c)
 *     KeReleaseMutant @ 0x1402C2B40 (KeReleaseMutant.c)
 *     KeSetEvent @ 0x1402C3C30 (KeSetEvent.c)
 *     KiExitDispatcher @ 0x1402C4150 (KiExitDispatcher.c)
 *     KiCommitThreadWait @ 0x1402C6640 (KiCommitThreadWait.c)
 *     ExpReleaseResourceSharedForThreadLite @ 0x1402CBCD0 (ExpReleaseResourceSharedForThreadLite.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x1402CD8D0 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     KeTimeOutQueueWaiters @ 0x1402DCFBC (KeTimeOutQueueWaiters.c)
 *     IoSetIoCompletionEx @ 0x1402E6D30 (IoSetIoCompletionEx.c)
 *     KeInsertQueueEx @ 0x1402E6F10 (KeInsertQueueEx.c)
 *     KeWaitForGate @ 0x1402ED0C4 (KeWaitForGate.c)
 *     KiWaitForAllObjects @ 0x1402ED1E0 (KiWaitForAllObjects.c)
 *     NtAssociateWaitCompletionPacket @ 0x1402ED670 (NtAssociateWaitCompletionPacket.c)
 *     KeReleaseSemaphore @ 0x1402F19A0 (KeReleaseSemaphore.c)
 *     KiSwitchQueue @ 0x1402F7798 (KiSwitchQueue.c)
 *     KiActivateWaiterQueueWithNoLocks @ 0x1402F781C (KiActivateWaiterQueueWithNoLocks.c)
 *     KeRundownQueueEx @ 0x140302618 (KeRundownQueueEx.c)
 *     KeRundownQueueCommon @ 0x1403026FC (KeRundownQueueCommon.c)
 *     KeDeleteMutant @ 0x140302978 (KeDeleteMutant.c)
 *     KeWakeWaitChain @ 0x1403121AC (KeWakeWaitChain.c)
 *     KiThawSingleThread @ 0x140315220 (KiThawSingleThread.c)
 *     KiFreezeSingleThread @ 0x14031539C (KiFreezeSingleThread.c)
 *     KiInsertQueueInternal @ 0x140316088 (KiInsertQueueInternal.c)
 *     KeSignalGate @ 0x14031BEE0 (KeSignalGate.c)
 *     KeRemoveQueueEntry @ 0x14031D180 (KeRemoveQueueEntry.c)
 *     KeInsertQueue @ 0x140326130 (KeInsertQueue.c)
 *     KiSwitchPriQueue @ 0x140328378 (KiSwitchPriQueue.c)
 *     KePulseEvent @ 0x14033AAD0 (KePulseEvent.c)
 *     KiRundownMutants @ 0x140340660 (KiRundownMutants.c)
 *     KeStartThread @ 0x140340A7C (KeStartThread.c)
 *     KeTerminateThread @ 0x140341500 (KeTerminateThread.c)
 *     KeForceResumeThread @ 0x14034281C (KeForceResumeThread.c)
 *     KiResumeThread @ 0x1403428E0 (KiResumeThread.c)
 *     KeResumeThread @ 0x140343158 (KeResumeThread.c)
 *     KeSuspendThread @ 0x140343270 (KeSuspendThread.c)
 *     KiSuspendThread @ 0x140343334 (KiSuspendThread.c)
 *     KiAcquireTimer2LockUnlessDisabled @ 0x140348EF0 (KiAcquireTimer2LockUnlessDisabled.c)
 *     KeRetryOutswapProcess @ 0x140513808 (KeRetryOutswapProcess.c)
 *     KeQueryTimerDueTime @ 0x140515D48 (KeQueryTimerDueTime.c)
 *     KeQueryOwnerMutant @ 0x14051ADA0 (KeQueryOwnerMutant.c)
 *     KeInsertHeadQueue @ 0x14051AEC0 (KeInsertHeadQueue.c)
 *     KiAdjustThreadTimer @ 0x14051EF14 (KiAdjustThreadTimer.c)
 *     KiSatisfyThreadWait @ 0x140522A34 (KiSatisfyThreadWait.c)
 *     KeRundownPriQueue @ 0x1405243AC (KeRundownPriQueue.c)
 *     PspSetProcessTimerDelayForKTimers @ 0x1405823A8 (PspSetProcessTimerDelayForKTimers.c)
 *     ExpCheckForWorker @ 0x1405B6F04 (ExpCheckForWorker.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x14038FA40 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140390820 (KiCheckVpBackingLongSpinWaitHypercall.c)
 */

void __fastcall KiAcquireKobjectLockSafe(volatile signed __int32 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // edi

  v4 = 0;
  if ( _interlockedbittestandset(a1, 7u) )
  {
    do
    {
      if ( (++v4 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(a1, a2, a3, a4) )
      {
        HvlNotifyLongSpinWait(v4);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( (*a1 & 0x80u) != 0 || _interlockedbittestandset(a1, 7u) );
  }
}
