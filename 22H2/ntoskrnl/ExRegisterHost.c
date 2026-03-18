/*
 * XREFs of ExRegisterHost @ 0x140823390
 * Callers:
 *     IopInitializeIoRate @ 0x1403877C8 (IopInitializeIoRate.c)
 *     EtwpInitializeProcessorTrace @ 0x140823110 (EtwpInitializeProcessorTrace.c)
 *     ExpInitSystemPhase1 @ 0x140B4D6E4 (ExpInitSystemPhase1.c)
 *     VmInitSystem @ 0x140B5436C (VmInitSystem.c)
 *     KiInitSupervisorStateExtensionHost @ 0x140B545D4 (KiInitSupervisorStateExtensionHost.c)
 *     PspInitializeOctagonExtensionHost @ 0x140B546F8 (PspInitializeOctagonExtensionHost.c)
 *     PspInitializeSecExtensionHost @ 0x140B54750 (PspInitializeSecExtensionHost.c)
 *     PspInitializeDesktopActivityModeratorCallouts @ 0x140B547A8 (PspInitializeDesktopActivityModeratorCallouts.c)
 *     PspInitializeMMCSSCallouts @ 0x140B54800 (PspInitializeMMCSSCallouts.c)
 *     PspInitializeHwTraceCallouts @ 0x140B54860 (PspInitializeHwTraceCallouts.c)
 *     PspInitializeBackgroundActivityModeratorCallouts @ 0x140B548C0 (PspInitializeBackgroundActivityModeratorCallouts.c)
 *     PspInitializeNetRateControl @ 0x140B549F0 (PspInitializeNetRateControl.c)
 *     SepInitializeAuthorizationCallbacks @ 0x140B54A50 (SepInitializeAuthorizationCallbacks.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F700 (KeLeaveCriticalRegionThread.c)
 *     KeAbPreAcquire @ 0x140230EE0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402BD930 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FCE10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExWaitForRundownProtectionRelease @ 0x14030A210 (ExWaitForRundownProtectionRelease.c)
 *     ExpFindHost @ 0x1408234EC (ExpFindHost.c)
 *     ExpDereferenceHost @ 0x140A0165C (ExpDereferenceHost.c)
 *     ExAllocatePoolWithTag @ 0x140AAFC80 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall ExRegisterHost(_QWORD *a1, __int64 a2, unsigned __int16 *a3)
{
  char *PoolWithTag; // rax
  unsigned int v6; // edi
  _QWORD *v7; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v9; // rax
  signed __int8 v10; // cf
  __int64 v11; // rbp
  __int64 Host; // rbp
  _QWORD *v13; // rax
  char v14; // si

  PoolWithTag = (char *)ExAllocatePoolWithTag((POOL_TYPE)(*((_DWORD *)a3 + 2) | 0x400), 0x60uLL, 0x48457845u);
  v6 = 0;
  v7 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  PoolWithTag[88] &= ~1u;
  *((_DWORD *)PoolWithTag + 4) = 1;
  *((_QWORD *)PoolWithTag + 10) = 0LL;
  *(_OWORD *)(PoolWithTag + 24) = *(_OWORD *)a3;
  *(_OWORD *)(PoolWithTag + 40) = *((_OWORD *)a3 + 1);
  *((_QWORD *)PoolWithTag + 7) = *((_QWORD *)a3 + 4);
  *((_QWORD *)PoolWithTag + 9) = 0LL;
  *((_QWORD *)PoolWithTag + 8) = 0LL;
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)PoolWithTag + 8);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v9 = KeAbPreAcquire((__int64)&ExpHostListLock, 0LL);
  v10 = _interlockedbittestandset64((volatile signed __int32 *)&ExpHostListLock, 0LL);
  v11 = v9;
  if ( v10 )
    ExfAcquirePushLockExclusiveEx(&ExpHostListLock, v9, (__int64)&ExpHostListLock);
  if ( v11 )
    *(_BYTE *)(v11 + 18) = 1;
  Host = ExpFindHost(*a3, a3[1]);
  if ( Host )
  {
    v6 = -1073741771;
    ExpDereferenceHost(v7);
    ExpDereferenceHost(Host);
  }
  else
  {
    v13 = (_QWORD *)qword_140D54F58;
    if ( *(__int64 **)qword_140D54F58 != &ExpHostList )
      __fastfail(3u);
    *v7 = &ExpHostList;
    v7[1] = v13;
    *v13 = v7;
    qword_140D54F58 = (__int64)v7;
    *a1 = v7;
  }
  v14 = _InterlockedExchangeAdd64((volatile signed __int64 *)&ExpHostListLock, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v14 & 2) != 0 && (v14 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)&ExpHostListLock);
  KeAbPostRelease((ULONG_PTR)&ExpHostListLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v6;
}
