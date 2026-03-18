/*
 * XREFs of PopIsDetailedSleepReliabilityDiagEnabled @ 0x140996FE0
 * Callers:
 *     PopUpdatePowerActionWatchdogTimeouts @ 0x14098AB78 (PopUpdatePowerActionWatchdogTimeouts.c)
 *     PopEnableSystemSleepCheckpoint @ 0x140996E9C (PopEnableSystemSleepCheckpoint.c)
 *     PopTransitionSystemPowerStateEx @ 0x140AA91B0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140230D90 (ExAcquirePushLockSharedEx.c)
 *     PopReleaseRwLock @ 0x14032C2A0 (PopReleaseRwLock.c)
 */

char PopIsDetailedSleepReliabilityDiagEnabled()
{
  struct _KTHREAD *CurrentThread; // rax
  char v1; // bl

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&PopSleepReliabilityDiagLock, 0LL);
  v1 = PopSleepReliabilityDetailedDiagEnabled;
  PopReleaseRwLock((__int64 *)&PopSleepReliabilityDiagLock);
  return v1;
}
