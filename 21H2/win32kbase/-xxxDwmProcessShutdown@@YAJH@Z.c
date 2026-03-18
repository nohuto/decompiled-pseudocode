/*
 * XREFs of ?xxxDwmProcessShutdown@@YAJH@Z @ 0x1C0059C80
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C00C64AC (xxxDestroyThreadInfo.c)
 *     NtUserUnregisterSessionPort @ 0x1C0164670 (NtUserUnregisterSessionPort.c)
 * Callees:
 *     IsThreadCrossSessionAttached @ 0x1C0022CC0 (IsThreadCrossSessionAttached.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0028F90 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     ?GetCount@AtomicExecutionCheck@@SAIXZ @ 0x1C0029C98 (-GetCount@AtomicExecutionCheck@@SAIXZ.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C002A3A8 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     GreLockDwmState @ 0x1C0030A10 (GreLockDwmState.c)
 *     GreUnlockDwmState @ 0x1C0030A50 (GreUnlockDwmState.c)
 *     HMUnlockObject @ 0x1C0038FB0 (HMUnlockObject.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C004DAC0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     xxxDwmControl @ 0x1C00596E0 (xxxDwmControl.c)
 *     ?SetDwmApiPort@@YAXPEAX@Z @ 0x1C005983C (-SetDwmApiPort@@YAXPEAX@Z.c)
 *     IsUserEnableConsoleModeSupported @ 0x1C0059878 (IsUserEnableConsoleModeSupported.c)
 *     IsxxxDwmStopRedirectionSupported @ 0x1C005A66C (IsxxxDwmStopRedirectionSupported.c)
 *     GreSfmCleanupPresentHistory @ 0x1C0086D50 (GreSfmCleanupPresentHistory.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     UserEnableConsoleMode @ 0x1C023E464 (UserEnableConsoleMode.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall xxxDwmProcessShutdown(unsigned int a1)
{
  unsigned int v2; // edi
  unsigned int v3; // esi
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
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v19; // r8
  __int64 v20; // rdx
  LARGE_INTEGER *v21; // rbx
  struct tagTHREADINFO **v22; // rbx
  struct tagTHREADINFO *v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 CurrentProcessWin32Process; // rax
  __int64 v29; // rdx
  __int64 v30; // r8
  struct tagKERNELHANDLETABLEENTRY *v31; // rax
  __int64 v32; // rcx
  __int64 *v33; // rbx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // rax
  __int64 v38; // rdx
  LARGE_INTEGER *v39; // rbx
  struct tagTHREADINFO **v40; // rbx
  struct tagTHREADINFO *v41; // rbx
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // r8
  struct tagKERNELHANDLETABLEENTRY *v49; // rax
  __int64 v50; // rcx
  __int64 *v51; // rbx
  __int64 v52; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v53; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v54; // [rsp+68h] [rbp-A0h] BYREF
  int ActivityId_4; // [rsp+70h] [rbp-98h]
  GUID ActivityId_8; // [rsp+74h] [rbp-94h] BYREF
  __int64 v57; // [rsp+88h] [rbp-80h] BYREF
  int v58; // [rsp+90h] [rbp-78h]
  GUID v59; // [rsp+94h] [rbp-74h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v60; // [rsp+A8h] [rbp-60h] BYREF
  __int64 *v61; // [rsp+C8h] [rbp-40h]
  __int64 v62; // [rsp+D0h] [rbp-38h]
  struct _EVENT_DATA_DESCRIPTOR v63; // [rsp+D8h] [rbp-30h] BYREF
  __int64 *v64; // [rsp+F8h] [rbp-10h]
  __int64 v65; // [rsp+100h] [rbp-8h]
  struct _EVENT_DATA_DESCRIPTOR v66; // [rsp+108h] [rbp+0h] BYREF
  __int64 *v67; // [rsp+128h] [rbp+20h]
  __int64 v68; // [rsp+130h] [rbp+28h]
  struct _EVENT_DATA_DESCRIPTOR v69; // [rsp+138h] [rbp+30h] BYREF
  __int64 *v70; // [rsp+158h] [rbp+50h]
  __int64 v71; // [rsp+160h] [rbp+58h]
  struct _EVENT_DATA_DESCRIPTOR v72; // [rsp+168h] [rbp+60h] BYREF
  __int64 *v73; // [rsp+188h] [rbp+80h]
  __int64 v74; // [rsp+190h] [rbp+88h]
  struct _EVENT_DATA_DESCRIPTOR v75; // [rsp+198h] [rbp+90h] BYREF
  __int64 *v76; // [rsp+1B8h] [rbp+B0h]
  __int64 v77; // [rsp+1C0h] [rbp+B8h]

  v53 = 0LL;
  v2 = 0;
  if ( (int)DxgkGetSessionTokenManager(&v53) >= 0 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v53 + 96LL))(v53);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v53 + 200LL))(v53);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v53 + 8LL))(v53);
  }
  v3 = a1;
  if ( g_bDwmIsShuttingDown )
    v3 = 0;
  if ( (int)IsxxxDwmStopRedirectionSupported() >= 0 )
  {
    if ( qword_1C029CAC8 )
      v2 = qword_1C029CAC8(a1);
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
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v16, v15, v17);
  else
    CurrentThreadWin32Thread = 0LL;
  v54 = CurrentThreadWin32Thread;
  ActivityId_4 = 1;
  if ( CurrentThreadWin32Thread && (*(int *)(CurrentThreadWin32Thread + 24) > 0 || *(_DWORD *)(v54 + 48)) )
  {
    EtwActivityIdControl(3u, &ActivityId_8);
    if ( (unsigned int)dword_1C028EE70 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
    {
      v62 = 4LL;
      LODWORD(v52) = ActivityId_4 == 1;
      v61 = &v52;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_1C028EE70,
        (unsigned __int8 *)dword_1C025AD79,
        &ActivityId_8,
        0LL,
        3u,
        &v60);
    }
  }
  v19 = 0x200000010000000LL;
  if ( dword_1C028D6F0 && tlgKeywordOn((__int64)&dword_1C028D6F0, 0x400000000000LL)
    || (v20 = W32kEtwEnabledKeyword, (W32kEtwEnabledKeyword & 0x8000002010000000uLL) != 0)
    && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
    && (qword_1C028DB20 & 0x8000002010000000uLL) != 0
    && (qword_1C028DB28 & 0x8000002010000000uLL) == qword_1C028DB28
    || (W32kEtwEnabledKeyword & v19) != 0
    && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
    && (v19 & qword_1C028DB20) != 0
    && (v19 & qword_1C028DB28) == qword_1C028DB28 )
  {
    v21 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v16, v20, v19);
    if ( v21 )
      v21[1] = KeQueryPerformanceCounter(0LL);
  }
  v22 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
  EtwTraceAcquiredExclusiveUserCrit();
  if ( v22 )
  {
    v23 = *v22;
    if ( IsThreadCrossSessionAttached() )
      v23 = 0LL;
    if ( v54 )
    {
      v25 = *(unsigned int *)(v54 + 24);
      if ( *(_DWORD *)(v54 + 48) || (int)v25 > 0 )
      {
        *(_DWORD *)(v54 + 44) = 1;
        *(GUID *)(v54 + 28) = ActivityId_8;
        v26 = (unsigned int)dword_1C028EE70;
        if ( (unsigned int)dword_1C028EE70 > 6 )
        {
          if ( tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
          {
            v65 = 4LL;
            LODWORD(v52) = ActivityId_4 == 1;
            v64 = &v52;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C028EE70,
              (unsigned __int8 *)dword_1C025AD22,
              &ActivityId_8,
              0LL,
              3u,
              &v63);
            v26 = (unsigned int)dword_1C028EE70;
          }
          if ( (unsigned int)v26 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
          {
            v68 = 4LL;
            LODWORD(v52) = ActivityId_4 == 1;
            v67 = &v52;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C028EE70,
              (unsigned __int8 *)dword_1C025AD4F,
              &ActivityId_8,
              0LL,
              3u,
              &v66);
          }
        }
      }
    }
    gptiCurrent = v23;
    if ( v23 )
    {
      *((_DWORD *)v23 + 377) = 1;
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v25, v24, v26, v27);
      if ( CurrentProcessWin32Process )
      {
        if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0
          && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
          && (*((_DWORD *)gptiCurrent + 314) & 0x80u) == 0 )
        {
          while ( 1 )
          {
            v33 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
            if ( !gpSharedUserCritDeferredUnlockListHead )
              break;
            v31 = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2);
            v32 = *(_QWORD *)gpSharedUserCritDeferredUnlockListHead;
            *((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2) = 0LL;
            gpSharedUserCritDeferredUnlockListHead = v31;
            if ( !*(_DWORD *)(v32 + 8) )
            {
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v32, v29, v30);
              v32 = *v33;
            }
            HMUnlockObject(v32);
          }
        }
      }
    }
  }
  else
  {
    InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v54);
    gptiCurrent = 0LL;
  }
  GreLockDwmState();
  SetDwmApiPort(0LL);
  if ( g_pepDwm )
  {
    ObfDereferenceObject(g_pepDwm);
    g_pepDwm = 0LL;
  }
  GreUnlockDwmState();
  if ( (int)IsUserEnableConsoleModeSupported() >= 0 )
  {
    UserSessionSwitchLeaveCrit(v5, v4, v6, v7);
    v2 = UserEnableConsoleMode(1LL);
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
      v37 = PsGetCurrentThreadWin32Thread(v35, v34, v36);
    else
      v37 = 0LL;
    v57 = v37;
    v58 = 1;
    if ( v37 && (*(int *)(v37 + 24) > 0 || *(_DWORD *)(v57 + 48)) )
    {
      EtwActivityIdControl(3u, &v59);
      if ( (unsigned int)dword_1C028EE70 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
      {
        v71 = 4LL;
        LODWORD(v52) = v58 == 1;
        v70 = &v52;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C028EE70,
          (unsigned __int8 *)dword_1C025AD79,
          &v59,
          0LL,
          3u,
          &v69);
      }
    }
    if ( dword_1C028D6F0 && tlgKeywordOn((__int64)&dword_1C028D6F0, 0x400000000000LL)
      || (v38 = W32kEtwEnabledKeyword, (W32kEtwEnabledKeyword & 0x8000002010000000uLL) != 0)
      && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
      && (qword_1C028DB20 & 0x8000002010000000uLL) != 0
      && (qword_1C028DB28 & 0x8000002010000000uLL) == qword_1C028DB28
      || (v36 = 0x200000010000000LL, (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0)
      && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
      && (qword_1C028DB20 & 0x200000010000000LL) != 0
      && (qword_1C028DB28 & 0x200000010000000LL) == qword_1C028DB28 )
    {
      v39 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v35, v38, v36);
      if ( v39 )
        v39[1] = KeQueryPerformanceCounter(0LL);
    }
    v40 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
    EtwTraceAcquiredExclusiveUserCrit();
    if ( v40 )
    {
      v41 = *v40;
      if ( IsThreadCrossSessionAttached() )
        v41 = 0LL;
      if ( v57 )
      {
        v43 = *(unsigned int *)(v57 + 24);
        if ( *(_DWORD *)(v57 + 48) || (int)v43 > 0 )
        {
          *(_DWORD *)(v57 + 44) = 1;
          *(GUID *)(v57 + 28) = v59;
          v44 = (unsigned int)dword_1C028EE70;
          if ( (unsigned int)dword_1C028EE70 > 6 )
          {
            if ( tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
            {
              v74 = 4LL;
              LODWORD(v52) = v58 == 1;
              v73 = &v52;
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_1C028EE70,
                (unsigned __int8 *)dword_1C025AD22,
                &v59,
                0LL,
                3u,
                &v72);
              v44 = (unsigned int)dword_1C028EE70;
            }
            if ( (unsigned int)v44 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
            {
              v77 = 4LL;
              LODWORD(v52) = v58 == 1;
              v76 = &v52;
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_1C028EE70,
                (unsigned __int8 *)dword_1C025AD4F,
                &v59,
                0LL,
                3u,
                &v75);
            }
          }
        }
      }
      gptiCurrent = v41;
      if ( v41 )
      {
        *((_DWORD *)v41 + 377) = 1;
        v46 = PsGetCurrentProcessWin32Process(v43, v42, v44, v45);
        if ( v46 )
        {
          if ( (*(_DWORD *)(v46 + 12) & 0x8000) != 0
            && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
            && (*((_DWORD *)gptiCurrent + 314) & 0x80u) == 0 )
          {
            while ( 1 )
            {
              v51 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
              if ( !gpSharedUserCritDeferredUnlockListHead )
                break;
              v49 = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2);
              v50 = *(_QWORD *)gpSharedUserCritDeferredUnlockListHead;
              *((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2) = 0LL;
              gpSharedUserCritDeferredUnlockListHead = v49;
              if ( !*(_DWORD *)(v50 + 8) )
              {
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v50, v47, v48);
                v50 = *v51;
              }
              HMUnlockObject(v50);
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
  }
  g_bDwmIsShuttingDown = 0;
  if ( v3 )
  {
    CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
    xxxDwmControl(1036LL, CurrentProcessId);
  }
  return v2;
}
