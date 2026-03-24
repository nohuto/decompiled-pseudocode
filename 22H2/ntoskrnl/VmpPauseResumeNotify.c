/*
 * XREFs of VmpPauseResumeNotify @ 0x14092F744
 * Callers:
 *     VmPauseResumeNotify @ 0x14092F120 (VmPauseResumeNotify.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206F80 (KeLeaveCriticalRegionThread.c)
 *     MiGetProcessPartition @ 0x14021AD00 (MiGetProcessPartition.c)
 *     SmStoreExistsForProcess @ 0x140264160 (SmStoreExistsForProcess.c)
 *     ExfTryToWakePushLock @ 0x140271BF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402C9370 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402CB080 (ExAcquirePushLockExclusiveEx.c)
 *     MmProcessWorkingSetControl @ 0x140689770 (MmProcessWorkingSetControl.c)
 */

__int64 __fastcall VmpPauseResumeNotify(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rax
  int v5; // r12d
  volatile signed __int64 *v6; // rsi
  unsigned int v7; // eax
  int v8; // edi
  int v9; // r14d
  int i; // r14d
  int v11; // eax
  bool v12; // zf
  int v13; // edi
  int v14; // edi
  unsigned int v15; // ecx
  int v17; // [rsp+20h] [rbp-10h] BYREF
  __int64 v18; // [rsp+24h] [rbp-Ch]

  CurrentThread = KeGetCurrentThread();
  v5 = 4;
  --CurrentThread->KernelApcDisable;
  v6 = (volatile signed __int64 *)(a1 + 96);
  ExAcquirePushLockExclusiveEx(a1 + 96, 0LL);
  v7 = *(_DWORD *)(a1 + 104);
  if ( (v7 & 1) != 0 )
  {
    v8 = -1073740682;
    goto LABEL_31;
  }
  v9 = (v7 >> 1) & 3;
  if ( a2 )
  {
    if ( v9 >= a2 )
    {
      v8 = -1073741811;
      goto LABEL_31;
    }
  }
  else if ( !v9 )
  {
    v8 = 1075380276;
    goto LABEL_31;
  }
  *(_DWORD *)(a1 + 104) = v7 | 1;
  if ( (_InterlockedExchangeAdd64(v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v6);
  KeAbPostRelease((ULONG_PTR)v6);
  v18 = 0LL;
  v17 = 3;
  if ( a2 )
  {
    for ( i = v9 + 1; ; ++i )
    {
      if ( i > a2 )
      {
        v5 = a2;
        goto LABEL_28;
      }
      if ( i == 1 )
      {
        if ( *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[1].IdealProcessor[2] << 12 >> 20 > (unsigned __int64)(unsigned int)VmPauseOutswapSizeCapMB )
          continue;
        v18 = 0LL;
      }
      else
      {
        if ( (unsigned int)(i - 2) > 1
          || !*(_DWORD *)(MiGetProcessPartition((__int64)KeGetCurrentThread()->ApcState.Process) + 1160) && i != 3 )
        {
          continue;
        }
        v11 = 3;
        v12 = (*(_DWORD *)(a1 + 88) & 1) == 0;
        v13 = *(_DWORD *)(a1 + 88) & 1;
        LODWORD(v18) = 1;
        if ( !v12 )
          v11 = 35;
        HIDWORD(v18) = v11;
        v14 = 32 * v13 + 3;
        if ( SmStoreExistsForProcess() )
        {
          HIDWORD(v18) = v14 | 8;
          if ( i == 3 )
            HIDWORD(v18) = v14 | 0x18;
        }
      }
      v8 = MmProcessWorkingSetControl(0xFFFFFFFFFFFFFFFFuLL, (__int64 *)&v17, 0xCu, 0);
      if ( v8 < 0 )
        goto LABEL_29;
    }
  }
  v18 = 0x100000000LL;
  MmProcessWorkingSetControl(0xFFFFFFFFFFFFFFFFuLL, (__int64 *)&v17, 0xCu, 0);
  v5 = 0;
LABEL_28:
  v8 = 0;
LABEL_29:
  ExAcquirePushLockExclusiveEx((ULONG_PTR)v6, 0LL);
  v15 = *(_DWORD *)(a1 + 104) & 0xFFFFFFFE;
  *(_DWORD *)(a1 + 104) = v15;
  if ( v5 != 4 )
    *(_DWORD *)(a1 + 104) = v15 ^ ((unsigned __int8)v15 ^ (unsigned __int8)(2 * v5)) & 6;
LABEL_31:
  if ( (_InterlockedExchangeAdd64(v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v6);
  KeAbPostRelease((ULONG_PTR)v6);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return (unsigned int)v8;
}
