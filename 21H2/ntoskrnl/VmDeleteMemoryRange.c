/*
 * XREFs of VmDeleteMemoryRange @ 0x1409D94E0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     VmpRemoveMemoryRange @ 0x14062BA64 (VmpRemoveMemoryRange.c)
 *     VmpValidateMemoryRangeParameters @ 0x1409DA6D4 (VmpValidateMemoryRangeParameters.c)
 */

__int64 __fastcall VmDeleteMemoryRange(unsigned __int64 a1, unsigned __int64 a2, unsigned __int64 a3, __int64 a4)
{
  volatile LONG *v8; // rdi
  int v9; // edi
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v11; // rsi

  v8 = (volatile LONG *)KeGetCurrentThread()->ApcState.Process[2].Affinity.StaticBitmap[5];
  if ( (unsigned int)VmpValidateMemoryRangeParameters(a1, a2, a3, a4) )
  {
    return (unsigned int)-1073741811;
  }
  else if ( v8 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v11 = (volatile signed __int64 *)(v8 + 22);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)(v8 + 22), 0LL);
    v9 = VmpRemoveMemoryRange(v8, a2 >> 12, a1 >> 12, a3, a4);
    if ( v9 >= 0 )
      v9 = 0;
    if ( (_InterlockedExchangeAdd64(v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v11);
    KeAbPostRelease((ULONG_PTR)v11);
    KeLeaveCriticalRegion();
  }
  else
  {
    return (unsigned int)-1073741688;
  }
  return (unsigned int)v9;
}
