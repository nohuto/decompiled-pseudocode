/*
 * XREFs of ViKeIrqlLogAndTrimMemory @ 0x140A96894
 * Callers:
 *     VerifierKeAcquireInStackQueuedSpinLock @ 0x140A7F1D0 (VerifierKeAcquireInStackQueuedSpinLock.c)
 *     VerifierKeAcquireSpinLockRaiseToDpc @ 0x140A7F280 (VerifierKeAcquireSpinLockRaiseToDpc.c)
 *     VerifierKeAcquireQueuedSpinLock @ 0x140A8ECA0 (VerifierKeAcquireQueuedSpinLock.c)
 *     VerifierKeAcquireInStackQueuedSpinLockRaiseToSynch @ 0x140A95C00 (VerifierKeAcquireInStackQueuedSpinLockRaiseToSynch.c)
 *     VerifierKeAcquireQueuedSpinLockRaiseToSynch @ 0x140A95CB0 (VerifierKeAcquireQueuedSpinLockRaiseToSynch.c)
 *     VerifierKeRaiseIrqlToDpcLevel @ 0x140A95F50 (VerifierKeRaiseIrqlToDpcLevel.c)
 *     VerifierKeSynchronizeExecution @ 0x140A96220 (VerifierKeSynchronizeExecution.c)
 *     VerifierKeTryToAcquireQueuedSpinLock @ 0x140A962A0 (VerifierKeTryToAcquireQueuedSpinLock.c)
 *     VerifierKeTryToAcquireQueuedSpinLockRaiseToSynch @ 0x140A96330 (VerifierKeTryToAcquireQueuedSpinLockRaiseToSynch.c)
 *     VerifierKfRaiseIrql @ 0x140A96540 (VerifierKfRaiseIrql.c)
 *     VerifierPortKeAcquireSpinLock @ 0x140A965D0 (VerifierPortKeAcquireSpinLock.c)
 *     VerifierPortKeAcquireSpinLockNoXdv @ 0x140A96660 (VerifierPortKeAcquireSpinLockNoXdv.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x1402ABBD0 (KeAreInterruptsEnabled.c)
 *     VfKeIrqlTransitionReserveLogEntry @ 0x140A7F710 (VfKeIrqlTransitionReserveLogEntry.c)
 *     ViKeIrqlLogCommon @ 0x140A7F7DA (ViKeIrqlLogCommon.c)
 *     MmVerifierTrimMemory @ 0x140A81364 (MmVerifierTrimMemory.c)
 */

char *__fastcall ViKeIrqlLogAndTrimMemory(char a1)
{
  char CurrentIrql; // si
  char *v4; // rdi

  if ( (MmVerifierData & 2) == 0 )
    return 0LL;
  CurrentIrql = KeGetCurrentIrql();
  v4 = VfKeIrqlTransitionReserveLogEntry(CurrentIrql, a1);
  ViKeIrqlLogCommon((__int64)v4, 2u);
  if ( KeAreInterruptsEnabled() && (unsigned __int8)CurrentIrql < 2u && (unsigned __int8)a1 >= 2u )
    MmVerifierTrimMemory();
  return v4;
}
