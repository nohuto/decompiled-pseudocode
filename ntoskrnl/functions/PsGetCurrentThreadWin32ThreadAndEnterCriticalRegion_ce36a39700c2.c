PVOID __fastcall PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(volatile unsigned __int64 *a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  *a1 = CurrentThread[1].CycleTime;
  --CurrentThread->KernelApcDisable;
  return CurrentThread->WaitBlock[2].SparePtr;
}
