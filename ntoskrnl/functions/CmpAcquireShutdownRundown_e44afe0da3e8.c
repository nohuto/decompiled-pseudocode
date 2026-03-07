BOOLEAN CmpAcquireShutdownRundown()
{
  struct _KTHREAD *CurrentThread; // rax
  BOOLEAN result; // al

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  result = ExAcquireRundownProtection_0(&CmpShutdownRundown);
  if ( !result )
  {
    KeLeaveCriticalRegion();
    return 0;
  }
  return result;
}
