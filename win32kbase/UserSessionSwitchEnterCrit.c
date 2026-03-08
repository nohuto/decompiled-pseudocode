/*
 * XREFs of UserSessionSwitchEnterCrit @ 0x1C00C3DD0
 * Callers:
 *     AcquireCriticalSectionAndCheckState @ 0x1C00CE9E0 (AcquireCriticalSectionAndCheckState.c)
 *     ?NtUserEnumDisplaySettingsExclusive@@YAJPEAU_UNICODE_STRING@@KPEAU_devicemodeW@@K@Z @ 0x1C0169140 (-NtUserEnumDisplaySettingsExclusive@@YAJPEAU_UNICODE_STRING@@KPEAU_devicemodeW@@K@Z.c)
 * Callees:
 *     IsThreadCrossSessionAttached @ 0x1C004B600 (IsThreadCrossSessionAttached.c)
 *     IsEtwUserCritEnabled @ 0x1C004DF60 (IsEtwUserCritEnabled.c)
 *     EtwTraceReleaseUserCrit @ 0x1C004E0F0 (EtwTraceReleaseUserCrit.c)
 *     ?UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z @ 0x1C004E1A8 (-UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z.c)
 *     DestroyExclusiveUserCritDeferredUnlockList @ 0x1C004E2E0 (DestroyExclusiveUserCritDeferredUnlockList.c)
 *     W32GetThreadWin32Thread @ 0x1C004E3B0 (W32GetThreadWin32Thread.c)
 *     ?SendUserCritSummary@UserCritTelemetry@@QEAAXXZ @ 0x1C004E418 (-SendUserCritSummary@UserCritTelemetry@@QEAAXXZ.c)
 *     _tlgKeywordOn @ 0x1C004E7C0 (_tlgKeywordOn.c)
 *     ?GetCount@AtomicExecutionCheck@@SAIXZ @ 0x1C004F93C (-GetCount@AtomicExecutionCheck@@SAIXZ.c)
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x1C004F968 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C004F99C (EtwTraceAcquiredExclusiveUserCrit.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C004FE50 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     HMUnlockObject @ 0x1C0072980 (HMUnlockObject.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00E1980 (memset.c)
 *     McTemplateK0xqx_EtwWriteTransfer @ 0x1C0167CA4 (McTemplateK0xqx_EtwWriteTransfer.c)
 */

