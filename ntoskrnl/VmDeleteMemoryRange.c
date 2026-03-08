/*
 * XREFs of VmDeleteMemoryRange @ 0x1409D9890
 * Callers:
 *     <none>
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     VmpRemoveMemoryRange @ 0x1405F88E4 (VmpRemoveMemoryRange.c)
 *     VmpValidateMemoryRangeParameters @ 0x1409DAA9C (VmpValidateMemoryRangeParameters.c)
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
    v11 = (volatile signed __int64 *)(v8 + 22);
    --CurrentThread->KernelApcDisable;
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
