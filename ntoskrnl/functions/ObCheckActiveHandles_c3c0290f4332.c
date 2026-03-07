bool __fastcall ObCheckActiveHandles(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v2; // rdi
  __int64 v4; // rbx

  CurrentThread = KeGetCurrentThread();
  v2 = (__int64 *)(a1 - 32);
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(a1 - 32, 0LL);
  v4 = *(_QWORD *)(a1 - 40);
  ExReleasePushLockEx(v2, 0LL);
  KeLeaveCriticalRegion();
  return v4 != 0;
}
