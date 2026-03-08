/*
 * XREFs of KiAcquireKobjectLockSafe @ 0x140293E00
 * Callers:
 *     KeStartThread @ 0x1402385C4 (KeStartThread.c)
 *     KeSetEventBoostPriorityEx @ 0x1402396C0 (KeSetEventBoostPriorityEx.c)
 *     KiAcquireTimer2LockUnlessDisabled @ 0x14024EAC8 (KiAcquireTimer2LockUnlessDisabled.c)
 *     KeRegisterObjectNotification @ 0x14024F260 (KeRegisterObjectNotification.c)
 *     KiExpireTimer2 @ 0x14024FED0 (KiExpireTimer2.c)
 *     KiProcessThreadWaitList @ 0x1402508F0 (KiProcessThreadWaitList.c)
 *     KiTimer2Expiration @ 0x140250C10 (KiTimer2Expiration.c)
 *     KiTimerWaitTest @ 0x140251B00 (KiTimerWaitTest.c)
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     KiExitDispatcher @ 0x14025CA50 (KiExitDispatcher.c)
 *     ExpReleaseResourceSharedForThreadLite @ 0x14025D990 (ExpReleaseResourceSharedForThreadLite.c)
 *     KiCommitThreadWait @ 0x140261290 (KiCommitThreadWait.c)
 *     IopfCompleteRequest @ 0x14027B2C0 (IopfCompleteRequest.c)
 *     KeReleaseSemaphore @ 0x140292210 (KeReleaseSemaphore.c)
 *     KeInsertQueueEx @ 0x140292940 (KeInsertQueueEx.c)
 *     KeRundownQueueEx @ 0x140292C14 (KeRundownQueueEx.c)
 *     KeRundownQueueCommon @ 0x140292D44 (KeRundownQueueCommon.c)
 *     KeDeleteMutant @ 0x140292FB8 (KeDeleteMutant.c)
 *     KeWaitForGate @ 0x1402931D8 (KeWaitForGate.c)
 *     KiWaitForAllObjects @ 0x1402936D0 (KiWaitForAllObjects.c)
 *     KiInsertQueueInternal @ 0x140293C9C (KiInsertQueueInternal.c)
 *     KeSetProcess @ 0x140293FE4 (KeSetProcess.c)
 *     KiDecrementProcessStackCount @ 0x1402A7824 (KiDecrementProcessStackCount.c)
 *     KiOutSwapProcesses @ 0x1402BFE74 (KiOutSwapProcesses.c)
 *     KiInSwapProcesses @ 0x1402C0180 (KiInSwapProcesses.c)
 *     KiInswapAndReadyThread @ 0x1402C06E8 (KiInswapAndReadyThread.c)
 *     KiInSwapSingleProcess @ 0x1402C0868 (KiInSwapSingleProcess.c)
 *     KiDeregisterObjectWaitBlock @ 0x1402D33F0 (KiDeregisterObjectWaitBlock.c)
 *     KeRemoveQueueEntry @ 0x1402DF000 (KeRemoveQueueEntry.c)
 *     KeTimeOutQueueWaiters @ 0x1402E1F60 (KeTimeOutQueueWaiters.c)
 *     KeSignalGate @ 0x1402F0524 (KeSignalGate.c)
 *     KeInsertQueue @ 0x1402F3300 (KeInsertQueue.c)
 *     KiSwitchPriQueue @ 0x1402FBDD4 (KiSwitchPriQueue.c)
 *     KiDetachProcess @ 0x14030E460 (KiDetachProcess.c)
 *     KeRemoveQueueEx @ 0x140315D50 (KeRemoveQueueEx.c)
 *     CcUnpinFileDataEx @ 0x140337E50 (CcUnpinFileDataEx.c)
 *     KeWakeWaitChain @ 0x14033AF30 (KeWakeWaitChain.c)
 *     ExpCommitWakeResourceShared @ 0x14033B220 (ExpCommitWakeResourceShared.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x14033B5E0 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     AlpcpSignal @ 0x14033E410 (AlpcpSignal.c)
 *     KeReleaseSemaphoreEx @ 0x14033E940 (KeReleaseSemaphoreEx.c)
 *     NtReleaseWorkerFactoryWorker @ 0x140340900 (NtReleaseWorkerFactoryWorker.c)
 *     IoSetIoCompletionEx2 @ 0x140341170 (IoSetIoCompletionEx2.c)
 *     KiDirectSwitchThread @ 0x1403414A0 (KiDirectSwitchThread.c)
 *     KeWaitForMultipleObjects @ 0x1403516C0 (KeWaitForMultipleObjects.c)
 *     KeTerminateThread @ 0x140353168 (KeTerminateThread.c)
 *     KeForceResumeThread @ 0x1403537DC (KeForceResumeThread.c)
 *     KiResumeThread @ 0x1403538F8 (KiResumeThread.c)
 *     KiRundownMutants @ 0x140353C9C (KiRundownMutants.c)
 *     KeResumeThread @ 0x140354130 (KeResumeThread.c)
 *     KeSuspendThread @ 0x140354244 (KeSuspendThread.c)
 *     KiSuspendThread @ 0x140354348 (KiSuspendThread.c)
 *     KiActivateWaiterQueueWithNoLocks @ 0x1403548F8 (KiActivateWaiterQueueWithNoLocks.c)
 *     KiSwitchQueue @ 0x1403555E0 (KiSwitchQueue.c)
 *     KiFreezeSingleThread @ 0x140355BB4 (KiFreezeSingleThread.c)
 *     KiThawSingleThread @ 0x140355DCC (KiThawSingleThread.c)
 *     KePulseEvent @ 0x14035F580 (KePulseEvent.c)
 *     KeReleaseMutantEx @ 0x14040A86C (KeReleaseMutantEx.c)
 *     KeRegisterObjectDpc @ 0x140565CE8 (KeRegisterObjectDpc.c)
 *     KeRetryOutswapProcess @ 0x14056CFF0 (KeRetryOutswapProcess.c)
 *     KeQueryTimerDueTime @ 0x14056E7B0 (KeQueryTimerDueTime.c)
 *     KeQueryOwnerMutant @ 0x14057116C (KeQueryOwnerMutant.c)
 *     KeInsertHeadQueue @ 0x140571290 (KeInsertHeadQueue.c)
 *     KiAdjustThreadTimer @ 0x1405749E4 (KiAdjustThreadTimer.c)
 *     KiSatisfyThreadWait @ 0x140577E2C (KiSatisfyThreadWait.c)
 *     KeRundownPriQueue @ 0x14057C5D0 (KeRundownPriQueue.c)
 *     PspSetProcessTimerDelayForKTimers @ 0x1405A2390 (PspSetProcessTimerDelayForKTimers.c)
 *     ExpCheckForWorker @ 0x14060A838 (ExpCheckForWorker.c)
 * Callees:
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1403C8140 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     HvlNotifyLongSpinWait @ 0x1403C8170 (HvlNotifyLongSpinWait.c)
 */

void __fastcall KiAcquireKobjectLockSafe(volatile signed __int32 *a1)
{
  unsigned int v1; // edi

  v1 = 0;
  if ( _interlockedbittestandset(a1, 7u) )
  {
    do
    {
      if ( (++v1 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(a1) )
      {
        HvlNotifyLongSpinWait(v1);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( (*a1 & 0x80u) != 0 || _interlockedbittestandset(a1, 7u) );
  }
}
