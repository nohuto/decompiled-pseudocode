void __fastcall CmpCoalescingCallback(int a1)
{
  int v1; // ecx
  int v2; // ecx
  struct _KTHREAD *CurrentThread; // rax

  v1 = a1 - 1;
  if ( v1 )
  {
    v2 = v1 - 1;
    if ( v2 )
    {
      if ( v2 == 1 )
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        CmpForceFlushForCoalescing();
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      }
    }
    else
    {
      CmpEnableLazyFlush(8);
    }
  }
  else
  {
    _InterlockedOr(&CmpHoldLazyFlush, 8u);
  }
}
