/*
 * XREFs of ?xxxWaitForVideoPortCalloutReady@@YAXEEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00D29D0
 * Callers:
 *     VideoPortCalloutThread @ 0x1C00D24E0 (VideoPortCalloutThread.c)
 * Callees:
 *     IsThreadCrossSessionAttached @ 0x1C0022CC0 (IsThreadCrossSessionAttached.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0028F90 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C002A3A8 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     HMUnlockObject @ 0x1C0038FB0 (HMUnlockObject.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C004DAC0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     IsPowerOnGdiSupported @ 0x1C00D456C (IsPowerOnGdiSupported.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0_EtwWriteTransfer @ 0x1C014F270 (McTemplateK0_EtwWriteTransfer.c)
 *     McTemplateK0tt_EtwWriteTransfer @ 0x1C01519DC (McTemplateK0tt_EtwWriteTransfer.c)
 *     IsxxxSetCsrssThreadDesktopSupported @ 0x1C023E394 (IsxxxSetCsrssThreadDesktopSupported.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall xxxWaitForVideoPortCalloutReady(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r14
  char v5; // si
  char v6; // di
  ULONG v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v12; // rdx
  unsigned __int64 v13; // r8
  LARGE_INTEGER *v14; // rbx
  struct tagTHREADINFO **v15; // rbx
  struct tagTHREADINFO *v16; // rbx
  __int64 CurrentProcessWin32Process; // rax
  struct tagKERNELHANDLETABLEENTRY *v18; // rax
  __int64 v19; // rcx
  __int64 *v20; // rbx
  BOOL v21; // [rsp+40h] [rbp-49h] BYREF
  PVOID Object[2]; // [rsp+48h] [rbp-41h] BYREF
  __int64 v23; // [rsp+58h] [rbp-31h] BYREF
  int v24; // [rsp+60h] [rbp-29h]
  GUID ActivityId; // [rsp+64h] [rbp-25h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v26; // [rsp+78h] [rbp-11h] BYREF
  BOOL *v27; // [rsp+98h] [rbp+Fh]
  __int64 v28; // [rsp+A0h] [rbp+17h]

  *(_OWORD *)Object = 0LL;
  v4 = a3;
  v5 = a2;
  v6 = a1;
  if ( (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
    McTemplateK0tt_EtwWriteTransfer(a1, a2, a3, (unsigned __int8)a1, (unsigned __int8)a2);
  while ( 1 )
  {
    while ( 1 )
    {
      v7 = 0;
      if ( gfMonitorPowerInProgress )
      {
        v7 = 1;
        Object[0] = gpevtMonitorPowerWaiter;
      }
      if ( v6 && (int)IsxxxSetCsrssThreadDesktopSupported() >= 0 && !grpdeskRitInput )
      {
        a1 = v7++;
        Object[a1] = gpevtRitReadyForCallOut;
      }
      if ( !v7 )
        break;
      UserSessionSwitchLeaveCrit(a1, a2, a3, a4);
      KeWaitForMultipleObjects(v7, Object, WaitAll, WrUserRequest, 0, 0, 0LL, 0LL);
      v6 = 0;
      if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
        CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v9, v8, v10);
      else
        CurrentThreadWin32Thread = 0LL;
      v23 = CurrentThreadWin32Thread;
      v24 = 1;
      if ( CurrentThreadWin32Thread && (*(int *)(CurrentThreadWin32Thread + 24) > 0 || *(_DWORD *)(v23 + 48)) )
      {
        EtwActivityIdControl(3u, &ActivityId);
        if ( (unsigned int)dword_1C028EE70 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
        {
          v28 = 4LL;
          v21 = v24 == 1;
          v27 = &v21;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C028EE70,
            (unsigned __int8 *)dword_1C025AD79,
            &ActivityId,
            0LL,
            3u,
            &v26);
        }
      }
      if ( dword_1C028D6F0 && tlgKeywordOn((__int64)&dword_1C028D6F0, 0x400000000000LL)
        || (v12 = W32kEtwEnabledKeyword,
            v13 = 0x8000002010000000uLL,
            (W32kEtwEnabledKeyword & 0x8000002010000000uLL) != 0)
        && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
        && (qword_1C028DB20 & 0x8000002010000000uLL) != 0
        && (qword_1C028DB28 & 0x8000002010000000uLL) == qword_1C028DB28
        || (v13 = 0x200000010000000LL, (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0)
        && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
        && (qword_1C028DB20 & 0x200000010000000LL) != 0
        && (qword_1C028DB28 & 0x200000010000000LL) == qword_1C028DB28 )
      {
        v14 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v9, v12, v13);
        if ( v14 )
          v14[1] = KeQueryPerformanceCounter(0LL);
      }
      v15 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
      EtwTraceAcquiredExclusiveUserCrit();
      if ( v15 )
      {
        v16 = *v15;
        if ( IsThreadCrossSessionAttached() )
          v16 = 0LL;
        if ( v23 )
        {
          a1 = *(unsigned int *)(v23 + 24);
          if ( *(_DWORD *)(v23 + 48) || (int)a1 > 0 )
          {
            *(_DWORD *)(v23 + 44) = 1;
            *(GUID *)(v23 + 28) = ActivityId;
            a3 = (unsigned int)dword_1C028EE70;
            if ( (unsigned int)dword_1C028EE70 > 6 )
            {
              if ( tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
              {
                v28 = 4LL;
                v21 = v24 == 1;
                v27 = &v21;
                tlgWriteTransfer_EtwWriteTransfer(
                  (__int64)&dword_1C028EE70,
                  (unsigned __int8 *)dword_1C025AD22,
                  &ActivityId,
                  0LL,
                  3u,
                  &v26);
                a3 = (unsigned int)dword_1C028EE70;
              }
              if ( (unsigned int)a3 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
              {
                v28 = 4LL;
                v21 = v24 == 1;
                v27 = &v21;
                tlgWriteTransfer_EtwWriteTransfer(
                  (__int64)&dword_1C028EE70,
                  (unsigned __int8 *)dword_1C025AD4F,
                  &ActivityId,
                  0LL,
                  3u,
                  &v26);
              }
            }
          }
        }
        gptiCurrent = v16;
        if ( v16 )
        {
          *((_DWORD *)v16 + 377) = 1;
          CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
          if ( CurrentProcessWin32Process )
          {
            if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
            {
              a1 = (__int64)gptiCurrent;
              if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0 && (*((_DWORD *)gptiCurrent + 314) & 0x80u) == 0 )
              {
                while ( 1 )
                {
                  v20 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
                  if ( !gpSharedUserCritDeferredUnlockListHead )
                    break;
                  v18 = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2);
                  v19 = *(_QWORD *)gpSharedUserCritDeferredUnlockListHead;
                  *((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2) = 0LL;
                  gpSharedUserCritDeferredUnlockListHead = v18;
                  if ( !*(_DWORD *)(v19 + 8) )
                  {
                    MicrosoftTelemetryAssertTriggeredNoArgsKM(v19, a2, a3);
                    v19 = *v20;
                  }
                  HMUnlockObject(v19);
                }
              }
            }
          }
        }
      }
      else
      {
        InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v23);
        gptiCurrent = 0LL;
      }
    }
    if ( !v5 || gbGDIOn || (int)IsPowerOnGdiSupported(a1) < 0 )
      break;
    if ( qword_1C029C268 )
      qword_1C029C268(v4, 1LL, 3LL);
  }
  if ( (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
    McTemplateK0_EtwWriteTransfer(a1, &StopWaitForVideoPortCalloutReady, &W32kControlGuid);
}
