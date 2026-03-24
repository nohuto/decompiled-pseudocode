/*
 * XREFs of NormalizationList__Lock @ 0x1405942B8
 * Callers:
 *     RtlpGetNormalization @ 0x14091B870 (RtlpGetNormalization.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402CB080 (ExAcquirePushLockExclusiveEx.c)
 */

void NormalizationList__Lock()
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&NormalizationListLock, 0LL);
}
