/*
 * XREFs of VmPinMemoryRange @ 0x1409D9740
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     VmpPinMemoryRange @ 0x14062AE30 (VmpPinMemoryRange.c)
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
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  else
  {
    return (unsigned int)-1073741688;
  }
  return (unsigned int)v10;
}
