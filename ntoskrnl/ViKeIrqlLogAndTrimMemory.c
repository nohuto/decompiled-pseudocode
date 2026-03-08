/*
 * XREFs of ViKeIrqlLogAndTrimMemory @ 0x140AD2DA8
 * Callers:
 *     VerifierKeAcquireSpinLockRaiseToDpc @ 0x140ABD280 (VerifierKeAcquireSpinLockRaiseToDpc.c)
 *     VerifierKeAcquireQueuedSpinLock @ 0x140ACC5D0 (VerifierKeAcquireQueuedSpinLock.c)
 *     VerifierKeAcquireInStackQueuedSpinLockCommon @ 0x140AD21E0 (VerifierKeAcquireInStackQueuedSpinLockCommon.c)
 *     VerifierKeAcquireInStackQueuedSpinLockRaiseToSynch @ 0x140AD22E0 (VerifierKeAcquireInStackQueuedSpinLockRaiseToSynch.c)
 *     VerifierKeAcquireQueuedSpinLockRaiseToSynch @ 0x140AD2380 (VerifierKeAcquireQueuedSpinLockRaiseToSynch.c)
 *     VerifierKeSynchronizeExecution @ 0x140AD2720 (VerifierKeSynchronizeExecution.c)
 *     VerifierKeTryToAcquireQueuedSpinLock @ 0x140AD27A0 (VerifierKeTryToAcquireQueuedSpinLock.c)
 *     VerifierKeTryToAcquireQueuedSpinLockRaiseToSynch @ 0x140AD2840 (VerifierKeTryToAcquireQueuedSpinLockRaiseToSynch.c)
 *     VerifierPortKeAcquireSpinLockNoXdv @ 0x140AD2A00 (VerifierPortKeAcquireSpinLockNoXdv.c)
 *     ViKeAcquireSpinLockCommon @ 0x140AD2CEC (ViKeAcquireSpinLockCommon.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x140312C60 (KeAreInterruptsEnabled.c)
 *     VfKeIrqlLogRaise @ 0x140AD2CB0 (VfKeIrqlLogRaise.c)
 *     MmVerifierTrimMemory @ 0x140AE50D0 (MmVerifierTrimMemory.c)
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
