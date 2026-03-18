/*
 * XREFs of ViKeIrqlLogAndTrimMemory @ 0x140AD6DA8
 * Callers:
 *     VerifierKeAcquireSpinLockRaiseToDpc @ 0x140AC1280 (VerifierKeAcquireSpinLockRaiseToDpc.c)
 *     VerifierKeAcquireQueuedSpinLock @ 0x140AD05D0 (VerifierKeAcquireQueuedSpinLock.c)
 *     VerifierKeAcquireInStackQueuedSpinLockCommon @ 0x140AD61E0 (VerifierKeAcquireInStackQueuedSpinLockCommon.c)
 *     VerifierKeAcquireInStackQueuedSpinLockRaiseToSynch @ 0x140AD62E0 (VerifierKeAcquireInStackQueuedSpinLockRaiseToSynch.c)
 *     VerifierKeAcquireQueuedSpinLockRaiseToSynch @ 0x140AD6380 (VerifierKeAcquireQueuedSpinLockRaiseToSynch.c)
 *     VerifierKeSynchronizeExecution @ 0x140AD6720 (VerifierKeSynchronizeExecution.c)
 *     VerifierKeTryToAcquireQueuedSpinLock @ 0x140AD67A0 (VerifierKeTryToAcquireQueuedSpinLock.c)
 *     VerifierKeTryToAcquireQueuedSpinLockRaiseToSynch @ 0x140AD6840 (VerifierKeTryToAcquireQueuedSpinLockRaiseToSynch.c)
 *     VerifierPortKeAcquireSpinLockNoXdv @ 0x140AD6A00 (VerifierPortKeAcquireSpinLockNoXdv.c)
 *     ViKeAcquireSpinLockCommon @ 0x140AD6CEC (ViKeAcquireSpinLockCommon.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x14022EBF0 (KeAreInterruptsEnabled.c)
 *     VfKeIrqlLogRaise @ 0x140AD6CB0 (VfKeIrqlLogRaise.c)
 *     MmVerifierTrimMemory @ 0x140AE90D0 (MmVerifierTrimMemory.c)
 */

char *__fastcall ViKeIrqlLogAndTrimMemory(char a1)
{
  char CurrentIrql; // di
  char *v4; // rsi

  if ( !ViIrqlTrimAndLog )
    return 0LL;
  CurrentIrql = KeGetCurrentIrql();
  v4 = VfKeIrqlLogRaise(CurrentIrql, a1);
  if ( KeAreInterruptsEnabled() && (unsigned __int8)CurrentIrql < 2u && (unsigned __int8)a1 >= 2u )
  {
    if ( ViIrqlTrimAndLog )
      MmVerifierTrimMemory();
  }
  return v4;
}
