/*
 * XREFs of ?xxxDwmProcessShutdown@@YAJH@Z @ 0x1C008F854
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C0072BF4 (xxxDestroyThreadInfo.c)
 *     NtUserUnregisterSessionPort @ 0x1C017A220 (NtUserUnregisterSessionPort.c)
 * Callees:
 *     IsThreadCrossSessionAttached @ 0x1C004B600 (IsThreadCrossSessionAttached.c)
 *     IsEtwUserCritEnabled @ 0x1C004DF60 (IsEtwUserCritEnabled.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004E000 (UserSessionSwitchLeaveCrit.c)
 *     ?UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z @ 0x1C004E1A8 (-UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z.c)
 *     ?SendUserCritSummary@UserCritTelemetry@@QEAAXXZ @ 0x1C004E418 (-SendUserCritSummary@UserCritTelemetry@@QEAAXXZ.c)
 *     _tlgKeywordOn @ 0x1C004E7C0 (_tlgKeywordOn.c)
 *     ?GetCount@AtomicExecutionCheck@@SAIXZ @ 0x1C004F93C (-GetCount@AtomicExecutionCheck@@SAIXZ.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C004F99C (EtwTraceAcquiredExclusiveUserCrit.c)
 *     HMUnlockObject @ 0x1C0072980 (HMUnlockObject.c)
 *     IsUserEnableConsoleModeSupported @ 0x1C0090C30 (IsUserEnableConsoleModeSupported.c)
 *     xxxDwmControl @ 0x1C0090CE0 (xxxDwmControl.c)
 *     ?SetDwmApiPort@@YAXPEAX@Z @ 0x1C0090E3C (-SetDwmApiPort@@YAXPEAX@Z.c)
 *     GreLockDwmState @ 0x1C0091A70 (GreLockDwmState.c)
 *     GreUnlockDwmState @ 0x1C0091AF0 (GreUnlockDwmState.c)
 *     IsxxxDwmStopRedirectionSupported @ 0x1C0091F34 (IsxxxDwmStopRedirectionSupported.c)
 *     GreSfmCleanupPresentHistory @ 0x1C0091F60 (GreSfmCleanupPresentHistory.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00E1980 (memset.c)
 *     McTemplateK0xqx_EtwWriteTransfer @ 0x1C0167CA4 (McTemplateK0xqx_EtwWriteTransfer.c)
 *     UserEnableConsoleMode @ 0x1C02720EC (UserEnableConsoleMode.c)
 */