__int64 __fastcall UserSessionSwitchEnterCrit(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  PVOID Reserved; // rdx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v6; // rax
  struct tagTHREADINFO **v7; // r14
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdi
  LARGE_INTEGER PerformanceCounter; // rsi
  __int64 v14; // rbx
  int v15; // r8d
  bool v16; // zf
  struct tagTHREADINFO *v17; // rbx
  __int64 v18; // rdx
  struct tagTHREADINFO *v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 CurrentProcessWin32Process; // rax
  __int64 *v23; // rbx
  __int64 v25; // rax
  __int64 CurrentProcess; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  unsigned int Count; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  PVOID v44; // rdx
  LARGE_INTEGER *v45; // rbx
  __int64 v46; // rax
  struct tagTHREADINFO **v47; // r14
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // rdi
  LARGE_INTEGER v53; // rsi
  __int64 v54; // rbx
  int v55; // r8d
  struct tagTHREADINFO *v56; // rbx
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 *v59; // rbx
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-78h]
  PLARGE_INTEGER Timeouta; // [rsp+20h] [rbp-78h]

  if ( dword_1C02C93D8 && tlgKeywordOn((__int64)&dword_1C02C93D8, 0x400000000000LL)
    || (Reserved = WPP_MAIN_CB.Reserved, ((unsigned __int64)WPP_MAIN_CB.Reserved & 0x8000002010000000uLL) != 0)
    && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
    && (qword_1C02C4050 & 0x8000002010000000uLL) != 0
    && (qword_1C02C4058 & 0x8000002010000000uLL) == qword_1C02C4058
    || ((__int64)WPP_MAIN_CB.Reserved & 0x200000010000000LL) != 0
    && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
    && (qword_1C02C4050 & 0x200000010000000LL) != 0
    && (qword_1C02C4058 & 0x200000010000000LL) == qword_1C02C4058 )
  {
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, Reserved, a3, a4, Timeout);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  }
  v6 = SGDGetUserSessionState(a1, Reserved, a3, a4);
  v7 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(*(PERESOURCE *)(v6 + 8));
  if ( !v7 )
  {
    EtwTraceAcquiredExclusiveUserCrit();
LABEL_37:
    gptiCurrent = 0LL;
    goto LABEL_23;
  }
  if ( IsEtwUserCritEnabled() )
  {
    v12 = PsGetCurrentThreadWin32Thread(v9, v8, v10, v11, Timeout);
    if ( v12 )
    {
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      v14 = PerformanceCounter.QuadPart - *(_QWORD *)(v12 + 8);
      if ( (dword_1C02D1900 & 1) == 0 )
      {
        dword_1C02D1900 |= 1u;
        memset(stru_1C02D1910, 0, sizeof(stru_1C02D1910));
        word_1C02D2A38 = 0;
        byte_1C02D2A3A = 0;
        memset(&unk_1C02D2A40, 0, 0x168uLL);
        qword_1C02D2BB8 = 0LL;
        qword_1C02D2BD0 = 0LL;
        xmmword_1C02D2BA8 = 0LL;
        qword_1C02D2BE8 = 0LL;
        xmmword_1C02D2BC0 = 0LL;
        xmmword_1C02D2BF0 = 0uLL;
        xmmword_1C02D2BD8 = 0LL;
      }
      UserCritTelemetry::UpdateUserCritInfo((__int64)stru_1C02D1910, v14, 0);
      if ( (dword_1C02D1900 & 1) == 0 )
      {
        dword_1C02D1900 |= 1u;
        memset(stru_1C02D1910, 0, sizeof(stru_1C02D1910));
        word_1C02D2A38 = 0;
        byte_1C02D2A3A = 0;
        memset(&unk_1C02D2A40, 0, 0x168uLL);
        qword_1C02D2BB8 = 0LL;
        qword_1C02D2BD0 = 0LL;
        xmmword_1C02D2BA8 = 0LL;
        qword_1C02D2BE8 = 0LL;
        xmmword_1C02D2BC0 = 0LL;
        xmmword_1C02D2BF0 = 0uLL;
        xmmword_1C02D2BD8 = 0LL;
      }
      UserCritTelemetry::SendUserCritSummary(stru_1C02D1910);
      v16 = ((__int64)WPP_MAIN_CB.Reserved & 0x200000010000000LL) == 0;
      *(LARGE_INTEGER *)(v12 + 8) = PerformanceCounter;
      if ( !v16
        && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
        && (qword_1C02C4050 & 0x200000010000000LL) != 0
        && (qword_1C02C4058 & 0x200000010000000LL) == qword_1C02C4058
        && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
      {
        McTemplateK0xqx_EtwWriteTransfer(
          gullUserCritAcquireToken,
          (unsigned int)&AcquiredExclusiveUserCritEvent,
          v15,
          v14,
          1000000 * v14 / gliQpcFreq.QuadPart,
          gullUserCritAcquireToken);
      }
      if ( v14 >= *(__int64 *)&WPP_MAIN_CB.SectorSize
        && (signed __int64)(PerformanceCounter.QuadPart
                          - (unsigned __int64)WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink) >= W32KEtwUserCritTelemetryThrottleQPC )
      {
        if ( (Microsoft_Windows_Win32kEnableBits & 0x1000000000LL) != 0 )
          McTemplateK0xqx_EtwWriteTransfer(
            gullUserCritAcquireToken,
            (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
            v15,
            v14,
            1000 * v14 / gliQpcFreq.QuadPart,
            gullUserCritAcquireToken);
        WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink = (struct _LIST_ENTRY *)PerformanceCounter.QuadPart;
      }
      *(_QWORD *)(v12 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
    }
  }
  v17 = *v7;
  if ( IsThreadCrossSessionAttached() )
    goto LABEL_37;
  gptiCurrent = v17;
  if ( v17 )
  {
    *((_DWORD *)v17 + 387) = 1;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v19);
    if ( CurrentProcessWin32Process )
    {
      if ( *(_QWORD *)CurrentProcessWin32Process )
      {
        if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
        {
          v19 = gptiCurrent;
          if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0 && (*((_DWORD *)gptiCurrent + 318) & 0x80u) == 0 )
          {
            while ( 1 )
            {
              v23 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
              if ( !gpSharedUserCritDeferredUnlockListHead )
                break;
              gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                           + 2);
              v25 = *v23;
              v23[2] = 0LL;
              if ( !*(_DWORD *)(v25 + 8) )
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4237LL);
              HMUnlockObject(*v23);
            }
          }
        }
      }
    }
  }
