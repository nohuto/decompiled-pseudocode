__int64 __fastcall EtwpCoverageCheckCP(__int64 a1, __int64 a2)
{
  unsigned int v4; // esi
  struct _KTHREAD *CurrentThread; // rax
  unsigned int *v6; // rbp
  int v7; // edx
  unsigned int *Internal; // rax
  int v9; // r11d
  int v11; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  v11 = 0;
  if ( (unsigned int)EtwpCoverageValidateCP((__int64 *)a2, &v11) )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&EtwpCoverageLock, 0LL);
    v6 = *(unsigned int **)(a1 + 16);
    v7 = *(_DWORD *)(a2 + 8);
    EtwpCoverageLockOwner = (__int64)KeGetCurrentThread();
    Internal = TelemetryCoverageTableLocateInternal(v6, v7);
    if ( *Internal == v9 )
    {
      v4 = 1;
      *(_DWORD *)(a2 + 12) = v6[6];
    }
    else
    {
      *(_DWORD *)(a2 + 12) = 0;
    }
  }
  if ( (struct _KTHREAD *)EtwpCoverageLockOwner == KeGetCurrentThread() )
  {
    EtwpCoverageLockOwner = 0LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EtwpCoverageLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&EtwpCoverageLock);
    KeAbPostRelease((ULONG_PTR)&EtwpCoverageLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  return v4;
}
