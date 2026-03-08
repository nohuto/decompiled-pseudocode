/*
 * XREFs of EtwpCoverageEnsureUserModeView @ 0x140871504
 * Callers:
 *     EtwSetProcessTelemetryCoverage @ 0x140871478 (EtwSetProcessTelemetryCoverage.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     MmMapViewOfSection @ 0x14069EC70 (MmMapViewOfSection.c)
 *     MiUnmapViewOfSection @ 0x1406A2570 (MiUnmapViewOfSection.c)
 */

__int64 __fastcall EtwpCoverageEnsureUserModeView(__int64 a1)
{
  _KPROCESS *Process; // rsi
  unsigned __int64 v2; // r14
  int v4; // eax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rcx
  __int64 *v7; // rax
  char v8; // di
  unsigned int v9; // [rsp+50h] [rbp-38h]
  __int64 v10; // [rsp+60h] [rbp-28h] BYREF
  _QWORD v11[4]; // [rsp+68h] [rbp-20h] BYREF
  unsigned __int64 v12; // [rsp+A0h] [rbp+18h] BYREF
  _KPROCESS *v13; // [rsp+A8h] [rbp+20h]

  v12 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v13 = Process;
  v11[0] = 0LL;
  v2 = Process[1].Affinity.StaticBitmap[24];
  if ( *(_QWORD *)(v2 + 1952) )
  {
    v9 = 0;
  }
  else
  {
    v10 = 0LL;
    v4 = MmMapViewOfSection(*(_QWORD *)(a1 + 8), (__int64)Process, &v12, 0LL, 0, (__int64)v11, &v10, 1, 0, 2);
    v9 = v4;
    if ( v4 >= 0 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&EtwpCoverageLock, 0LL);
      EtwpCoverageLockOwner = (__int64)KeGetCurrentThread();
      if ( !*(_QWORD *)(v2 + 1952) )
      {
        *(_QWORD *)(v2 + 1952) = v12;
        v12 = 0LL;
      }
      v6 = 0LL;
      v7 = (__int64 *)Process[1].Affinity.StaticBitmap[30];
      if ( v7 )
        v6 = *v7;
      if ( v6 )
        *(_DWORD *)(v6 + 1116) = *(_DWORD *)(v2 + 1952);
      v9 = 0;
    }
  }
  if ( (struct _KTHREAD *)EtwpCoverageLockOwner == KeGetCurrentThread() )
  {
    EtwpCoverageLockOwner = 0LL;
    v8 = _InterlockedExchangeAdd64((volatile signed __int64 *)&EtwpCoverageLock, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v8 & 2) != 0 && (v8 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)&EtwpCoverageLock);
    KeAbPostRelease((ULONG_PTR)&EtwpCoverageLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  if ( v12 )
    MiUnmapViewOfSection(Process, v12, 0, 0);
  return v9;
}
