/*
 * XREFs of UserThreadCallout @ 0x1C0074BD0
 * Callers:
 *     <none>
 * Callees:
 *     IsThreadCrossSessionAttached @ 0x1C004B600 (IsThreadCrossSessionAttached.c)
 *     IsEtwUserCritEnabled @ 0x1C004DF60 (IsEtwUserCritEnabled.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004E000 (UserSessionSwitchLeaveCrit.c)
 *     ?UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z @ 0x1C004E1A8 (-UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C004E3B0 (W32GetThreadWin32Thread.c)
 *     ?SendUserCritSummary@UserCritTelemetry@@QEAAXXZ @ 0x1C004E418 (-SendUserCritSummary@UserCritTelemetry@@QEAAXXZ.c)
 *     _tlgKeywordOn @ 0x1C004E7C0 (_tlgKeywordOn.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C004F99C (EtwTraceAcquiredExclusiveUserCrit.c)
 *     HMUnlockObject @ 0x1C0072980 (HMUnlockObject.c)
 *     GreCleanDC @ 0x1C0072B90 (GreCleanDC.c)
 *     xxxDestroyThreadInfo @ 0x1C0072BF4 (xxxDestroyThreadInfo.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RtlGetExpWinVer @ 0x1C007529C (RtlGetExpWinVer.c)
 *     xxxCreateThreadInfo @ 0x1C0076490 (xxxCreateThreadInfo.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x1C00E1980 (memset.c)
 *     McTemplateK0xqx_EtwWriteTransfer @ 0x1C0167CA4 (McTemplateK0xqx_EtwWriteTransfer.c)
 */

