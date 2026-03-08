/*
 * XREFs of CmpCloseKeyObject @ 0x1406B5340
 * Callers:
 *     <none>
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402411C0 (ExfAcquirePushLockExclusiveEx.c)
 *     EtwGetKernelTraceTimestamp @ 0x140250530 (EtwGetKernelTraceTimestamp.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     CmCleanupThreadInfo @ 0x140263740 (CmCleanupThreadInfo.c)
 *     CmpInitializeThreadInfo @ 0x140263760 (CmpInitializeThreadInfo.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     CmpPostNotify @ 0x1406B3790 (CmpPostNotify.c)
 *     CmpSignalDeferredPosts @ 0x1406B5564 (CmpSignalDeferredPosts.c)
 *     CmpDelayedDerefKeys @ 0x1407AEFE8 (CmpDelayedDerefKeys.c)
 *     CmpLockKcbShared @ 0x140AF20D0 (CmpLockKcbShared.c)
 *     CmpUnlockKcb @ 0x140AF2140 (CmpUnlockKcb.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140AF21E0 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpLockRegistry @ 0x140AF2270 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140AF22C0 (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmpCloseKeyObject(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v4; // rsi
  __int64 v7; // rcx
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rbp
  __int64 v15; // rcx
  __int64 v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int128 v25; // [rsp+40h] [rbp-68h] BYREF
  __int128 v26; // [rsp+50h] [rbp-58h] BYREF
  __int128 v27; // [rsp+60h] [rbp-48h] BYREF
  _OWORD v28[2]; // [rsp+70h] [rbp-38h] BYREF

  v4 = 0LL;
  memset(v28, 0, sizeof(v28));
  v27 = 0LL;
  v26 = 0LL;
  v25 = 0LL;
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp((__int64)v28, 0x20000LL);
  CmpInitializeThreadInfo((__int64)&v27);
  if ( CmpTraceRoutine && a2 )
    v4 = *(_QWORD *)(a2 + 8);
  if ( a4 <= 1 && *(_DWORD *)a2 == 1803104306 && *(_QWORD *)(a2 + 16) )
  {
    *((_QWORD *)&v26 + 1) = &v26;
    *(_QWORD *)&v26 = &v26;
    *((_QWORD *)&v25 + 1) = &v25;
    *(_QWORD *)&v25 = &v25;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    CmpLockRegistry();
    CmpLockKcbShared(*(_QWORD *)(a2 + 8));
    if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(a2, 0LL) )
    {
      CmpUnlockKcb(*(_QWORD *)(a2 + 8));
      CmpUnlockRegistry(v22, v21, v23, v24);
    }
    else
    {
      v10 = (unsigned __int64 *)(*(_QWORD *)(*(_QWORD *)(a2 + 8) + 32LL) + 1680LL);
      v11 = KeAbPreAcquire((__int64)v10, 0LL);
      v14 = v11;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v10, 0LL) )
        ExfAcquirePushLockExclusiveEx(v10, v11, (__int64)v10);
      if ( v14 )
        *(_BYTE *)(v14 + 18) = 1;
      v15 = *(_QWORD *)(a2 + 16);
      if ( v15 && *(_QWORD *)(v15 + 16) != v15 + 16 )
        CmpPostNotify(v15, v12, v13, 267LL, 0, &v25, &v26);
      v16 = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 32LL);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v16 + 1680), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v16 + 1680));
      KeAbPostRelease(v16 + 1680);
      CmpUnlockKcb(*(_QWORD *)(a2 + 8));
      CmpUnlockRegistry(v18, v17, v19, v20);
      CmpDelayedDerefKeys(&v25);
      CmpSignalDeferredPosts(&v26);
    }
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  if ( CmpTraceRoutine )
  {
    LOBYTE(v7) = 27;
    CmpTraceRoutine(v7, v28, 0LL, 0LL, v4, 0LL);
  }
  return CmCleanupThreadInfo((__int64 *)&v27);
}
