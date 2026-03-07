void __fastcall PopGetEnergyCounter(_OWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&xmmword_140C3CD18, 0LL);
  *a1 = xmmword_140C3CD48;
  PopReleaseRwLock((ULONG_PTR)&xmmword_140C3CD18);
}
