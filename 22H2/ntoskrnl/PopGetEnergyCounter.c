/*
 * XREFs of PopGetEnergyCounter @ 0x1408EDCC0
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x140570498 (PopCaptureSleepStudyStatistics.c)
 *     PopMeasureEnergyChange @ 0x1408EDD0C (PopMeasureEnergyChange.c)
 *     PopSleepstudyCaptureResiliencyStatistics @ 0x1408FA0C4 (PopSleepstudyCaptureResiliencyStatistics.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1402CB240 (ExAcquirePushLockSharedEx.c)
 *     PopReleaseRwLock @ 0x140345294 (PopReleaseRwLock.c)
 */

void __fastcall PopGetEnergyCounter(_OWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&xmmword_140C23DF0, 0LL);
  *a1 = xmmword_140C23E20;
  PopReleaseRwLock((ULONG_PTR)&xmmword_140C23DF0);
}
