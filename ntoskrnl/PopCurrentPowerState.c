/*
 * XREFs of PopCurrentPowerState @ 0x14078F3D0
 * Callers:
 *     PopUpdateAcDcState @ 0x1403BE428 (PopUpdateAcDcState.c)
 *     PopEsUpdateState @ 0x1403C0334 (PopEsUpdateState.c)
 *     PopCalculateCsSummary @ 0x14058EE94 (PopCalculateCsSummary.c)
 *     NtPowerInformation @ 0x14068AB90 (NtPowerInformation.c)
 *     PopTransitionTelemetryOsState @ 0x140855C64 (PopTransitionTelemetryOsState.c)
 *     PopEsStartTelemetry @ 0x14085F8B4 (PopEsStartTelemetry.c)
 *     PopBootBatteryStatusWorker @ 0x1408604E0 (PopBootBatteryStatusWorker.c)
 *     PopCurrentPowerStatePrecise @ 0x140870DD8 (PopCurrentPowerStatePrecise.c)
 *     PopEsEnterSleepShutdown @ 0x1409952F8 (PopEsEnterSleepShutdown.c)
 *     PopGracefulShutdown @ 0x140A9D970 (PopGracefulShutdown.c)
 *     PopTransitionSystemPowerStateEx @ 0x140AA5F80 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140236C40 (PopReleaseRwLock.c)
 *     ExAcquirePushLockSharedEx @ 0x1402626A0 (ExAcquirePushLockSharedEx.c)
 */

void __fastcall PopCurrentPowerState(_OWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&xmmword_140C3CD18, 0LL);
  *a1 = xmmword_140C3CD28;
  a1[1] = xmmword_140C3CD38;
  PopReleaseRwLock((ULONG_PTR)&xmmword_140C3CD18);
}
