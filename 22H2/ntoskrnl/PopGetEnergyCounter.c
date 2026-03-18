/*
 * XREFs of PopGetEnergyCounter @ 0x140875C9C
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x1403C78A0 (PopCaptureSleepStudyStatistics.c)
 *     PopMeasureEnergyChange @ 0x140802EEC (PopMeasureEnergyChange.c)
 *     PopSleepstudyCaptureResiliencyStatistics @ 0x140993304 (PopSleepstudyCaptureResiliencyStatistics.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140230D90 (ExAcquirePushLockSharedEx.c)
 *     PopReleaseRwLock @ 0x14032C2A0 (PopReleaseRwLock.c)
 */

void __fastcall PopGetEnergyCounter(_OWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&xmmword_140C3D2B8, 0LL);
  *a1 = xmmword_140C3D2E8;
  PopReleaseRwLock((__int64 *)&xmmword_140C3D2B8);
}
