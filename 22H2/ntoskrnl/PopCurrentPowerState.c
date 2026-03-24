/*
 * XREFs of PopCurrentPowerState @ 0x1406F1B8C
 * Callers:
 *     PopUpdateAcDcState @ 0x1403992CC (PopUpdateAcDcState.c)
 *     PopEsUpdateState @ 0x14039A208 (PopEsUpdateState.c)
 *     PopCalculateCsSummary @ 0x14056FDE0 (PopCalculateCsSummary.c)
 *     NtPowerInformation @ 0x1406F05C0 (NtPowerInformation.c)
 *     PopDiagTraceControlCallback @ 0x1406F7FA0 (PopDiagTraceControlCallback.c)
 *     PopEsEnterSleepShutdown @ 0x1407790DC (PopEsEnterSleepShutdown.c)
 *     PopCurrentPowerStatePrecise @ 0x14078E344 (PopCurrentPowerStatePrecise.c)
 *     PopEsStartTelemetry @ 0x14078E674 (PopEsStartTelemetry.c)
 *     PopTransitionTelemetryOsState @ 0x1407938D4 (PopTransitionTelemetryOsState.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1402CB240 (ExAcquirePushLockSharedEx.c)
 *     PopReleaseRwLock @ 0x140345294 (PopReleaseRwLock.c)
 */

void __fastcall PopCurrentPowerState(_OWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&xmmword_140C23DF0, 0LL);
  *a1 = xmmword_140C23E00;
  a1[1] = xmmword_140C23E10;
  PopReleaseRwLock((ULONG_PTR)&xmmword_140C23DF0);
}
