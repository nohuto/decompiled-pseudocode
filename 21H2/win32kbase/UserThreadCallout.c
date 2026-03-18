/*
 * XREFs of UserThreadCallout @ 0x1C0037070
 * Callers:
 *     <none>
 * Callees:
 *     IsThreadCrossSessionAttached @ 0x1C0022CC0 (IsThreadCrossSessionAttached.c)
 *     W32GetThreadWin32Thread @ 0x1C0023390 (W32GetThreadWin32Thread.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0028F90 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C002A3A8 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     RtlGetExpWinVer @ 0x1C00359B8 (RtlGetExpWinVer.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     IsGetAppCompatFlags2QuadWordSupported @ 0x1C003767C (IsGetAppCompatFlags2QuadWordSupported.c)
 *     HMUnlockObject @ 0x1C0038FB0 (HMUnlockObject.c)
 *     xxxCreateThreadInfo @ 0x1C003911C (xxxCreateThreadInfo.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C004DAC0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     GreCleanDC @ 0x1C009C3E0 (GreCleanDC.c)
 *     xxxDestroyThreadInfo @ 0x1C00C64AC (xxxDestroyThreadInfo.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall UserThreadCallout(PETHREAD Thread, __int64 a2)
{
  _UNKNOWN **v2; // r8
  int ThreadInfo; // r12d
  char v5; // bl
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 ThreadWin32Thread; // rdi
  __int64 v9; // r8
  PEPROCESS ThreadProcess; // rax
  PEPROCESS v11; // rsi
  __int64 ProcessSectionBaseAddress; // rax
  __int64 CurrentThreadWin32Thread; // rax
  unsigned __int64 v14; // rdx
  __int64 v15; // r8
  struct tagTHREADINFO **v16; // rdi
  struct tagTHREADINFO *v17; // rdi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 CurrentProcessWin32Process; // rax
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  PDEVICE_OBJECT v31; // rcx
  __int64 v32; // rax
  unsigned __int64 v33; // rdx
  __int64 v34; // r8
  struct tagTHREADINFO **v35; // rdi
  struct tagTHREADINFO *v36; // rdi
  BOOL v37; // eax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rax
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rdx
  struct tagKERNELHANDLETABLEENTRY *v46; // rdi
  __int64 v47; // rdi
  int v48; // eax
  LARGE_INTEGER *v49; // rdi
  LARGE_INTEGER *v50; // rdi
  int v51; // eax
  int v52; // eax
  __int64 v53; // rcx
  __int64 v54; // rcx
  struct tagKERNELHANDLETABLEENTRY *v55; // rdi
  __int64 v56; // [rsp+48h] [rbp-89h] BYREF
  __int64 v57; // [rsp+50h] [rbp-81h] BYREF
  int v58; // [rsp+58h] [rbp-79h]
  GUID ActivityId; // [rsp+5Ch] [rbp-75h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v60; // [rsp+70h] [rbp-61h] BYREF
  __int64 *v61; // [rsp+90h] [rbp-41h]
  __int64 v62; // [rsp+98h] [rbp-39h]
  struct _EVENT_DATA_DESCRIPTOR v63; // [rsp+A0h] [rbp-31h] BYREF
  __int64 *v64; // [rsp+C0h] [rbp-11h]
  __int64 v65; // [rsp+C8h] [rbp-9h]
  struct _EVENT_DATA_DESCRIPTOR v66; // [rsp+D0h] [rbp-1h] BYREF
  __int64 *v67; // [rsp+F0h] [rbp+1Fh]
  __int64 v68; // [rsp+F8h] [rbp+27h]

  v2 = &WPP_RECORDER_INITIALIZED;
  ThreadInfo = 0;
  v5 = 1;
  if ( !(_DWORD)a2 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000) == 0
      || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(a2) = 0;
    }
    if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v2) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        a2,
        (_DWORD)v2,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        4,
        14,
        25,
        (__int64)&WPP_6bbaa2e2a0713bd7aecc3a487024d555_Traceguids);
    }
    if ( gbNoMorePowerCallouts )
      return 3221225473LL;
    if ( !gbUserInitialized )
    {
      _interlockedbittestandset((volatile signed __int32 *)(W32GetThreadWin32Thread((__int64)Thread) + 1256), 0);
      goto LABEL_35;
    }
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)Thread);
    if ( ThreadWin32Thread )
    {
      ThreadProcess = PsGetThreadProcess(Thread);
      v11 = ThreadProcess;
      if ( ThreadProcess && PsGetProcessPeb(ThreadProcess) )
      {
        ProcessSectionBaseAddress = PsGetProcessSectionBaseAddress(v11);
        *(_DWORD *)(ThreadWin32Thread + 632) = RtlGetExpWinVer(ProcessSectionBaseAddress);
      }
      else
      {
        *(_DWORD *)(ThreadWin32Thread + 632) = 0;
      }
    }
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
      CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v7, v6, v9);
    else
      CurrentThreadWin32Thread = 0LL;
    v57 = CurrentThreadWin32Thread;
    v58 = 1;
    if ( CurrentThreadWin32Thread && (*(int *)(CurrentThreadWin32Thread + 24) > 0 || *(_DWORD *)(v57 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C028EE70 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
      {
        v68 = 4LL;
        LODWORD(v56) = v58 == 1;
        v67 = &v56;
        tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C028EE70, (int)&dword_1C025AD79, (int)&ActivityId, 0, 3u, &v66);
      }
    }
    if ( dword_1C028D6F0 && tlgKeywordOn((__int64)&dword_1C028D6F0, 0x400000000000LL)
      || (v15 = W32kEtwEnabledKeyword, v14 = 0x8000002010000000uLL, (W32kEtwEnabledKeyword & 0x8000002010000000uLL) != 0)
      && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
      && (qword_1C028DB20 & 0x8000002010000000uLL) != 0
      && (qword_1C028DB28 & 0x8000002010000000uLL) == qword_1C028DB28
      || (v14 = 0x200000010000000LL, (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0)
      && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
      && (qword_1C028DB20 & 0x200000010000000LL) != 0
      && (qword_1C028DB28 & 0x200000010000000LL) == qword_1C028DB28 )
    {
      v49 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v7, v14, v15);
      if ( v49 )
        v49[1] = KeQueryPerformanceCounter(0LL);
    }
    v16 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
    EtwTraceAcquiredExclusiveUserCrit();
    if ( v16 )
    {
      v17 = *v16;
      if ( IsThreadCrossSessionAttached() )
        v17 = 0LL;
      if ( v57 )
      {
        v19 = *(unsigned int *)(v57 + 24);
        if ( *(_DWORD *)(v57 + 48) || (int)v19 > 0 )
        {
          *(_DWORD *)(v57 + 44) = 1;
          *(GUID *)(v57 + 28) = ActivityId;
          v20 = (unsigned int)dword_1C028EE70;
          if ( (unsigned int)dword_1C028EE70 > 6 )
          {
            if ( tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
            {
              v65 = 4LL;
              LODWORD(v56) = v58 == 1;
              v64 = &v56;
              tlgWriteTransfer_EtwWriteTransfer(
                (int)&dword_1C028EE70,
                (int)&dword_1C025AD22,
                (int)&ActivityId,
                0,
                3u,
                &v63);
              v20 = (unsigned int)dword_1C028EE70;
            }
            if ( (unsigned int)v20 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
            {
              v62 = 4LL;
              LODWORD(v56) = v58 == 1;
              v61 = &v56;
              tlgWriteTransfer_EtwWriteTransfer(
                (int)&dword_1C028EE70,
                (int)&dword_1C025AD4F,
                (int)&ActivityId,
                0,
                3u,
                &v60);
            }
          }
        }
      }
      gptiCurrent = v17;
      if ( v17 )
      {
        *((_DWORD *)v17 + 377) = 1;
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v19, v18, v20, v21);
        if ( CurrentProcessWin32Process )
        {
          if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0
            && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
            && (*((_DWORD *)gptiCurrent + 314) & 0x80u) == 0 )
          {
            while ( 1 )
            {
              v55 = gpSharedUserCritDeferredUnlockListHead;
              if ( !gpSharedUserCritDeferredUnlockListHead )
                break;
              v54 = *(_QWORD *)gpSharedUserCritDeferredUnlockListHead;
              gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                           + 2);
              *((_QWORD *)v55 + 2) = 0LL;
              if ( !*(_DWORD *)(v54 + 8) )
              {
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v54, v23, v24);
                v54 = *(_QWORD *)v55;
              }
              HMUnlockObject(v54, v23, v24, v25);
            }
          }
        }
      }
    }
    else
    {
      InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v57);
      gptiCurrent = 0LL;
    }
    ThreadInfo = xxxCreateThreadInfo(Thread);
    if ( ThreadInfo >= 0 && (int)IsGetAppCompatFlags2QuadWordSupported() >= 0 && qword_1C029C780 )
      qword_1C029C780(gptiCurrent);
LABEL_34:
    UserSessionSwitchLeaveCrit(v27, v26, v28, v29);
LABEL_35:
    v2 = &WPP_RECORDER_INITIALIZED;
    goto LABEL_36;
  }
  if ( (_DWORD)a2 == 1 )
  {
    v31 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000) == 0
      || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(a2) = 0;
    }
    LOBYTE(v2) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        a2,
        (_DWORD)v2,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        4,
        14,
        26,
        (__int64)&WPP_6bbaa2e2a0713bd7aecc3a487024d555_Traceguids);
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
      v32 = PsGetCurrentThreadWin32Thread(v31, a2, v2);
    else
      v32 = 0LL;
    v57 = v32;
    v58 = 1;
    if ( v32 && (*(int *)(v32 + 24) > 0 || *(_DWORD *)(v57 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C028EE70 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
      {
        v62 = 4LL;
        LODWORD(v56) = v58 == 1;
        v61 = &v56;
        tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C028EE70, (int)&dword_1C025AD79, (int)&ActivityId, 0, 3u, &v60);
      }
    }
    if ( dword_1C028D6F0 && tlgKeywordOn((__int64)&dword_1C028D6F0, 0x400000000000LL)
      || (v34 = W32kEtwEnabledKeyword, v33 = 0x8000002010000000uLL, (W32kEtwEnabledKeyword & 0x8000002010000000uLL) != 0)
      && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
      && (qword_1C028DB20 & 0x8000002010000000uLL) != 0
      && (qword_1C028DB28 & 0x8000002010000000uLL) == qword_1C028DB28
      || (v33 = 0x200000010000000LL, (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0)
      && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
      && (qword_1C028DB20 & 0x200000010000000LL) != 0
      && (qword_1C028DB28 & 0x200000010000000LL) == qword_1C028DB28 )
    {
      v50 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v31, v33, v34);
      if ( v50 )
        v50[1] = KeQueryPerformanceCounter(0LL);
    }
    v35 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
    EtwTraceAcquiredExclusiveUserCrit();
    if ( v35 )
    {
      v36 = *v35;
      v37 = IsThreadCrossSessionAttached();
      v41 = 0LL;
      if ( v37 )
        v36 = 0LL;
      if ( v57 )
      {
        v39 = *(unsigned int *)(v57 + 24);
        if ( *(_DWORD *)(v57 + 48) || (int)v39 > 0 )
        {
          *(_DWORD *)(v57 + 44) = 1;
          *(GUID *)(v57 + 28) = ActivityId;
          v40 = (unsigned int)dword_1C028EE70;
          if ( (unsigned int)dword_1C028EE70 > 6 )
          {
            if ( tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
            {
              v51 = v41;
              v65 = 4LL;
              LOBYTE(v51) = v58 == 1;
              LODWORD(v56) = v51;
              v64 = &v56;
              tlgWriteTransfer_EtwWriteTransfer(
                (int)&dword_1C028EE70,
                (int)&dword_1C025AD22,
                (int)&ActivityId,
                v41,
                3u,
                &v63);
              v40 = (unsigned int)dword_1C028EE70;
              v41 = 0LL;
            }
            if ( (unsigned int)v40 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
            {
              v52 = v41;
              v68 = 4LL;
              LOBYTE(v52) = v58 == 1;
              LODWORD(v56) = v52;
              v67 = &v56;
              tlgWriteTransfer_EtwWriteTransfer(
                (int)&dword_1C028EE70,
                (int)&dword_1C025AD4F,
                (int)&ActivityId,
                0,
                3u,
                &v66);
            }
          }
        }
      }
      gptiCurrent = v36;
      if ( v36 )
      {
        *((_DWORD *)v36 + 377) = 1;
        v42 = PsGetCurrentProcessWin32Process(v39, v38, v40, v41);
        v45 = 0LL;
        if ( v42 )
        {
          if ( (*(_DWORD *)(v42 + 12) & 0x8000) != 0
            && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
            && (*((_DWORD *)gptiCurrent + 314) & 0x80u) == 0 )
          {
            while ( 1 )
            {
              v46 = gpSharedUserCritDeferredUnlockListHead;
              if ( !gpSharedUserCritDeferredUnlockListHead )
                break;
              v53 = *(_QWORD *)gpSharedUserCritDeferredUnlockListHead;
              gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                           + 2);
              *((_QWORD *)v46 + 2) = 0LL;
              if ( !*(_DWORD *)(v53 + 8) )
              {
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v53, 0LL, v43);
                v53 = *(_QWORD *)v46;
              }
              HMUnlockObject(v53, v45, v43, v44);
              v45 = 0LL;
            }
          }
        }
      }
    }
    else
    {
      InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v57);
      gptiCurrent = 0LL;
    }
    v47 = W32GetThreadWin32Thread((__int64)Thread);
    *(_DWORD *)(v47 + 488) |= 1u;
    if ( gbVideoInitialized || !gbNonServiceSession )
      GreCleanDC(*((HDC *)gpDispInfo + 7));
    v48 = *(_DWORD *)(v47 + 1256);
    if ( (v48 & 2) != 0 )
    {
      gfSwitchInProgress = 0;
      v48 = *(_DWORD *)(v47 + 1256);
    }
    if ( (v48 & 1) == 0 )
    {
      if ( (int)IsGetAppCompatFlags2QuadWordSupported() >= 0 && qword_1C029C780 )
        qword_1C029C780(gptiCurrent);
      xxxDestroyThreadInfo();
    }
    goto LABEL_34;
  }
LABEL_36:
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
  {
    v5 = 0;
  }
  if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = v5;
    LOBYTE(v2) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      (_DWORD)v2,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      14,
      27,
      (__int64)&WPP_6bbaa2e2a0713bd7aecc3a487024d555_Traceguids);
  }
  return (unsigned int)ThreadInfo;
}
