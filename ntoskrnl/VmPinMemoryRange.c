/*
 * XREFs of VmPinMemoryRange @ 0x1409D9AF0
 * Callers:
 *     <none>
 * Callees:
 *     ExfReleasePushLockShared @ 0x140238E40 (ExfReleasePushLockShared.c)
 *     ExAcquirePushLockSharedEx @ 0x1402626A0 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     VmpPinMemoryRange @ 0x1405F7F20 (VmpPinMemoryRange.c)
 */

__int64 __fastcall VmPinMemoryRange(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, unsigned int a4, __int64 a5)
{
  unsigned __int64 v9; // rbp
  int v10; // ebx
  struct _KTHREAD *CurrentThread; // rax

  v9 = KeGetCurrentThread()->ApcState.Process[2].Affinity.StaticBitmap[5];
  if ( a5 == -1 || (a2 & 0xFFF) != 0 || (a1 & 0xFFF) != 0 || !a3 || (a4 & 0xFFFFFFF8) != 0 )
  {
    return (unsigned int)-1073741811;
  }
  else if ( v9 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockSharedEx(v9 + 88, 0LL);
    v10 = VmpPinMemoryRange((PEX_SPIN_LOCK)v9, a1 >> 12, a2 >> 12, a3, a4, a5);
    if ( v10 >= 0 )
      v10 = 0;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v9 + 88), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v9 + 88));
    KeAbPostRelease(v9 + 88);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  else
  {
    return (unsigned int)-1073741688;
  }
  return (unsigned int)v10;
}
