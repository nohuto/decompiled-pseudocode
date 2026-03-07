char WdipSemInitialize()
{
  struct _KTHREAD *CurrentThread; // rax

  WdipSemInitializeGlobalState();
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&WdipSemPushLock, 0LL);
  WdipSemCleanStart();
  ExReleasePushLockEx((__int64 *)&WdipSemPushLock, 0LL);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
