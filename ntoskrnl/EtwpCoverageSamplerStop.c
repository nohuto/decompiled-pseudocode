/*
 * XREFs of EtwpCoverageSamplerStop @ 0x1409F08E4
 * Callers:
 *     EtwpCoverageSamplerClose @ 0x1409F0240 (EtwpCoverageSamplerClose.c)
 *     EtwpSetCoverageSamplerInformation @ 0x1409F0DFC (EtwpSetCoverageSamplerInformation.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     ExRundownCompleted @ 0x140294280 (ExRundownCompleted.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     ExWaitForRundownProtectionRelease @ 0x140352F40 (ExWaitForRundownProtectionRelease.c)
 *     KeStopProfile @ 0x140571BAC (KeStopProfile.c)
 *     EtwpCovSampCaptureContextStop @ 0x140600CB8 (EtwpCovSampCaptureContextStop.c)
 *     PsGetNextProcess @ 0x1406AA530 (PsGetNextProcess.c)
 *     EtwUnregister @ 0x14076F9E0 (EtwUnregister.c)
 *     EtwpUpdateGlobalGroupMasks @ 0x140785F3C (EtwpUpdateGlobalGroupMasks.c)
 *     PsRemoveLoadImageNotifyRoutine @ 0x1409B2D60 (PsRemoveLoadImageNotifyRoutine.c)
 *     EtwpCovSampProcessCleanup @ 0x1409EFCC8 (EtwpCovSampProcessCleanup.c)
 */

NTSTATUS __fastcall EtwpCoverageSamplerStop(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  void *v3; // r15
  int v4; // eax
  struct _KTHREAD *v5; // rax
  struct _KTHREAD *v6; // rax
  __int64 v7; // r13
  int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // eax
  __int64 *i; // rcx
  __int64 v12; // rbp
  struct _KTHREAD *v13; // rcx
  __int64 *NextProcess; // rax
  __int64 *v15; // rsi
  REGHANDLE v16; // rcx

  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&EtwpCovSampGlobals, 0LL);
  qword_140C31868 = (__int64)KeGetCurrentThread();
  if ( qword_140C31878 == a1 )
  {
    v4 = *(_DWORD *)(a1 + 1728);
    if ( (v4 & 2) == 0 )
    {
      *(_DWORD *)(a1 + 1728) = v4 | 2;
      qword_140C31868 = 0LL;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EtwpCovSampGlobals, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&EtwpCovSampGlobals);
      KeAbPostRelease((ULONG_PTR)&EtwpCovSampGlobals);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      ExWaitForRundownProtectionRelease(&stru_140C31880);
      ExRundownCompleted(&stru_140C31880);
      v5 = KeGetCurrentThread();
      --v5->KernelApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&EtwpCovSampGlobals, 0LL);
      v6 = KeGetCurrentThread();
      v3 = (void *)qword_140C31878;
      qword_140C31878 = 0LL;
      v7 = qword_140C31888;
      qword_140C31868 = (__int64)v6;
      v8 = *(_DWORD *)(a1 + 1660);
      if ( (v8 & 8) != 0 )
      {
        KeStopProfile(qword_140C31888 + 16);
        *(_DWORD *)(a1 + 1660) &= ~8u;
        v8 = *(_DWORD *)(a1 + 1660);
      }
      if ( (v8 & 2) != 0 )
      {
        PsRemoveLoadImageNotifyRoutine((PLOAD_IMAGE_NOTIFY_ROUTINE)EtwpCovSampImageNotify);
        *(_DWORD *)(a1 + 1660) &= ~2u;
        v8 = *(_DWORD *)(a1 + 1660);
      }
      if ( (v8 & 4) != 0 )
      {
        v9 = EtwpHostSiloState;
        v10 = *(_DWORD *)(EtwpHostSiloState + 4576) & 0xFFFFFFFB;
        *(_DWORD *)(EtwpHostSiloState + 4572) &= 0xFFFFEFFB;
        *(_DWORD *)(v9 + 4576) = v10 & 0xFFFFFDFF;
        EtwpUpdateGlobalGroupMasks(v9, 0, 9u);
        *(_DWORD *)(a1 + 1660) &= ~4u;
      }
      for ( i = 0LL; ; i = v15 )
      {
        NextProcess = PsGetNextProcess(i);
        v15 = NextProcess;
        if ( !NextProcess )
          break;
        v12 = NextProcess[318];
        if ( v12 )
        {
          v13 = KeGetCurrentThread();
          --v13->KernelApcDisable;
          ExAcquirePushLockExclusiveEx(v12 + 8, 0LL);
          *(_QWORD *)(v12 + 16) = KeGetCurrentThread();
          EtwpCovSampProcessCleanup(v12, 1);
          *(_QWORD *)(v12 + 16) = 0LL;
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v12 + 8), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)(v12 + 8));
          KeAbPostRelease(v12 + 8);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        }
      }
      EtwpCovSampCaptureContextStop(v7);
      *(_DWORD *)(a1 + 1660) &= ~1u;
    }
  }
  if ( (struct _KTHREAD *)qword_140C31868 == KeGetCurrentThread() )
  {
    qword_140C31868 = 0LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EtwpCovSampGlobals, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&EtwpCovSampGlobals);
    KeAbPostRelease((ULONG_PTR)&EtwpCovSampGlobals);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  if ( v3 )
    ObfDereferenceObject(v3);
  v16 = qword_140C06700;
  qword_140C06700 = 0LL;
  dword_140C066E0 = 0;
  return EtwUnregister(v16);
}
