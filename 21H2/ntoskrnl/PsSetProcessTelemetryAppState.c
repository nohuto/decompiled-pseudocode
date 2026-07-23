/*
 * XREFs of PsSetProcessTelemetryAppState @ 0x1406A51B8
 * Callers:
 *     PsThawProcess @ 0x1406001EC (PsThawProcess.c)
 *     PsFreezeProcess @ 0x140600364 (PsFreezeProcess.c)
 *     PspExitProcess @ 0x14067C00C (PspExitProcess.c)
 *     PsSetProcessFaultInformation @ 0x140772EF0 (PsSetProcessFaultInformation.c)
 *     EtwpPsProvProcessEnumCallback @ 0x14093ED30 (EtwpPsProvProcessEnumCallback.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     EtwTraceAppStateChange @ 0x1406A3FC0 (EtwTraceAppStateChange.c)
 *     PsGetProcessDeepFreezeStats @ 0x1406A5BAC (PsGetProcessDeepFreezeStats.c)
 */

__int64 __fastcall PsSetProcessTelemetryAppState(struct _EX_RUNDOWN_REF *BugCheckParameter1, int a2)
{
  struct _KTHREAD *CurrentThread; // r12
  volatile signed __int64 *v3; // r14
  unsigned int v6; // edi
  unsigned __int64 v7; // r15
  unsigned __int64 Count; // rcx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int128 v13; // [rsp+20h] [rbp-60h] BYREF
  __int128 v14; // [rsp+30h] [rbp-50h]
  __int128 v15; // [rsp+40h] [rbp-40h] BYREF
  __int128 v16; // [rsp+50h] [rbp-30h]
  __int128 v17; // [rsp+60h] [rbp-20h]
  __int64 v18; // [rsp+70h] [rbp-10h]

  CurrentThread = KeGetCurrentThread();
  v3 = (volatile signed __int64 *)&BugCheckParameter1[135];
  v18 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  while ( 1 )
  {
    PsGetProcessDeepFreezeStats(BugCheckParameter1, &v13);
    v6 = 0;
    v7 = *((_QWORD *)&v13 + 1) - v14 - BugCheckParameter1[289].Count;
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)v3, 0LL);
    Count = BugCheckParameter1[292].Count;
    if ( Count >> 61 != 3 && BugCheckParameter1[291].Count <= (unsigned __int64)v13 )
    {
      *(struct _EX_RUNDOWN_REF *)&v16 = BugCheckParameter1[291];
      LODWORD(v18) = Count >> 61;
      *((_QWORD *)&v16 + 1) = Count & 0x1FFFFFFFFFFFFFFFLL;
      if ( a2 == 5 && Count >> 61 == 1 )
        a2 = 6;
      BugCheckParameter1[291].Count = v13;
      BugCheckParameter1[292].Count = v7 & 0x1FFFFFFFFFFFFFFFLL | ((__int64)a2 << 61);
      v6 = 1;
    }
    if ( (_InterlockedExchangeAdd64(v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v3);
    KeAbPostRelease((ULONG_PTR)v3);
    KeLeaveCriticalRegionThread((__int64)CurrentThread, v9, v10, v11);
    if ( BugCheckParameter1[292].Count >> 61 == 3 )
      break;
    if ( v6 )
      goto LABEL_10;
  }
  if ( !v6 )
    return v6;
LABEL_10:
  v15 = v13;
  *((_QWORD *)&v17 + 1) = v14;
  *(_QWORD *)&v17 = v7;
  HIDWORD(v18) = a2;
  EtwTraceAppStateChange(BugCheckParameter1, (__int64)&v15);
  return v6;
}
