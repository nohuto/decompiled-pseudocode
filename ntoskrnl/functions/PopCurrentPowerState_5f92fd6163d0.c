void __fastcall PopCurrentPowerState(_OWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&xmmword_140C3CD18, 0LL);
  *a1 = xmmword_140C3CD28;
  a1[1] = xmmword_140C3CD38;
  PopReleaseRwLock((ULONG_PTR)&xmmword_140C3CD18);
}