LABEL_23:
  while ( HIDWORD(WPP_MAIN_CB.Dpc.DeferredRoutine) )
  {
    CurrentProcess = PsGetCurrentProcess(v19, v18, v20, v21);
    if ( CurrentProcess && CurrentProcess == *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels )
      return 0LL;
    ++gcSwitchInProgressWaiters;
    if ( qword_1C02D71D0 )
      qword_1C02D71D0(v28, v27, v29, v30);
    if ( IS_USERCRIT_OWNED_EXCLUSIVE(v28, v27, v29, v30) )
    {
      if ( gcInHMDestroyUnlockedObjectWorker )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 1206LL);
      if ( gphePrimaryDestroyTarget )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1214LL);
      if ( gcDeferredDestroyTargets > gcSecondaryDestroyTargets )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1220LL);
      gcInHMDestroyUnlockedObjectWorker = 0;
      gphePrimaryDestroyTarget = 0LL;
      DestroyExclusiveUserCritDeferredUnlockList();
    }
    Count = AtomicExecutionCheck::GetCount();
    if ( Count )
    {
      if ( (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, Count, 0LL, 0LL, 0LL);
      DbgkWerCaptureLiveKernelDump(L"NTUSER", 400LL, 37LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
    }
    if ( gptiCurrent && W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) )
      *((_DWORD *)PtiCurrentShared(v33, v32, v34, v35) + 387) = 0;
    gptiCurrent = 0LL;
    EtwTraceReleaseUserCrit();
    v40 = SGDGetUserSessionState(v37, v36, v38, v39);
    ExReleaseResourceAndLeaveCriticalRegion(*(PERESOURCE *)(v40 + 8));
    KeWaitForSingleObject(gpsemSwitchInProgressWaiters, UserRequest, 0, 0, 0LL);
    if ( dword_1C02C93D8 && tlgKeywordOn((__int64)&dword_1C02C93D8, 0x400000000000LL)
      || (v44 = WPP_MAIN_CB.Reserved, ((unsigned __int64)WPP_MAIN_CB.Reserved & 0x8000002010000000uLL) != 0)
      && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
      && (qword_1C02C4050 & 0x8000002010000000uLL) != 0
      && (qword_1C02C4058 & 0x8000002010000000uLL) == qword_1C02C4058
      || ((__int64)WPP_MAIN_CB.Reserved & 0x200000010000000LL) != 0
      && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
      && (qword_1C02C4050 & 0x200000010000000LL) != 0
      && (qword_1C02C4058 & 0x200000010000000LL) == qword_1C02C4058 )
    {
      v45 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v41, v44, v42, v43, Timeouta);
      if ( v45 )
        v45[1] = KeQueryPerformanceCounter(0LL);
    }
    v46 = SGDGetUserSessionState(v41, v44, v42, v43);
    v47 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(*(PERESOURCE *)(v46 + 8));
    if ( v47 )
    {
      if ( IsEtwUserCritEnabled() )
      {
        v52 = PsGetCurrentThreadWin32Thread(v49, v48, v50, v51, Timeouta);
        if ( v52 )
        {
          v53 = KeQueryPerformanceCounter(0LL);
          v54 = v53.QuadPart - *(_QWORD *)(v52 + 8);
          if ( (dword_1C02D1900 & 1) == 0 )
          {
            dword_1C02D1900 |= 1u;
            memset(stru_1C02D1910, 0, sizeof(stru_1C02D1910));
            word_1C02D2A38 = 0;
            byte_1C02D2A3A = 0;
            memset(&unk_1C02D2A40, 0, 0x168uLL);
            qword_1C02D2BB8 = 0LL;
            qword_1C02D2BD0 = 0LL;
            xmmword_1C02D2BA8 = 0LL;
            qword_1C02D2BE8 = 0LL;
            xmmword_1C02D2BC0 = 0LL;
            xmmword_1C02D2BF0 = 0uLL;
            xmmword_1C02D2BD8 = 0LL;
          }
          UserCritTelemetry::UpdateUserCritInfo((__int64)stru_1C02D1910, v54, 0);
          if ( (dword_1C02D1900 & 1) == 0 )
          {
            dword_1C02D1900 |= 1u;
            memset(stru_1C02D1910, 0, sizeof(stru_1C02D1910));
            word_1C02D2A38 = 0;
            byte_1C02D2A3A = 0;
            memset(&unk_1C02D2A40, 0, 0x168uLL);
            qword_1C02D2BB8 = 0LL;
            qword_1C02D2BD0 = 0LL;
            xmmword_1C02D2BA8 = 0LL;
            qword_1C02D2BE8 = 0LL;
            xmmword_1C02D2BC0 = 0LL;
            xmmword_1C02D2BF0 = 0uLL;
            xmmword_1C02D2BD8 = 0LL;
          }
          UserCritTelemetry::SendUserCritSummary(stru_1C02D1910);
          v16 = ((__int64)WPP_MAIN_CB.Reserved & 0x200000010000000LL) == 0;
          *(LARGE_INTEGER *)(v52 + 8) = v53;
          if ( !v16
            && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
            && (qword_1C02C4050 & 0x200000010000000LL) != 0
            && (qword_1C02C4058 & 0x200000010000000LL) == qword_1C02C4058
            && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
          {
            McTemplateK0xqx_EtwWriteTransfer(
              gullUserCritAcquireToken,
              (unsigned int)&AcquiredExclusiveUserCritEvent,
              v55,
              v54,
              1000000 * v54 / gliQpcFreq.QuadPart,
              gullUserCritAcquireToken);
          }
          if ( v54 >= *(__int64 *)&WPP_MAIN_CB.SectorSize
            && (signed __int64)(v53.QuadPart - (unsigned __int64)WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink) >= W32KEtwUserCritTelemetryThrottleQPC )
          {
            if ( (Microsoft_Windows_Win32kEnableBits & 0x1000000000LL) != 0 )
              McTemplateK0xqx_EtwWriteTransfer(
                gullUserCritAcquireToken,
                (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
                v55,
                v54,
                1000 * v54 / gliQpcFreq.QuadPart,
                gullUserCritAcquireToken);
            WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink = (struct _LIST_ENTRY *)v53.QuadPart;
          }
          *(_QWORD *)(v52 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
        }
      }
      v56 = *v47;
      if ( !IsThreadCrossSessionAttached() )
      {
        gptiCurrent = v56;
        if ( v56 )
        {
          *((_DWORD *)v56 + 387) = 1;
          v57 = PsGetCurrentProcessWin32Process(v19);
          if ( v57 )
          {
            if ( *(_QWORD *)v57 )
            {
              if ( (*(_DWORD *)(v57 + 12) & 0x8000) != 0 )
              {
                v19 = gptiCurrent;
                if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0 && (*((_DWORD *)gptiCurrent + 318) & 0x80u) == 0 )
                {
                  while ( 1 )
                  {
                    v59 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
                    if ( !gpSharedUserCritDeferredUnlockListHead )
                      break;
                    gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                                 + 2);
                    v58 = *v59;
                    v59[2] = 0LL;
                    if ( !*(_DWORD *)(v58 + 8) )
                      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4237LL);
                    HMUnlockObject(*v59);
                  }
                }
              }
            }
          }
        }
        continue;
      }
    }
    else
    {
      EtwTraceAcquiredExclusiveUserCrit();
    }
    gptiCurrent = 0LL;
  }
  return 0LL;
}
