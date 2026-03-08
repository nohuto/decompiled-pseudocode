/*
 * XREFs of PopGetEnergyCounter @ 0x140872DDC
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x1403C24C4 (PopCaptureSleepStudyStatistics.c)
 *     PopMeasureEnergyChange @ 0x1408560F8 (PopMeasureEnergyChange.c)
 *     PopSleepstudyCaptureResiliencyStatistics @ 0x140990254 (PopSleepstudyCaptureResiliencyStatistics.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140236C40 (PopReleaseRwLock.c)
 *     ExAcquirePushLockSharedEx @ 0x1402626A0 (ExAcquirePushLockSharedEx.c)
 */

void __fastcall PopGetEnergyCounter(_OWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&xmmword_140C3CD18, 0LL);
  *a1 = xmmword_140C3CD48;
  PopReleaseRwLock((ULONG_PTR)&xmmword_140C3CD18);
}
