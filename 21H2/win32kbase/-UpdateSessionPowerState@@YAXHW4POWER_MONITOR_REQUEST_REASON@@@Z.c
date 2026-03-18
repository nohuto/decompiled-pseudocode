/*
 * XREFs of ?UpdateSessionPowerState@@YAXHW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x1C014747C
 * Callers:
 *     ?PowerOffSession@@YAXW4POWER_MONITOR_REQUEST_REASON@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0146D28 (-PowerOffSession@@YAXW4POWER_MONITOR_REQUEST_REASON@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?PowerOnSession@@YAXW4POWER_MONITOR_REQUEST_REASON@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@W4_POWERON_LOC@@@Z @ 0x1C0146DE0 (-PowerOnSession@@YAXW4POWER_MONITOR_REQUEST_REASON@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@W4_POWER.c)
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
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall UpdateSessionPowerState(int a1, enum POWER_MONITOR_REQUEST_REASON a2)
{
  char v2; // bl
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v12; // rdx
  unsigned __int64 v13; // r8
  LARGE_INTEGER *v14; // rbx
  struct tagTHREADINFO **v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  struct tagTHREADINFO *v19; // rbx
  __int64 CurrentProcessWin32Process; // rax
  struct tagKERNELHANDLETABLEENTRY *v21; // rax
  __int64 v22; // rcx
  __int64 *v23; // rbx
  BOOL v24; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v25; // [rsp+38h] [rbp-C8h] BYREF
  int v26; // [rsp+40h] [rbp-C0h]
  GUID ActivityId; // [rsp+44h] [rbp-BCh] BYREF
  __int64 InputBuffer; // [rsp+58h] [rbp-A8h] BYREF
  int v29; // [rsp+60h] [rbp-A0h]
  char v30; // [rsp+64h] [rbp-9Ch]
  __int16 v31; // [rsp+65h] [rbp-9Bh]
  char v32; // [rsp+67h] [rbp-99h]
  enum POWER_MONITOR_REQUEST_REASON v33; // [rsp+68h] [rbp-98h]
  struct _EVENT_DATA_DESCRIPTOR v34; // [rsp+70h] [rbp-90h] BYREF
  BOOL *v35; // [rsp+90h] [rbp-70h]
  __int64 v36; // [rsp+98h] [rbp-68h]
  struct _EVENT_DATA_DESCRIPTOR v37; // [rsp+A0h] [rbp-60h] BYREF
  BOOL *v38; // [rsp+C0h] [rbp-40h]
  __int64 v39; // [rsp+C8h] [rbp-38h]
  struct _EVENT_DATA_DESCRIPTOR v40; // [rsp+D0h] [rbp-30h] BYREF
  BOOL *v41; // [rsp+F0h] [rbp-10h]
  __int64 v42; // [rsp+F8h] [rbp-8h]

  gPowerDisplayState = gSessionId;
  v2 = a1;
  dword_1C0296F6C = dword_1C0296F70;
  v32 = 0;
  dword_1C0296F70 = a1 != 0;
  qword_1C0296F38 = ((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                    * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
                  - qword_1C0296F40;
  qword_1C0296F40 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                   * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
  word_1C0296F74 = gProtocolType == 0;
  gPowerTransitionsState = a1;
  UpdateAdaptiveSessionState();
  UserSessionSwitchLeaveCrit(v5, v4, v6, v7);
  v31 = gProtocolType == 0;
  InputBuffer = 19LL;
  v29 = gSessionId;
  v30 = v2;
  v33 = a2;
  ZwPowerInformation(SystemPowerStateLogging|0x40, &InputBuffer, 0x14u, 0LL, 0);
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v9, v8, v10);
  else
    CurrentThreadWin32Thread = 0LL;
  v25 = CurrentThreadWin32Thread;
  v26 = 1;
  if ( CurrentThreadWin32Thread && (*(int *)(CurrentThreadWin32Thread + 24) > 0 || *(_DWORD *)(v25 + 48)) )
  {
    EtwActivityIdControl(3u, &ActivityId);
    if ( (unsigned int)dword_1C028EE70 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
    {
      v36 = 4LL;
      v24 = v26 == 1;
      v35 = &v24;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_1C028EE70,
        (unsigned __int8 *)dword_1C025AD79,
        &ActivityId,
        0LL,
        3u,
        &v34);
    }
  }
  if ( dword_1C028D6F0 && tlgKeywordOn((__int64)&dword_1C028D6F0, 0x400000000000LL)
    || (v12 = W32kEtwEnabledKeyword, v13 = 0x8000002010000000uLL, (W32kEtwEnabledKeyword & 0x8000002010000000uLL) != 0)
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
    v19 = *v15;
    if ( IsThreadCrossSessionAttached() )
      v19 = 0LL;
    if ( v25 )
    {
      v17 = *(unsigned int *)(v25 + 24);
      if ( *(_DWORD *)(v25 + 48) || (int)v17 > 0 )
      {
        *(_DWORD *)(v25 + 44) = 1;
        *(GUID *)(v25 + 28) = ActivityId;
        LODWORD(v18) = dword_1C028EE70;
        if ( (unsigned int)dword_1C028EE70 > 6 )
        {
          if ( tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
          {
            v39 = 4LL;
            v24 = v26 == 1;
            v38 = &v24;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C028EE70,
              (unsigned __int8 *)dword_1C025AD22,
              &ActivityId,
              0LL,
              3u,
              &v37);
            LODWORD(v18) = dword_1C028EE70;
          }
          if ( (unsigned int)v18 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
          {
            v42 = 4LL;
            v24 = v26 == 1;
            v41 = &v24;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C028EE70,
              (unsigned __int8 *)dword_1C025AD4F,
              &ActivityId,
              0LL,
              3u,
              &v40);
          }
        }
      }
    }
    gptiCurrent = v19;
    if ( v19 )
    {
      *((_DWORD *)v19 + 377) = 1;
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v17);
      if ( CurrentProcessWin32Process )
      {
        if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
        {
          LODWORD(v17) = (_DWORD)gptiCurrent;
          if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0 && (*((_DWORD *)gptiCurrent + 314) & 0x80u) == 0 )
          {
            while ( 1 )
            {
              v23 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
              if ( !gpSharedUserCritDeferredUnlockListHead )
                break;
              v21 = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2);
              v22 = *(_QWORD *)gpSharedUserCritDeferredUnlockListHead;
              *((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2) = 0LL;
              gpSharedUserCritDeferredUnlockListHead = v21;
              if ( !*(_DWORD *)(v22 + 8) )
              {
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v22, v16, v18);
                v22 = *v23;
              }
              HMUnlockObject(v22);
            }
          }
        }
      }
    }
  }
  else
  {
    InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v25);
    gptiCurrent = 0LL;
  }
  EtwTraceDisplayChange(v17, v16, v18);
  CitDisplayPowerChange((__int64)&gPowerDisplayState);
}
