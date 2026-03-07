__int64 __fastcall VmUnpinMemoryRange(unsigned __int64 a1, unsigned __int64 a2, unsigned __int64 a3, __int64 a4)
{
  unsigned __int64 v8; // r14
  unsigned int v9; // ebx
  struct _KTHREAD *CurrentThread; // rax

  v8 = KeGetCurrentThread()->ApcState.Process[2].Affinity.StaticBitmap[5];
  if ( a4 == -1 )
    return (unsigned int)-1073741811;
  if ( (a2 & 0xFFF) != 0 )
    return (unsigned int)-1073741811;
  if ( (a1 & 0xFFF) != 0 )
    return (unsigned int)-1073741811;
  v9 = 0;
  if ( !a3 )
  {
    return (unsigned int)-1073741811;
  }
  else if ( v8 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockSharedEx(v8 + 88, 0LL);
    VmpUnpinMemoryRange((PEX_SPIN_LOCK)v8, a1 >> 12, a2 >> 12, a3, a4);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 88), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v8 + 88));
    KeAbPostRelease(v8 + 88);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  else
  {
    return (unsigned int)-1073741688;
  }
  return v9;
}