__int64 __fastcall UserThreadCallout(PETHREAD Thread, __int64 a2)
{
  struct _KTHREAD *v2; // rbp
  _UNKNOWN **v3; // r8
  unsigned int ThreadInfo; // edi
  void *v5; // r9
  char v6; // bl
  PDEVICE_OBJECT v7; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 v9; // rcx
  __int64 v10; // r9
  __int64 v11; // rdi
  PEPROCESS ThreadProcess; // rax
  PEPROCESS v13; // rsi
  __int64 ProcessSectionBaseAddress; // rax
  unsigned __int64 v15; // rdx
  PVOID Reserved; // r8
  LARGE_INTEGER *CurrentThreadWin32Thread; // rsi
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // r15
  LARGE_INTEGER PerformanceCounter; // r12
  __int64 v25; // rsi
  int v26; // r8d
  bool v27; // zf
  struct tagTHREADINFO *v28; // rdi
  __int64 v29; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  PDEVICE_OBJECT v36; // rcx
  unsigned __int64 v37; // rdx
  PVOID v38; // r8
  LARGE_INTEGER *v39; // rsi
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // r15
  LARGE_INTEGER v46; // r12
  __int64 v47; // rsi
  int v48; // r8d
  struct tagTHREADINFO *v49; // rdi
  __int64 v50; // rcx
  __int64 v51; // rax
  __int64 *v52; // rdi
  __int64 v53; // rdi
  __int64 *v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 *v61; // rdi
  __int64 v62; // [rsp+20h] [rbp-68h]
  struct tagTHREADINFO **v64; // [rsp+A0h] [rbp+18h]
  struct tagTHREADINFO **v65; // [rsp+A8h] [rbp+20h]

  v2 = Thread;
  v3 = &WPP_RECORDER_INITIALIZED;
  ThreadInfo = 0;
  v5 = &WPP_d82075a5283f313a7450cbd9ac983c1d_Traceguids;
  v6 = 1;
  if ( !(_DWORD)a2 )
  {
    v7 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000) == 0
      || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(a2) = 0;
    }
    LOBYTE(v3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        a2,
        (_DWORD)v3,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        4,
        14,
        26,
        (__int64)&WPP_d82075a5283f313a7450cbd9ac983c1d_Traceguids);
    if ( *(_DWORD *)(SGDGetUserSessionState(v7, a2, v3, v5) + 2940) )
      return 3221225473LL;
    if ( !gbUserInitialized )
    {
      _interlockedbittestandset((volatile signed __int32 *)(W32GetThreadWin32Thread((__int64)v2) + 1272), 0);
      goto LABEL_37;
    }
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(v2);
    if ( ThreadWin32Thread )
    {
      v11 = *ThreadWin32Thread;
      if ( *ThreadWin32Thread )
      {
        ThreadProcess = PsGetThreadProcess(v2);
        v13 = ThreadProcess;
        if ( ThreadProcess && PsGetProcessPeb(ThreadProcess) )
        {
          ProcessSectionBaseAddress = PsGetProcessSectionBaseAddress(v13);
          *(_DWORD *)(v11 + 632) = RtlGetExpWinVer(ProcessSectionBaseAddress);
        }
        else
        {
          *(_DWORD *)(v11 + 632) = 0;
        }
      }
    }
    if ( dword_1C02C93D8 && tlgKeywordOn((__int64)&dword_1C02C93D8, 0x400000000000LL)
      || (Reserved = WPP_MAIN_CB.Reserved,
          v15 = 0x8000002010000000uLL,
          ((unsigned __int64)WPP_MAIN_CB.Reserved & 0x8000002010000000uLL) != 0)
      && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
      && (qword_1C02C4050 & 0x8000002010000000uLL) != 0
      && (qword_1C02C4058 & 0x8000002010000000uLL) == qword_1C02C4058
      || ((__int64)WPP_MAIN_CB.Reserved & 0x200000010000000LL) != 0
      && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
      && (qword_1C02C4050 & 0x200000010000000LL) != 0
      && (qword_1C02C4058 & 0x200000010000000LL) == qword_1C02C4058 )
    {
      CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v9, v15, Reserved, v10, v62);
      if ( CurrentThreadWin32Thread )
        CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    }
    v18 = SGDGetUserSessionState(v9, v15, Reserved, v10);
    v64 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(*(PERESOURCE *)(v18 + 8));
    if ( v64 )
    {
      if ( IsEtwUserCritEnabled() )
      {
        v23 = PsGetCurrentThreadWin32Thread(v20, v19, v21, v22, v62);
        if ( v23 )
        {
          PerformanceCounter = KeQueryPerformanceCounter(0LL);
          v25 = PerformanceCounter.QuadPart - *(_QWORD *)(v23 + 8);
          if ( (dword_1C02D1900 & 1) == 0 )
          {
            dword_1C02D1900 |= 1u;
            memset(stru_1C02D1910, 0, sizeof(stru_1C02D1910));
            word_1C02D2A38 = 0;
            byte_1C02D2A3A = 0;
            memset(&unk_1C02D2A40, 0, 0x168uLL);
            qword_1C02D2BB8 = 0LL;
            xmmword_1C02D2BA8 = 0LL;
            qword_1C02D2BD0 = 0LL;
            xmmword_1C02D2BC0 = 0LL;
            qword_1C02D2BE8 = 0LL;
            xmmword_1C02D2BD8 = 0LL;
            xmmword_1C02D2BF0 = 0uLL;
          }
          UserCritTelemetry::UpdateUserCritInfo((__int64)stru_1C02D1910, v25, 0);
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
          v27 = ((__int64)WPP_MAIN_CB.Reserved & 0x200000010000000LL) == 0;
          *(LARGE_INTEGER *)(v23 + 8) = PerformanceCounter;
          if ( !v27
            && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
            && (qword_1C02C4050 & 0x200000010000000LL) != 0
            && (qword_1C02C4058 & 0x200000010000000LL) == qword_1C02C4058
            && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
          {
            McTemplateK0xqx_EtwWriteTransfer(
              gullUserCritAcquireToken,
              (unsigned int)&AcquiredExclusiveUserCritEvent,
              v26,
              v25,
              1000000 * v25 / gliQpcFreq.QuadPart,
              gullUserCritAcquireToken);
          }
          if ( v25 >= *(__int64 *)&WPP_MAIN_CB.SectorSize
            && (signed __int64)(PerformanceCounter.QuadPart
                              - (unsigned __int64)WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink) >= W32KEtwUserCritTelemetryThrottleQPC )
          {
            if ( (Microsoft_Windows_Win32kEnableBits & 0x1000000000LL) != 0 )
              McTemplateK0xqx_EtwWriteTransfer(
                gullUserCritAcquireToken,
                (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
                v26,
                v25,
                1000 * v25 / gliQpcFreq.QuadPart,
                gullUserCritAcquireToken);
            WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink = (struct _LIST_ENTRY *)PerformanceCounter.QuadPart;
          }
          v2 = Thread;
          *(_QWORD *)(v23 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
        }
      }
      v28 = *v64;
      if ( !IsThreadCrossSessionAttached() )
      {
        gptiCurrent = v28;
        if ( v28 )
        {
          *((_DWORD *)v28 + 387) = 1;
          CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v29);
          if ( CurrentProcessWin32Process )
          {
            if ( *(_QWORD *)CurrentProcessWin32Process
              && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0
              && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
              && (*((_DWORD *)gptiCurrent + 318) & 0x80u) == 0 )
            {
              while ( 1 )
              {
                v61 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
                if ( !gpSharedUserCritDeferredUnlockListHead )
                  break;
                gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                             + 2);
                v60 = *v61;
                v61[2] = 0LL;
                if ( !*(_DWORD *)(v60 + 8) )
                  MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4237LL);
                HMUnlockObject(*v61);
              }
            }
          }
        }
        goto LABEL_36;
      }
    }
    else
    {
      EtwTraceAcquiredExclusiveUserCrit();
    }
    gptiCurrent = 0LL;
