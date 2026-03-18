/*
 * XREFs of VmpPauseResumeNotify @ 0x1409DA178
 * Callers:
 *     VmPauseResumeNotify @ 0x1409D9700 (VmPauseResumeNotify.c)
 * Callees:
 *     SmStoreExistsForProcess @ 0x1402A10EC (SmStoreExistsForProcess.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     MiGetProcessPartition @ 0x14032A72C (MiGetProcessPartition.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     MmProcessWorkingSetControl @ 0x1407F5540 (MmProcessWorkingSetControl.c)
 */

__int64 __fastcall VmpPauseResumeNotify(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rax
  int v5; // r12d
  struct _KTHREAD *v6; // rax
  volatile signed __int64 *v7; // rsi
  unsigned int v8; // eax
  int v9; // edi
  int v10; // r14d
  int i; // r14d
  bool v12; // zf
  int v13; // edi
  struct _KTHREAD *v14; // rax
  unsigned int v15; // ecx
  int v17; // [rsp+20h] [rbp-10h] BYREF
  __int64 v18; // [rsp+24h] [rbp-Ch]

  CurrentThread = KeGetCurrentThread();
  v5 = 4;
  --CurrentThread->KernelApcDisable;
  v6 = KeGetCurrentThread();
  --v6->KernelApcDisable;
  v7 = (volatile signed __int64 *)(a1 + 112);
  ExAcquirePushLockExclusiveEx(a1 + 112, 0LL);
  v8 = *(_DWORD *)(a1 + 120);
  if ( (v8 & 1) != 0 )
  {
    v9 = -1073740682;
    goto LABEL_31;
  }
  v10 = (v8 >> 1) & 3;
  if ( a2 )
  {
    if ( v10 >= a2 )
    {
      v9 = -1073741811;
      goto LABEL_31;
    }
  }
  else if ( !v10 )
  {
    v9 = 1075380276;
    goto LABEL_31;
  }
  *(_DWORD *)(a1 + 120) = v8 | 1;
  if ( (_InterlockedExchangeAdd64(v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v7);
  KeAbPostRelease((ULONG_PTR)v7);
  KeLeaveCriticalRegion();
  v18 = 0LL;
  v17 = 3;
  if ( a2 )
  {
    for ( i = v10 + 1; ; ++i )
    {
      if ( i > a2 )
      {
        v5 = a2;
        goto LABEL_28;
      }
      if ( i == 1 )
      {
        if ( *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[1].IdealProcessor[6] << 12 >> 20 > (unsigned __int64)(unsigned int)VmPauseOutswapSizeCapMB )
          continue;
        v18 = 0LL;
      }
      else
      {
        if ( (unsigned int)(i - 2) > 1
          || !*(_DWORD *)(MiGetProcessPartition((__int64)KeGetCurrentThread()->ApcState.Process) + 1176) && i != 3 )
        {
          continue;
        }
        v12 = (*(_BYTE *)(a1 + 104) & 1) == 0;
        v13 = 3;
        LODWORD(v18) = 1;
        if ( !v12 )
          v13 = 35;
        HIDWORD(v18) = v13;
        if ( SmStoreExistsForProcess() )
        {
          HIDWORD(v18) = v13 | 8;
          if ( i == 3 )
            HIDWORD(v18) = v13 | 0x18;
        }
      }
      v9 = MmProcessWorkingSetControl(0xFFFFFFFFFFFFFFFFuLL, (__int64 *)&v17, 0xCu, 0);
      if ( v9 < 0 )
        goto LABEL_29;
    }
  }
  HIDWORD(v18) = 1;
  MmProcessWorkingSetControl(0xFFFFFFFFFFFFFFFFuLL, (__int64 *)&v17, 0xCu, 0);
  v5 = 0;
LABEL_28:
  v9 = 0;
LABEL_29:
  v14 = KeGetCurrentThread();
  --v14->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)v7, 0LL);
  v15 = *(_DWORD *)(a1 + 120) & 0xFFFFFFFE;
  *(_DWORD *)(a1 + 120) = v15;
  if ( v5 != 4 )
    *(_DWORD *)(a1 + 120) = v15 ^ ((unsigned __int8)v15 ^ (unsigned __int8)(2 * v5)) & 6;
LABEL_31:
  if ( (_InterlockedExchangeAdd64(v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v7);
  KeAbPostRelease((ULONG_PTR)v7);
  KeLeaveCriticalRegion();
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return (unsigned int)v9;
}
