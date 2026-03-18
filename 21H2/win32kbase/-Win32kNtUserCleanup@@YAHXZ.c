/*
 * XREFs of ?Win32kNtUserCleanup@@YAHXZ @ 0x1C00B8C3C
 * Callers:
 *     ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C01481B0 (-Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     IsThreadCrossSessionAttached @ 0x1C0022CC0 (IsThreadCrossSessionAttached.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0028F90 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C002A3A8 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     HMUnlockObject @ 0x1C0038FB0 (HMUnlockObject.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C004DAC0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     CleanupLogonProcess @ 0x1C00B8E60 (CleanupLogonProcess.c)
 *     ?Win32kNtUserCleanupInternal@@YAXXZ @ 0x1C00B8EAC (-Win32kNtUserCleanupInternal@@YAXXZ.c)
 *     ApiSetEditionBaseDriverUnloadUninitialize @ 0x1C00B9C28 (ApiSetEditionBaseDriverUnloadUninitialize.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall Win32kNtUserCleanup(__int64 a1, __int64 a2, __int64 a3)
{
  PDEVICE_OBJECT v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 CurrentThreadWin32Thread; // rax
  struct tagTHREADINFO **v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  HANDLE v14; // rcx
  __int64 v16; // rdx
  unsigned __int64 v17; // r8
  LARGE_INTEGER *v18; // rbx
  struct tagTHREADINFO *v19; // rbx
  __int64 v20; // rcx
  unsigned int v21; // r8d
  __int64 CurrentProcessWin32Process; // rax
  __int64 v23; // rdx
  __int64 v24; // r8
  struct tagKERNELHANDLETABLEENTRY *v25; // rax
  __int64 v26; // rcx
  __int64 *v27; // rbx
  BOOL v28; // [rsp+48h] [rbp-79h] BYREF
  __int64 v29; // [rsp+50h] [rbp-71h] BYREF
  int v30; // [rsp+58h] [rbp-69h]
  GUID ActivityId; // [rsp+5Ch] [rbp-65h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v32; // [rsp+70h] [rbp-51h] BYREF
  BOOL *v33; // [rsp+90h] [rbp-31h]
  __int64 v34; // [rsp+98h] [rbp-29h]
  struct _EVENT_DATA_DESCRIPTOR v35; // [rsp+A0h] [rbp-21h] BYREF
  BOOL *v36; // [rsp+C0h] [rbp-1h]
  __int64 v37; // [rsp+C8h] [rbp+7h]
  struct _EVENT_DATA_DESCRIPTOR v38; // [rsp+D0h] [rbp+Fh] BYREF
  BOOL *v39; // [rsp+F0h] [rbp+2Fh]
  __int64 v40; // [rsp+F8h] [rbp+37h]

  v3 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(a2) = 0;
  }
  LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      a3,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      15,
      10,
      (__int64)&WPP_11ad7c7350dd3b21899c34d304d73f52_Traceguids);
  if ( gpresUser )
  {
    ApiSetEditionBaseDriverUnloadUninitialize(v3, a2, a3);
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
      CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v5, v4, v6);
    else
      CurrentThreadWin32Thread = 0LL;
    v29 = CurrentThreadWin32Thread;
    v30 = 1;
    if ( CurrentThreadWin32Thread && (*(int *)(CurrentThreadWin32Thread + 24) > 0 || *(_DWORD *)(v29 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C028EE70 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
      {
        v34 = 4LL;
        v28 = v30 == 1;
        v33 = &v28;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C028EE70,
          (unsigned __int8 *)dword_1C025AD79,
          &ActivityId,
          0LL,
          3u,
          &v32);
      }
    }
    if ( dword_1C028D6F0 && tlgKeywordOn((__int64)&dword_1C028D6F0, 0x400000000000LL)
      || (v16 = W32kEtwEnabledKeyword, v17 = 0x8000002010000000uLL, (W32kEtwEnabledKeyword & 0x8000002010000000uLL) != 0)
      && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
      && (qword_1C028DB20 & 0x8000002010000000uLL) != 0
      && (qword_1C028DB28 & 0x8000002010000000uLL) == qword_1C028DB28
      || (v17 = 0x200000010000000LL, (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0)
      && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
      && (qword_1C028DB20 & 0x200000010000000LL) != 0
      && (qword_1C028DB28 & 0x200000010000000LL) == qword_1C028DB28 )
    {
      v18 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v5, v16, v17);
      if ( v18 )
        v18[1] = KeQueryPerformanceCounter(0LL);
    }
    v8 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
    EtwTraceAcquiredExclusiveUserCrit();
    if ( v8 )
    {
      v19 = *v8;
      if ( IsThreadCrossSessionAttached() )
        v19 = 0LL;
      if ( v29 )
      {
        v20 = *(unsigned int *)(v29 + 24);
        if ( *(_DWORD *)(v29 + 48) || (int)v20 > 0 )
        {
          *(_DWORD *)(v29 + 44) = 1;
          *(GUID *)(v29 + 28) = ActivityId;
          if ( (unsigned int)dword_1C028EE70 > 6 )
          {
            if ( tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
            {
              v37 = 4LL;
              v28 = v30 == 1;
              v36 = &v28;
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_1C028EE70,
                (unsigned __int8 *)dword_1C025AD22,
                &ActivityId,
                0LL,
                3u,
                &v35);
              v21 = dword_1C028EE70;
            }
            if ( v21 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
            {
              v40 = 4LL;
              v28 = v30 == 1;
              v39 = &v28;
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_1C028EE70,
                (unsigned __int8 *)dword_1C025AD4F,
                &ActivityId,
                0LL,
                3u,
                &v38);
            }
          }
        }
      }
      gptiCurrent = v19;
      if ( v19 )
      {
        *((_DWORD *)v19 + 377) = 1;
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v20);
        if ( CurrentProcessWin32Process
          && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0
          && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
          && (*((_DWORD *)gptiCurrent + 314) & 0x80u) == 0 )
        {
          while ( 1 )
          {
            v27 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
            if ( !gpSharedUserCritDeferredUnlockListHead )
              break;
            v25 = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2);
            v26 = *(_QWORD *)gpSharedUserCritDeferredUnlockListHead;
            *((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2) = 0LL;
            gpSharedUserCritDeferredUnlockListHead = v25;
            if ( !*(_DWORD *)(v26 + 8) )
            {
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v26, v23, v24);
              v26 = *v27;
            }
            HMUnlockObject(v26);
          }
        }
      }
    }
    else
    {
      InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v29);
      gptiCurrent = 0LL;
    }
    Win32kNtUserCleanupInternal();
    UserSessionSwitchLeaveCrit(v10, v9, v11, v12);
    ExDeleteResourceLite(gpresUser);
    ExFreePoolWithTag(gpresUser, 0);
    gpresUser = 0LL;
  }
  else
  {
    Win32kNtUserCleanupInternal();
  }
  if ( ext_ms_win_moderncore_win32k_base_ntuser_l1
    && (int)ext_ms_win_moderncore_win32k_base_ntuser_l1() >= 0
    && qword_1C029B888 )
  {
    qword_1C029B888();
  }
  v14 = ghWinstaDirectory;
  if ( ghWinstaDirectory )
    ZwClose(ghWinstaDirectory);
  CleanupLogonProcess(v14, v13);
  if ( qword_1C029B8A0 && (int)qword_1C029B8A0() >= 0 && qword_1C029B8A8 )
    qword_1C029B8A8();
  return 1LL;
}
