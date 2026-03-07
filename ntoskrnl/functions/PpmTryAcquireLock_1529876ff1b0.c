char PpmTryAcquireLock()
{
  struct _KTHREAD *CurrentThread; // rax
  char v1; // bl
  NTSTATUS v2; // eax
  struct _KTHREAD *v3; // rcx
  LARGE_INTEGER Timeout; // [rsp+48h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  v1 = 0;
  --CurrentThread->KernelApcDisable;
  Timeout.QuadPart = 0LL;
  KiSetSystemPriorityThread((ULONG_PTR)KeGetCurrentThread());
  v2 = KeWaitForSingleObject(&word_140C3D2E8, Executive, 0, 0, &Timeout);
  v3 = KeGetCurrentThread();
  if ( v2 )
  {
    KiClearSystemPriority((ULONG_PTR)v3);
    KeLeaveCriticalRegion();
  }
  else
  {
    v1 = 1;
    PpmPerfPolicyLock = (__int64)v3;
  }
  return v1;
}
