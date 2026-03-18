/*
 * XREFs of PopGetEnergyCounter @ 0x140811A68
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x14039A210 (PopCaptureSleepStudyStatistics.c)
 *     PopMeasureEnergyChange @ 0x14081BA34 (PopMeasureEnergyChange.c)
 *     PopSleepstudyCaptureResiliencyStatistics @ 0x140997C84 (PopSleepstudyCaptureResiliencyStatistics.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402935D0 (PopReleaseRwLock.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 */

void __fastcall PopGetEnergyCounter(_OWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&xmmword_140C22B70, 0LL);
  *a1 = xmmword_140C22BA0;
  PopReleaseRwLock((ULONG_PTR)&xmmword_140C22B70);
}
