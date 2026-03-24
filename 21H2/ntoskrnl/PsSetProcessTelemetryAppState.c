/*
 * XREFs of PsSetProcessTelemetryAppState @ 0x1406CDED4
 * Callers:
 *     PsFreezeProcess @ 0x14067CC1C (PsFreezeProcess.c)
 *     PsThawProcess @ 0x14067D0F8 (PsThawProcess.c)
 *     PspExitProcess @ 0x1406CD37C (PspExitProcess.c)
 *     PsSetProcessFaultInformation @ 0x140772D30 (PsSetProcessFaultInformation.c)
 *     EtwpPsProvProcessEnumCallback @ 0x14093EB60 (EtwpPsProvProcessEnumCallback.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206FC0 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1402F1570 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140348C80 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14034A990 (ExAcquirePushLockExclusiveEx.c)
 *     EtwTraceAppStateChange @ 0x1406CDBB8 (EtwTraceAppStateChange.c)
 *     PsGetProcessDeepFreezeStats @ 0x1406CE8CC (PsGetProcessDeepFreezeStats.c)
 */

__int64 __fastcall PsSetProcessTelemetryAppState(struct _EX_RUNDOWN_REF *BugCheckParameter1, int a2)
{
  struct _KTHREAD *CurrentThread; // r12
  volatile signed __int64 *v3; // r14
  unsigned int v6; // edi
  unsigned __int64 v7; // r15
  unsigned __int64 Count; // rcx
  __int128 v10; // [rsp+20h] [rbp-60h] BYREF
  __int128 v11; // [rsp+30h] [rbp-50h]
  __int128 v12; // [rsp+40h] [rbp-40h] BYREF
  __int128 v13; // [rsp+50h] [rbp-30h]
  __int128 v14; // [rsp+60h] [rbp-20h]
  __int64 v15; // [rsp+70h] [rbp-10h]

  CurrentThread = KeGetCurrentThread();
  v3 = (volatile signed __int64 *)&BugCheckParameter1[135];
  v15 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  while ( 1 )
  {
    PsGetProcessDeepFreezeStats(BugCheckParameter1, &v10);
    v6 = 0;
    v7 = *((_QWORD *)&v10 + 1) - v11 - BugCheckParameter1[289].Count;
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)v3, 0LL);
    Count = BugCheckParameter1[292].Count;
    if ( Count >> 61 != 3 && BugCheckParameter1[291].Count <= (unsigned __int64)v10 )
    {
      *(struct _EX_RUNDOWN_REF *)&v13 = BugCheckParameter1[291];
      LODWORD(v15) = Count >> 61;
      *((_QWORD *)&v13 + 1) = Count & 0x1FFFFFFFFFFFFFFFLL;
      if ( a2 == 5 && Count >> 61 == 1 )
        a2 = 6;
      BugCheckParameter1[291].Count = v10;
      BugCheckParameter1[292].Count = v7 & 0x1FFFFFFFFFFFFFFFLL | ((__int64)a2 << 61);
      v6 = 1;
    }
    if ( (_InterlockedExchangeAdd64(v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v3);
    KeAbPostRelease((ULONG_PTR)v3);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    if ( BugCheckParameter1[292].Count >> 61 == 3 )
      break;
    if ( v6 )
      goto LABEL_10;
  }
  if ( !v6 )
    return v6;
LABEL_10:
  v12 = v10;
  *((_QWORD *)&v14 + 1) = v11;
  *(_QWORD *)&v14 = v7;
  HIDWORD(v15) = a2;
  EtwTraceAppStateChange(BugCheckParameter1, (__int64)&v12);
  return v6;
}
