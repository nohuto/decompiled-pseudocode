/*
 * XREFs of KiAcquireKobjectLockSafe @ 0x140251F10
 * Callers:
 *     KiThawSingleThread @ 0x140205004 (KiThawSingleThread.c)
 *     KeSetProcess @ 0x1402085E4 (KeSetProcess.c)
 *     KePulseEvent @ 0x1402206C0 (KePulseEvent.c)
 *     KiDecrementProcessStackCount @ 0x140222D14 (KiDecrementProcessStackCount.c)
 *     KiDetachProcess @ 0x14022DD20 (KiDetachProcess.c)
 *     KeSetEvent @ 0x14023C5C0 (KeSetEvent.c)
 *     KiExitDispatcher @ 0x14023CD50 (KiExitDispatcher.c)
 *     ExpReleaseResourceSharedForThreadLite @ 0x14023D860 (ExpReleaseResourceSharedForThreadLite.c)
 *     KiCommitThreadWait @ 0x140241F00 (KiCommitThreadWait.c)
 *     KiAcquireTimer2LockUnlessDisabled @ 0x1402500D8 (KiAcquireTimer2LockUnlessDisabled.c)
 *     KeRegisterObjectNotification @ 0x140250890 (KeRegisterObjectNotification.c)
 *     KiTimer2Expiration @ 0x1402514C0 (KiTimer2Expiration.c)
 *     KiExpireTimer2 @ 0x140251960 (KiExpireTimer2.c)
 *     KiTimerWaitTest @ 0x140252DD0 (KiTimerWaitTest.c)
 *     KiProcessThreadWaitList @ 0x140253CA0 (KiProcessThreadWaitList.c)
 *     CcUnpinFileDataEx @ 0x14025D6F0 (CcUnpinFileDataEx.c)
 *     KeWakeWaitChain @ 0x140260820 (KeWakeWaitChain.c)
 *     ExpCommitWakeResourceShared @ 0x140260B10 (ExpCommitWakeResourceShared.c)
 *     KeRundownQueueEx @ 0x14028C6E4 (KeRundownQueueEx.c)
 *     KeRundownQueueCommon @ 0x14028C814 (KeRundownQueueCommon.c)
 *     KeDeleteMutant @ 0x14028CA88 (KeDeleteMutant.c)
 *     KeRemoveQueueEx @ 0x1402A9F20 (KeRemoveQueueEx.c)
 *     KiDirectSwitchThread @ 0x1402B1870 (KiDirectSwitchThread.c)
 *     AlpcpSignal @ 0x1402B6C40 (AlpcpSignal.c)
 *     KeReleaseSemaphoreEx @ 0x1402B7170 (KeReleaseSemaphoreEx.c)
 *     NtReleaseWorkerFactoryWorker @ 0x1402B8950 (NtReleaseWorkerFactoryWorker.c)
 *     IoSetIoCompletionEx2 @ 0x1402B91C0 (IoSetIoCompletionEx2.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x1402BAD10 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     KeSetEventBoostPriorityEx @ 0x1402BBFA0 (KeSetEventBoostPriorityEx.c)
 *     KeStartThread @ 0x1402BE0A8 (KeStartThread.c)
 *     KeSuspendThread @ 0x140309CE8 (KeSuspendThread.c)
 *     KiSuspendThread @ 0x140309DEC (KiSuspendThread.c)
 *     KeResumeThread @ 0x14030A0FC (KeResumeThread.c)
 *     KeTerminateThread @ 0x14030A438 (KeTerminateThread.c)
 *     KeForceResumeThread @ 0x14030AAAC (KeForceResumeThread.c)
 *     KiResumeThread @ 0x14030ABC8 (KiResumeThread.c)
 *     KiRundownMutants @ 0x14030AF6C (KiRundownMutants.c)
 *     KiActivateWaiterQueueWithNoLocks @ 0x14030B318 (KiActivateWaiterQueueWithNoLocks.c)
 *     KeWaitForMultipleObjects @ 0x140310FC0 (KeWaitForMultipleObjects.c)
 *     KeInsertQueueEx @ 0x14031A8D0 (KeInsertQueueEx.c)
 *     KiInsertQueueInternal @ 0x14031AB60 (KiInsertQueueInternal.c)
 *     KeInsertQueue @ 0x14031CB50 (KeInsertQueue.c)
 *     KeReleaseSemaphore @ 0x140321250 (KeReleaseSemaphore.c)
 *     KiDeregisterObjectWaitBlock @ 0x14033C230 (KiDeregisterObjectWaitBlock.c)
 *     KeRemoveQueueEntry @ 0x140349460 (KeRemoveQueueEntry.c)
 *     KeWaitForGate @ 0x14034A780 (KeWaitForGate.c)
 *     KiWaitForAllObjects @ 0x14034A8FC (KiWaitForAllObjects.c)
 *     KiOutSwapProcesses @ 0x14034C780 (KiOutSwapProcesses.c)
 *     KiInSwapProcesses @ 0x14034CA8C (KiInSwapProcesses.c)
 *     KiInswapAndReadyThread @ 0x14034D43C (KiInswapAndReadyThread.c)
 *     KiInSwapSingleProcess @ 0x14034D5B4 (KiInSwapSingleProcess.c)
 *     KeTimeOutQueueWaiters @ 0x14034E54C (KeTimeOutQueueWaiters.c)
 *     KiSwitchQueue @ 0x140355FDC (KiSwitchQueue.c)
 *     KeSignalGate @ 0x14035CCEC (KeSignalGate.c)
 *     KiSwitchPriQueue @ 0x140367198 (KiSwitchPriQueue.c)
 *     KiFreezeSingleThread @ 0x14036F30C (KiFreezeSingleThread.c)
 *     KeReleaseMutantEx @ 0x14040FD6C (KeReleaseMutantEx.c)
 *     KeRegisterObjectDpc @ 0x140568188 (KeRegisterObjectDpc.c)
 *     KeRetryOutswapProcess @ 0x14056F660 (KeRetryOutswapProcess.c)
 *     KeQueryTimerDueTime @ 0x140570E20 (KeQueryTimerDueTime.c)
 *     KeQueryOwnerMutant @ 0x1405737EC (KeQueryOwnerMutant.c)
 *     KeInsertHeadQueue @ 0x140573910 (KeInsertHeadQueue.c)
 *     KiAdjustThreadTimer @ 0x140576E68 (KiAdjustThreadTimer.c)
 *     KiSatisfyThreadWait @ 0x14057A33C (KiSatisfyThreadWait.c)
 *     KeRundownPriQueue @ 0x14057EAE0 (KeRundownPriQueue.c)
 *     PspSetProcessTimerDelayForKTimers @ 0x1405A4840 (PspSetProcessTimerDelayForKTimers.c)
 *     ExpCheckForWorker @ 0x14060CC78 (ExpCheckForWorker.c)
 * Callees:
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1403CCC60 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     HvlNotifyLongSpinWait @ 0x1403CCC90 (HvlNotifyLongSpinWait.c)
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
