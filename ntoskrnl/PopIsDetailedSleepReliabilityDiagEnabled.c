/*
 * XREFs of PopIsDetailedSleepReliabilityDiagEnabled @ 0x140993F30
 * Callers:
 *     PopUpdatePowerActionWatchdogTimeouts @ 0x140987AC8 (PopUpdatePowerActionWatchdogTimeouts.c)
 *     PopEnableSystemSleepCheckpoint @ 0x140993DEC (PopEnableSystemSleepCheckpoint.c)
 *     PopTransitionSystemPowerStateEx @ 0x140AA5F80 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140236C40 (PopReleaseRwLock.c)
 *     ExAcquirePushLockSharedEx @ 0x1402626A0 (ExAcquirePushLockSharedEx.c)
 */

char PopIsDetailedSleepReliabilityDiagEnabled()
{
  struct _KTHREAD *CurrentThread; // rax
  char v1; // bl

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&PopSleepReliabilityDiagLock, 0LL);
  v1 = PopSleepReliabilityDetailedDiagEnabled;
  PopReleaseRwLock((ULONG_PTR)&PopSleepReliabilityDiagLock);
  return v1;
}
