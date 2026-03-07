void __stdcall ObMakeTemporaryObject(PVOID Object)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v2; // rdi

  CurrentThread = KeGetCurrentThread();
  v2 = (__int64 *)((char *)Object - 48);
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)Object - 32, 0LL);
  *((_BYTE *)v2 + 27) &= ~0x10u;
  ExReleasePushLockEx(v2 + 2, 0LL);
  KeLeaveCriticalRegion();
  ObpDeleteNameCheck(v2);
}