__int64 __fastcall xxxDwmProcessShutdown(unsigned int a1)
{
  unsigned int v2; // ebp
  unsigned int v3; // r15d
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned int CurrentProcessId; // eax
  unsigned int Count; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rcx
  __int64 v16; // r9
  __int64 v17; // r8
  PVOID Reserved; // rdx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v20; // rax
  struct tagTHREADINFO **v21; // r14
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdi
  LARGE_INTEGER PerformanceCounter; // rsi
  __int64 v28; // rbx
  int v29; // r8d
  struct tagTHREADINFO *v30; // rbx
  __int64 v31; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 *i; // rbx
  __int64 v34; // rax
  __int64 v35; // r8
  __int64 v36; // r9
  PVOID v37; // rdx
  __int64 v38; // rcx
  LARGE_INTEGER *v39; // rbx
  __int64 v40; // rax
  struct tagTHREADINFO **v41; // r14
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rdi
  LARGE_INTEGER v47; // rsi
  __int64 v48; // rbx
  int v49; // r8d
  struct tagTHREADINFO *v50; // rbx
  __int64 v51; // rcx
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 *v54; // rbx
  ULONG_PTR BugCheckParameter4; // [rsp+20h] [rbp-68h]
  __int64 v56; // [rsp+A0h] [rbp+18h] BYREF

  v56 = 0LL;
  v2 = 0;
  if ( (int)DxgkGetSessionTokenManager(&v56) >= 0 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v56 + 96LL))(v56);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v56 + 200LL))(v56);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v56 + 8LL))(v56);
  }
  v3 = a1;
  if ( HIDWORD(WPP_MAIN_CB.Queue.Wcb.DeviceRoutine) )
    v3 = 0;
  if ( (int)IsxxxDwmStopRedirectionSupported() >= 0 )
  {
    if ( qword_1C02D7300 )
      v2 = qword_1C02D7300(a1);
    else
      v2 = -1073741637;
  }
  Count = AtomicExecutionCheck::GetCount();
  if ( Count )
  {
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, Count, 0LL, 0LL, 0LL);
    DbgkWerCaptureLiveKernelDump(L"NTUSER", 400LL, 37LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
  }
  UserSessionSwitchLeaveCrit(v12, v11, v13, v14);
  GreSfmCleanupPresentHistory();
  v17 = 2LL;
  if ( dword_1C02C93D8 && tlgKeywordOn((__int64)&dword_1C02C93D8, 0x400000000000LL)
    || (Reserved = WPP_MAIN_CB.Reserved, ((unsigned __int64)WPP_MAIN_CB.Reserved & 0x8000002010000000uLL) != 0)
    && (unsigned __int8)(byte_1C02C4068 - 1) > (unsigned __int8)v17
    && (qword_1C02C4050 & 0x8000002010000000uLL) != 0
    && (qword_1C02C4058 & 0x8000002010000000uLL) == qword_1C02C4058
    || ((__int64)WPP_MAIN_CB.Reserved & 0x200000010000000LL) != 0
    && (unsigned __int8)(byte_1C02C4068 - 1) > (unsigned __int8)v17
    && (qword_1C02C4050 & 0x200000010000000LL) != 0
    && (qword_1C02C4058 & 0x200000010000000LL) == qword_1C02C4058 )
  {
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(
                                                  v15,
                                                  Reserved,
                                                  v17,
                                                  v16,
                                                  BugCheckParameter4);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  }
  v20 = SGDGetUserSessionState(v15, Reserved, v17, v16);
  v21 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(*(PERESOURCE *)(v20 + 8));
  if ( !v21 )
  {
    EtwTraceAcquiredExclusiveUserCrit();
LABEL_33:
    gptiCurrent = 0LL;
    goto LABEL_8;
  }
  if ( IsEtwUserCritEnabled() )
  {
    v26 = PsGetCurrentThreadWin32Thread(v23, v22, v24, v25, BugCheckParameter4);
    if ( v26 )
    {
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      v28 = PerformanceCounter.QuadPart - *(_QWORD *)(v26 + 8);
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
      UserCritTelemetry::UpdateUserCritInfo((__int64)stru_1C02D1910, v28, 0);
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
      *(LARGE_INTEGER *)(v26 + 8) = PerformanceCounter;
      if ( ((__int64)WPP_MAIN_CB.Reserved & 0x200000010000000LL) != 0
        && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
        && (qword_1C02C4050 & 0x200000010000000LL) != 0
        && (qword_1C02C4058 & 0x200000010000000LL) == qword_1C02C4058
        && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
      {
        McTemplateK0xqx_EtwWriteTransfer(
          gullUserCritAcquireToken,
          (unsigned int)&AcquiredExclusiveUserCritEvent,
          v29,
          v28,
          1000000 * v28 / gliQpcFreq.QuadPart,
          gullUserCritAcquireToken);
      }
      if ( v28 >= *(__int64 *)&WPP_MAIN_CB.SectorSize
        && (signed __int64)(PerformanceCounter.QuadPart
                          - (unsigned __int64)WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink) >= W32KEtwUserCritTelemetryThrottleQPC )
      {
        if ( (Microsoft_Windows_Win32kEnableBits & 0x1000000000LL) != 0 )
          McTemplateK0xqx_EtwWriteTransfer(
            gullUserCritAcquireToken,
            (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
            v29,
            v28,
            1000 * v28 / gliQpcFreq.QuadPart,
            gullUserCritAcquireToken);
        WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink = (struct _LIST_ENTRY *)PerformanceCounter.QuadPart;
      }
      *(_QWORD *)(v26 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
    }
  }
  v30 = *v21;
  if ( IsThreadCrossSessionAttached() )
    goto LABEL_33;
  gptiCurrent = v30;
  if ( v30 )
  {
    *((_DWORD *)v30 + 387) = 1;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v31);
    if ( CurrentProcessWin32Process )
    {
      if ( *(_QWORD *)CurrentProcessWin32Process )
      {
        if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0
          && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
          && (*((_DWORD *)gptiCurrent + 318) & 0x80u) == 0 )
        {
          for ( i = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
                gpSharedUserCritDeferredUnlockListHead;
                i = (__int64 *)gpSharedUserCritDeferredUnlockListHead )
          {
            gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)i[2];
            v34 = *i;
            i[2] = 0LL;
            if ( !*(_DWORD *)(v34 + 8) )
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4237LL);
            HMUnlockObject(*i);
          }
        }
      }
    }
  }