LABEL_36:
    ThreadInfo = xxxCreateThreadInfo(v2);
    UserSessionSwitchLeaveCrit(v32, v31, v33, v34);
LABEL_37:
    v3 = &WPP_RECORDER_INITIALIZED;
    goto LABEL_38;
  }
  if ( (_DWORD)a2 == 1 )
  {
    v36 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000) == 0
      || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(a2) = 0;
    }
    if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        a2,
        (_DWORD)v3,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        4,
        14,
        27,
        (__int64)&WPP_d82075a5283f313a7450cbd9ac983c1d_Traceguids);
    }
    if ( dword_1C02C93D8 && tlgKeywordOn((__int64)&dword_1C02C93D8, 0x400000000000LL)
      || (v38 = WPP_MAIN_CB.Reserved,
          v37 = 0x8000002010000000uLL,
          ((unsigned __int64)WPP_MAIN_CB.Reserved & 0x8000002010000000uLL) != 0)
      && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
      && (qword_1C02C4050 & 0x8000002010000000uLL) != 0
      && (qword_1C02C4058 & 0x8000002010000000uLL) == qword_1C02C4058
      || ((__int64)WPP_MAIN_CB.Reserved & 0x200000010000000LL) != 0
      && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
      && (qword_1C02C4050 & 0x200000010000000LL) != 0
      && (qword_1C02C4058 & 0x200000010000000LL) == qword_1C02C4058 )
    {
      v39 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v36, v37, v38, v5, v62);
      if ( v39 )
        v39[1] = KeQueryPerformanceCounter(0LL);
    }
    v40 = SGDGetUserSessionState(v36, v37, v38, v5);
    v65 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(*(PERESOURCE *)(v40 + 8));
    if ( v65 )
    {
      if ( IsEtwUserCritEnabled() )
      {
        v45 = PsGetCurrentThreadWin32Thread(v42, v41, v43, v44, v62);
        if ( v45 )
        {
          v46 = KeQueryPerformanceCounter(0LL);
          v47 = v46.QuadPart - *(_QWORD *)(v45 + 8);
          if ( (dword_1C02D1900 & 1) == 0 )
          {
            dword_1C02D1900 |= 1u;
            memset(stru_1C02D1910, 0, sizeof(stru_1C02D1910));
            word_1C02D2A38 = 0;
            byte_1C02D2A3A = 0;
            memset(&unk_1C02D2A40, 0, 0x168uLL);
            qword_1C02D2BB8 = 0LL;
            xmmword_1C02D2BA8 = 0LL;
            qword_1C02D2BD0 = 0LL;
            xmmword_1C02D2BC0 = 0LL;
            qword_1C02D2BE8 = 0LL;
            xmmword_1C02D2BD8 = 0LL;
            xmmword_1C02D2BF0 = 0uLL;
          }
          UserCritTelemetry::UpdateUserCritInfo((__int64)stru_1C02D1910, v47, 0);
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
          v27 = ((__int64)WPP_MAIN_CB.Reserved & 0x200000010000000LL) == 0;
          *(LARGE_INTEGER *)(v45 + 8) = v46;
          if ( !v27
            && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
            && (qword_1C02C4050 & 0x200000010000000LL) != 0
            && (qword_1C02C4058 & 0x200000010000000LL) == qword_1C02C4058
            && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
          {
            McTemplateK0xqx_EtwWriteTransfer(
              gullUserCritAcquireToken,
              (unsigned int)&AcquiredExclusiveUserCritEvent,
              v48,
              v47,
              1000000 * v47 / gliQpcFreq.QuadPart,
              gullUserCritAcquireToken);
          }
          if ( v47 >= *(__int64 *)&WPP_MAIN_CB.SectorSize
            && (signed __int64)(v46.QuadPart - (unsigned __int64)WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink) >= W32KEtwUserCritTelemetryThrottleQPC )
          {
            if ( (Microsoft_Windows_Win32kEnableBits & 0x1000000000LL) != 0 )
              McTemplateK0xqx_EtwWriteTransfer(
                gullUserCritAcquireToken,
                (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
                v48,
                v47,
                1000 * v47 / gliQpcFreq.QuadPart,
                gullUserCritAcquireToken);
            WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink = (struct _LIST_ENTRY *)v46.QuadPart;
          }
          v2 = Thread;
          *(_QWORD *)(v45 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
        }
      }
      v49 = *v65;
      if ( !IsThreadCrossSessionAttached() )
      {
        gptiCurrent = v49;
        if ( v49 )
        {
          *((_DWORD *)v49 + 387) = 1;
          v51 = PsGetCurrentProcessWin32Process(v50);
          if ( v51 )
          {
            if ( *(_QWORD *)v51
              && (*(_DWORD *)(v51 + 12) & 0x8000) != 0
              && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
              && (*((_DWORD *)gptiCurrent + 318) & 0x80u) == 0 )
            {
              while ( 1 )
              {
                v52 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
                if ( !gpSharedUserCritDeferredUnlockListHead )
                  break;
                gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                             + 2);
                v59 = *v52;
                v52[2] = 0LL;
                if ( !*(_DWORD *)(v59 + 8) )
                  MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4237LL);
                HMUnlockObject(*v52);
              }
            }
          }
        }
        goto LABEL_74;
      }
    }
    else
    {
      EtwTraceAcquiredExclusiveUserCrit();
    }
    gptiCurrent = 0LL;
LABEL_74:
    v53 = 0LL;
    v54 = (__int64 *)PsGetThreadWin32Thread(v2);
    if ( v54 )
      v53 = *v54;
    *(_DWORD *)(v53 + 488) |= 1u;
    if ( gbVideoInitialized || !gbNonServiceSession )
      GreCleanDC(*((HDC *)gpDispInfo + 7));
    if ( (*(_DWORD *)(v53 + 1272) & 2) != 0 )
      HIDWORD(WPP_MAIN_CB.Dpc.DeferredRoutine) = 0;
    if ( (*(_DWORD *)(v53 + 1272) & 1) == 0 )
      xxxDestroyThreadInfo();
    UserSessionSwitchLeaveCrit(v56, v55, v57, v58);
    ThreadInfo = 0;
    goto LABEL_37;
  }
LABEL_38:
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
  {
    v6 = 0;
  }
  if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = v6;
    LOBYTE(v3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      (_DWORD)v3,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      14,
      28,
      (__int64)&WPP_d82075a5283f313a7450cbd9ac983c1d_Traceguids);
  }
  return ThreadInfo;
}
