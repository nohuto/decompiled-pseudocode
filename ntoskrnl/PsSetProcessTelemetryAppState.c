__int64 __fastcall PsSetProcessTelemetryAppState(PRKPROCESS PROCESS, int a2)
{
  struct _KTHREAD *CurrentThread; // r12
  volatile signed __int64 *p_Lock; // r14
  unsigned __int64 v6; // r15
  unsigned int v7; // edi
  unsigned __int64 v8; // rcx
  __int128 v10; // [rsp+20h] [rbp-60h] BYREF
  __int128 v11; // [rsp+30h] [rbp-50h]
  __int128 v12; // [rsp+40h] [rbp-40h]
  __int128 v13; // [rsp+50h] [rbp-30h]
  __int128 v14; // [rsp+60h] [rbp-20h]
  __int64 v15; // [rsp+70h] [rbp-10h]

  CurrentThread = KeGetCurrentThread();
  p_Lock = (volatile signed __int64 *)&PROCESS[1].Header.Lock;
  v15 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  while ( 1 )
  {
    PsGetProcessDeepFreezeStats(PROCESS, &v10);
    v6 = *((_QWORD *)&v10 + 1) - v11 - PROCESS[2].Affinity.StaticBitmap[8];
    --CurrentThread->KernelApcDisable;
    v7 = 0;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)p_Lock, 0LL);
    v8 = PROCESS[2].Affinity.StaticBitmap[11];
    if ( v8 >> 61 != 3 && PROCESS[2].Affinity.StaticBitmap[10] <= (unsigned __int64)v10 )
    {
      *(_QWORD *)&v13 = PROCESS[2].Affinity.StaticBitmap[10];
      LODWORD(v15) = v8 >> 61;
      *((_QWORD *)&v13 + 1) = v8 & 0x1FFFFFFFFFFFFFFFLL;
      if ( a2 == 5 && v8 >> 61 == 1 )
        a2 = 6;
      PROCESS[2].Affinity.StaticBitmap[10] = v10;
      PROCESS[2].Affinity.StaticBitmap[11] = v6 & 0x1FFFFFFFFFFFFFFFLL | ((__int64)a2 << 61);
      v7 = 1;
    }
    if ( (_InterlockedExchangeAdd64(p_Lock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(p_Lock);
    KeAbPostRelease((ULONG_PTR)p_Lock);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    if ( PROCESS[2].Affinity.StaticBitmap[11] >> 61 == 3 )
      break;
    if ( v7 )
      goto LABEL_10;
  }
  if ( !v7 )
    return v7;
LABEL_10:
  v12 = v10;
  *((_QWORD *)&v14 + 1) = v11;
  *(_QWORD *)&v14 = v6;
  HIDWORD(v15) = a2;
  EtwTraceAppStateChange(PROCESS);
  return v7;
}