LABEL_8:
  GreLockDwmState();
  SetDwmApiPort(0LL);
  if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels )
  {
    ObfDereferenceObject(*(PVOID *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
    *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels = 0LL;
  }
  GreUnlockDwmState();
  if ( (int)IsUserEnableConsoleModeSupported() >= 0 )
  {
    UserSessionSwitchLeaveCrit(v5, v4, v6, v7);
    v2 = UserEnableConsoleMode(1LL);
    if ( dword_1C02C93D8 && tlgKeywordOn((__int64)&dword_1C02C93D8, 0x400000000000LL)
      || (v37 = WPP_MAIN_CB.Reserved, v38 = 2LL, ((unsigned __int64)WPP_MAIN_CB.Reserved & 0x8000002010000000uLL) != 0)
      && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
      && (qword_1C02C4050 & 0x8000002010000000uLL) != 0
      && (qword_1C02C4058 & 0x8000002010000000uLL) == qword_1C02C4058
      || ((__int64)WPP_MAIN_CB.Reserved & 0x200000010000000LL) != 0
      && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
      && (qword_1C02C4050 & 0x200000010000000LL) != 0
      && (qword_1C02C4058 & 0x200000010000000LL) == qword_1C02C4058 )
    {
      v39 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v38, v37, v35, v36, BugCheckParameter4);
      if ( v39 )
        v39[1] = KeQueryPerformanceCounter(0LL);
    }
    v40 = SGDGetUserSessionState(v38, v37, v35, v36);
    v41 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(*(PERESOURCE *)(v40 + 8));
    if ( v41 )
    {
      if ( IsEtwUserCritEnabled() )
      {
        v46 = PsGetCurrentThreadWin32Thread(v43, v42, v44, v45, BugCheckParameter4);
        if ( v46 )
        {
          v47 = KeQueryPerformanceCounter(0LL);
          v48 = v47.QuadPart - *(_QWORD *)(v46 + 8);
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
          UserCritTelemetry::UpdateUserCritInfo((__int64)stru_1C02D1910, v48, 0);
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
          *(LARGE_INTEGER *)(v46 + 8) = v47;
          if ( ((__int64)WPP_MAIN_CB.Reserved & 0x200000010000000LL) != 0
            && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
            && (qword_1C02C4050 & 0x200000010000000LL) != 0
            && (qword_1C02C4058 & 0x200000010000000LL) == qword_1C02C4058
            && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
          {
            McTemplateK0xqx_EtwWriteTransfer(
              gullUserCritAcquireToken,
              (unsigned int)&AcquiredExclusiveUserCritEvent,
              v49,
              v48,
              1000000 * v48 / gliQpcFreq.QuadPart,
              gullUserCritAcquireToken);
          }
          if ( v48 >= *(__int64 *)&WPP_MAIN_CB.SectorSize
            && (signed __int64)(v47.QuadPart - (unsigned __int64)WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink) >= W32KEtwUserCritTelemetryThrottleQPC )
          {
            if ( (Microsoft_Windows_Win32kEnableBits & 0x1000000000LL) != 0 )
              McTemplateK0xqx_EtwWriteTransfer(
                gullUserCritAcquireToken,
                (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
                v49,
                v48,
                1000 * v48 / gliQpcFreq.QuadPart,
                gullUserCritAcquireToken);
            WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink = (struct _LIST_ENTRY *)v47.QuadPart;
          }
          *(_QWORD *)(v46 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
        }
      }
      v50 = *v41;
      if ( !IsThreadCrossSessionAttached() )
      {
        gptiCurrent = v50;
        if ( v50 )
        {
          *((_DWORD *)v50 + 387) = 1;
          v52 = PsGetCurrentProcessWin32Process(v51);
          if ( v52 )
          {
            if ( *(_QWORD *)v52
              && (*(_DWORD *)(v52 + 12) & 0x8000) != 0
              && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
              && (*((_DWORD *)gptiCurrent + 318) & 0x80u) == 0 )
            {
              while ( 1 )
              {
                v54 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
                if ( !gpSharedUserCritDeferredUnlockListHead )
                  break;
                gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                             + 2);
                v53 = *v54;
                v54[2] = 0LL;
                if ( !*(_DWORD *)(v53 + 8) )
                  MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4237LL);
                HMUnlockObject(*v54);
              }
            }
          }
        }
        goto LABEL_11;
      }
    }
    else
    {
      EtwTraceAcquiredExclusiveUserCrit();
    }
    gptiCurrent = 0LL;
  }
LABEL_11:
  HIDWORD(WPP_MAIN_CB.Queue.Wcb.DeviceRoutine) = 0;
  if ( v3 )
  {
    CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
    xxxDwmControl(1036LL, CurrentProcessId);
  }
  return v2;
}
