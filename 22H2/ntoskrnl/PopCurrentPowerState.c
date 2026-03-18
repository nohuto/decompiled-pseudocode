/*
 * XREFs of PopCurrentPowerState @ 0x1407A7258
 * Callers:
 *     PopUpdateAcDcState @ 0x1403C3CE8 (PopUpdateAcDcState.c)
 *     PopEsUpdateState @ 0x1403C5BF4 (PopEsUpdateState.c)
 *     PopCalculateCsSummary @ 0x1405913C4 (PopCalculateCsSummary.c)
 *     NtPowerInformation @ 0x140784430 (NtPowerInformation.c)
 *     PopTransitionTelemetryOsState @ 0x1408037CC (PopTransitionTelemetryOsState.c)
 *     PopEsStartTelemetry @ 0x140863BD4 (PopEsStartTelemetry.c)
 *     PopBootBatteryStatusWorker @ 0x140864B20 (PopBootBatteryStatusWorker.c)
 *     PopCurrentPowerStatePrecise @ 0x140873C98 (PopCurrentPowerStatePrecise.c)
 *     PopEsEnterSleepShutdown @ 0x1409983A8 (PopEsEnterSleepShutdown.c)
 *     PopGracefulShutdown @ 0x140AA0B20 (PopGracefulShutdown.c)
 *     PopTransitionSystemPowerStateEx @ 0x140AA91B0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140230D90 (ExAcquirePushLockSharedEx.c)
 *     PopReleaseRwLock @ 0x14032C2A0 (PopReleaseRwLock.c)
 */

void __fastcall PopCurrentPowerState(_OWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&xmmword_140C3D2B8, 0LL);
  *a1 = xmmword_140C3D2C8;
  a1[1] = xmmword_140C3D2D8;
  PopReleaseRwLock((__int64 *)&xmmword_140C3D2B8);
}
