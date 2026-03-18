/*
 * XREFs of ?UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z @ 0x1C00D0788
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C007C7B0 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     PowerOnMonitor @ 0x1C007D2B0 (PowerOnMonitor.c)
 *     PowerOffMonitor @ 0x1C00D1C90 (PowerOffMonitor.c)
 * Callees:
 *     IsThreadCrossSessionAttached @ 0x1C0022CC0 (IsThreadCrossSessionAttached.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0028F90 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C002A3A8 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     HMUnlockObject @ 0x1C0038FB0 (HMUnlockObject.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C004DAC0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ?UpdateAdaptiveSessionState@@YAXXZ @ 0x1C007CFEC (-UpdateAdaptiveSessionState@@YAXXZ.c)
 *     CitDisplayPowerChange @ 0x1C00D0B04 (CitDisplayPowerChange.c)
 *     EtwTraceDisplayChange @ 0x1C00D0BC0 (EtwTraceDisplayChange.c)
 *     xxxSendWinlogonPowerMessage @ 0x1C00D0BF0 (xxxSendWinlogonPowerMessage.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     ?SetInputMode@@YAXW4_WIN32K_INPUT_MODE@@@Z @ 0x1C0146EB0 (-SetInputMode@@YAXW4_WIN32K_INPUT_MODE@@@Z.c)
 *     ?SetProximityBlocking@@YAXXZ @ 0x1C0147350 (-SetProximityBlocking@@YAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall UpdateDisplayState(int a1, enum POWER_MONITOR_REQUEST_REASON a2, char a3)
{
  char v6; // r14
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  char v11; // si
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v16; // rdx
  unsigned __int64 v17; // r8
  struct tagTHREADINFO **v18; // rbx
  struct tagTHREADINFO *v19; // rbx
  __int64 v20; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 *v24; // rbx
  LARGE_INTEGER *v25; // rbx
  __int64 v26; // rcx
  unsigned int v27; // r8d
  struct tagKERNELHANDLETABLEENTRY *v28; // rax
  __int64 v29; // rcx
  BOOL v30; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v31; // [rsp+38h] [rbp-C8h] BYREF
  _DWORD InputBuffer[3]; // [rsp+48h] [rbp-B8h] BYREF
  char v33; // [rsp+54h] [rbp-ACh]
  char v34; // [rsp+55h] [rbp-ABh]
  char v35; // [rsp+56h] [rbp-AAh]
  char v36; // [rsp+57h] [rbp-A9h]
  __int64 v37; // [rsp+58h] [rbp-A8h] BYREF
  int v38; // [rsp+60h] [rbp-A0h]
  GUID ActivityId; // [rsp+64h] [rbp-9Ch] BYREF
  struct _EVENT_DATA_DESCRIPTOR v40; // [rsp+78h] [rbp-88h] BYREF
  BOOL *v41; // [rsp+98h] [rbp-68h]
  __int64 v42; // [rsp+A0h] [rbp-60h]
  struct _EVENT_DATA_DESCRIPTOR v43; // [rsp+A8h] [rbp-58h] BYREF
  BOOL *v44; // [rsp+C8h] [rbp-38h]
  __int64 v45; // [rsp+D0h] [rbp-30h]
  struct _EVENT_DATA_DESCRIPTOR v46; // [rsp+D8h] [rbp-28h] BYREF
  BOOL *v47; // [rsp+F8h] [rbp-8h]
  __int64 v48; // [rsp+100h] [rbp+0h]

  gPowerDisplayState = gSessionId;
  dword_1C0296F6C = dword_1C0296F70;
  dword_1C0296F70 = a1;
  qword_1C0296F38 = ((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                    * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
                  - qword_1C0296F40;
  qword_1C0296F40 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                   * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
  if ( gProtocolType )
  {
    v6 = 0;
    word_1C0296F74 = 0;
  }
  else
  {
    v6 = 1;
    word_1C0296F74 = 1;
  }
  if ( a1 )
  {
    gPowerTransitionsState = 1;
    qword_1C0296FD4 = 0LL;
  }
  else
  {
    gPowerTransitionsState = 0;
    if ( a2 == MonitorRequestReasonGracePeriod )
    {
      LODWORD(qword_1C0296FD4) = 1;
    }
    else
    {
      LODWORD(qword_1C0296FD4) = 0;
      if ( a2 == MonitorRequestReasonNearProximity )
        SetProximityBlocking();
    }
  }
  UpdateAdaptiveSessionState();
  UserSessionSwitchLeaveCrit(v8, v7, v9, v10);
  if ( !gbTtmEnabled
    && (unsigned int)(a1 - 1) > 1
    && (a1 || a2 == MonitorRequestReasonGracePeriod || a2 == MonitorRequestReasonNearProximity) )
  {
    v11 = 0;
  }
  else
  {
    v11 = 1;
    if ( a1 != 2 )
    {
      v31 = 0LL;
      xxxSendWinlogonPowerMessage(0LL, 261 - (unsigned int)(a1 != 0), &v31);
    }
  }
  InputBuffer[0] = gSessionId;
  InputBuffer[1] = a1;
  InputBuffer[2] = a2;
  v33 = v6;
  v34 = v11;
  v35 = a3;
  if ( gPowerTransitionsState || (_DWORD)qword_1C0296FD4 || (v36 = 0, HIDWORD(qword_1C0296FD4)) )
    v36 = 1;
  ZwPowerInformation(SessionDisplayState, InputBuffer, 0x10u, 0LL, 0);
  if ( gSystemIsAoAc )
  {
    if ( (gPowerTransitionsState || qword_1C0296FD4) && !HIDWORD(qword_1C0296FD4) )
      v26 = 0LL;
    else
      v26 = 2LL;
    SetInputMode(v26);
  }
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v13, v12, v14);
  else
    CurrentThreadWin32Thread = 0LL;
  v37 = CurrentThreadWin32Thread;
  v38 = 1;
  if ( CurrentThreadWin32Thread && (*(int *)(CurrentThreadWin32Thread + 24) > 0 || *(_DWORD *)(v37 + 48)) )
  {
    EtwActivityIdControl(3u, &ActivityId);
    if ( (unsigned int)dword_1C028EE70 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
    {
      v42 = 4LL;
      v30 = v38 == 1;
      v41 = &v30;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_1C028EE70,
        (unsigned __int8 *)dword_1C025AD79,
        &ActivityId,
        0LL,
        3u,
        &v40);
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
    v25 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v13, v16, v17);
    if ( v25 )
      v25[1] = KeQueryPerformanceCounter(0LL);
  }
  v18 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
  EtwTraceAcquiredExclusiveUserCrit();
  if ( v18 )
  {
    v19 = *v18;
    if ( IsThreadCrossSessionAttached() )
      v19 = 0LL;
    if ( v37 )
    {
      v20 = *(unsigned int *)(v37 + 24);
      if ( *(_DWORD *)(v37 + 48) || (int)v20 > 0 )
      {
        *(_DWORD *)(v37 + 44) = 1;
        *(GUID *)(v37 + 28) = ActivityId;
        if ( (unsigned int)dword_1C028EE70 > 6 )
        {
          if ( tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
          {
            v45 = 4LL;
            v30 = v38 == 1;
            v44 = &v30;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C028EE70,
              (unsigned __int8 *)dword_1C025AD22,
              &ActivityId,
              0LL,
              3u,
              &v43);
            v27 = dword_1C028EE70;
          }
          if ( v27 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
          {
            v48 = 4LL;
            v30 = v38 == 1;
            v47 = &v30;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C028EE70,
              (unsigned __int8 *)dword_1C025AD4F,
              &ActivityId,
              0LL,
              3u,
              &v46);
          }
        }
      }
    }
    gptiCurrent = v19;
    if ( v19 )
    {
      *((_DWORD *)v19 + 377) = 1;
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v20);
      if ( CurrentProcessWin32Process )
      {
        if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0
          && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
          && (*((_DWORD *)gptiCurrent + 314) & 0x80u) == 0 )
        {
          while ( 1 )
          {
            v24 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
            if ( !gpSharedUserCritDeferredUnlockListHead )
              break;
            v28 = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2);
            v29 = *(_QWORD *)gpSharedUserCritDeferredUnlockListHead;
            *((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2) = 0LL;
            gpSharedUserCritDeferredUnlockListHead = v28;
            if ( !*(_DWORD *)(v29 + 8) )
            {
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v29, v22, v23);
              v29 = *v24;
            }
            HMUnlockObject(v29);
          }
        }
      }
    }
  }
  else
  {
    InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v37);
    gptiCurrent = 0LL;
  }
  EtwTraceDisplayChange();
  CitDisplayPowerChange(&gPowerDisplayState);
}
