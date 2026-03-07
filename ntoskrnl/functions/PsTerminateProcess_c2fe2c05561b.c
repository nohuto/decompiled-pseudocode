__int64 __fastcall PsTerminateProcess(struct _KPROCESS *a1, unsigned int a2)
{
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int v3; // ebx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = PspTerminateProcess(a1, (__int64)CurrentThread, a2, 1u);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return v3;
}
