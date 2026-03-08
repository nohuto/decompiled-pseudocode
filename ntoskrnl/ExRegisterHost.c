/*
 * XREFs of ExRegisterHost @ 0x14080EEF0
 * Callers:
 *     IopInitializeIoRate @ 0x14037FD74 (IopInitializeIoRate.c)
 *     EtwpInitializeProcessorTrace @ 0x14080EC6C (EtwpInitializeProcessorTrace.c)
 *     ExpInitSystemPhase1 @ 0x140B3F0B8 (ExpInitSystemPhase1.c)
 *     KiInitSupervisorStateExtensionHost @ 0x140B42244 (KiInitSupervisorStateExtensionHost.c)
 *     PspInitializeOctagonExtensionHost @ 0x140B42368 (PspInitializeOctagonExtensionHost.c)
 *     PspInitializeSecExtensionHost @ 0x140B423C0 (PspInitializeSecExtensionHost.c)
 *     PspInitializeDesktopActivityModeratorCallouts @ 0x140B42418 (PspInitializeDesktopActivityModeratorCallouts.c)
 *     PspInitializeMMCSSCallouts @ 0x140B42470 (PspInitializeMMCSSCallouts.c)
 *     PspInitializeHwTraceCallouts @ 0x140B424D0 (PspInitializeHwTraceCallouts.c)
 *     PspInitializeBackgroundActivityModeratorCallouts @ 0x140B42530 (PspInitializeBackgroundActivityModeratorCallouts.c)
 *     PspInitializeNetRateControl @ 0x140B42660 (PspInitializeNetRateControl.c)
 *     SepInitializeAuthorizationCallbacks @ 0x140B426C0 (SepInitializeAuthorizationCallbacks.c)
 *     VmInitSystem @ 0x140B43DDC (VmInitSystem.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402411C0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     ExWaitForRundownProtectionRelease @ 0x140352F40 (ExWaitForRundownProtectionRelease.c)
 *     ExpFindHost @ 0x14080F04C (ExpFindHost.c)
 *     ExpDereferenceHost @ 0x1409FE96C (ExpDereferenceHost.c)
 *     ExAllocatePoolWithTag @ 0x140AAB230 (ExAllocatePoolWithTag.c)
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
