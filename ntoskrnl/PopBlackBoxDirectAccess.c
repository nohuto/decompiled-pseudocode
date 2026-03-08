/*
 * XREFs of PopBlackBoxDirectAccess @ 0x140993F78
 * Callers:
 *     NtPowerInformation @ 0x14068AB90 (NtPowerInformation.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     KiQueryUnbiasedInterruptTime @ 0x14034A074 (KiQueryUnbiasedInterruptTime.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 __fastcall PopBlackBoxDirectAccess(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // edi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rsi
  __int64 *Pool2; // rax
  __int64 v8; // rax

  v2 = 0;
  if ( *(_QWORD *)a1
    || *(_QWORD *)(a1 + 8)
    || *(_QWORD *)(a1 + 16)
    || *(_DWORD *)(a1 + 24) > 0x15u
    || *(_DWORD *)(a1 + 28) )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopBlackBoxLock, 0LL);
    v6 = 104LL * *(int *)(a1 + 24);
    if ( *(__int64 (**)[2])((char *)&PopBlackBoxEntries + v6 + 80)
      || (Pool2 = (__int64 *)ExAllocatePool2(64LL, 4096LL, 544040269LL),
          (*(__int64 (**)[2])((char *)&PopBlackBoxEntries + v6 + 80) = (__int64 (*)[2])Pool2) != 0LL) )
    {
      *(_DWORD *)((char *)&PopBlackBoxEntries + v6 + 16) |= 2u;
      *(__int64 (**)[2])((char *)&PopBlackBoxEntries + v6 + 72) = (__int64 (*)[2])KiQueryUnbiasedInterruptTime();
      v8 = *(__int64 *)((char *)&PopBlackBoxEntries + v6 + 80);
      *(__int64 (**)[2])((char *)&PopBlackBoxEntries + v6 + 88) = (__int64 (*)[2])4096;
      *(__int64 (**)[2])((char *)&PopBlackBoxEntries + v6 + 96) = (__int64 (*)[2])4096;
      *a2 = v8;
      a2[1] = *(__int64 (**)[2])((char *)&PopBlackBoxEntries + v6 + 88);
    }
    else
    {
      v2 = -1073741670;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopBlackBoxLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&PopBlackBoxLock);
    KeAbPostRelease((ULONG_PTR)&PopBlackBoxLock);
    KeLeaveCriticalRegion();
  }
  return v2;
}
