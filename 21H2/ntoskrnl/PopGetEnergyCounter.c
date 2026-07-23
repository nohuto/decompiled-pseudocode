/*
 * XREFs of PopGetEnergyCounter @ 0x1408EDDD0
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x140570798 (PopCaptureSleepStudyStatistics.c)
 *     PopMeasureEnergyChange @ 0x1408EDE1C (PopMeasureEnergyChange.c)
 *     PopSleepstudyCaptureResiliencyStatistics @ 0x1408FA1D4 (PopSleepstudyCaptureResiliencyStatistics.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14026A224 (PopReleaseRwLock.c)
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 */

void __fastcall PopGetEnergyCounter(_OWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&xmmword_140C23E10, 0LL);
  *a1 = xmmword_140C23E40;
  PopReleaseRwLock((ULONG_PTR)&xmmword_140C23E10);
}
