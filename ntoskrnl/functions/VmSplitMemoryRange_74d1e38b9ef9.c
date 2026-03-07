__int64 __fastcall VmSplitMemoryRange(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rbp
  unsigned int v5; // edi
  struct _KTHREAD *CurrentThread; // rax

  v4 = KeGetCurrentThread()->ApcState.Process[2].Affinity.StaticBitmap[5];
  if ( a2 == -1 || (a1 & 0xFFF) != 0 )
  {
    return (unsigned int)-1073741811;
  }
  else if ( v4 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(v4 + 88, 0LL);
    v5 = VmpSplitMemoryRange((PEX_SPIN_LOCK)v4, a1 >> 12, a2);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v4 + 88), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v4 + 88));
    KeAbPostRelease(v4 + 88);
    KeLeaveCriticalRegion();
  }
  else
  {
    return (unsigned int)-1073741688;
  }
  return v5;
}
