/*
 * XREFs of ?UserSessionSwitchBlock_Start@@YAJXZ @ 0x1C007E314
 * Callers:
 *     UserPowerInfoCallout @ 0x1C007AEB8 (UserPowerInfoCallout.c)
 *     UserPowerStateCallout @ 0x1C007BFDC (UserPowerStateCallout.c)
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
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 UserSessionSwitchBlock_Start(void)
{
  BOOLEAN IsResourceAcquiredExclusiveLite; // al
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  int v5; // edi
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v7; // rdx
  unsigned __int64 v8; // r8
  struct tagTHREADINFO **v9; // rbx
  struct tagTHREADINFO *v10; // rbx
  __int64 CurrentProcessWin32Process; // rax
  __int64 *v12; // rbx
  unsigned int v13; // ebx
  LARGE_INTEGER *v15; // rbx
  struct tagKERNELHANDLETABLEENTRY *v16; // rax
  __int64 v17; // rcx
  BOOL v18; // [rsp+38h] [rbp-79h] BYREF
  __int64 v19; // [rsp+40h] [rbp-71h] BYREF
  int v20; // [rsp+48h] [rbp-69h]
  GUID ActivityId; // [rsp+4Ch] [rbp-65h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v22; // [rsp+60h] [rbp-51h] BYREF
  BOOL *v23; // [rsp+80h] [rbp-31h]
  __int64 v24; // [rsp+88h] [rbp-29h]
  struct _EVENT_DATA_DESCRIPTOR v25; // [rsp+90h] [rbp-21h] BYREF
  BOOL *v26; // [rsp+B0h] [rbp-1h]
  __int64 v27; // [rsp+B8h] [rbp+7h]
  struct _EVENT_DATA_DESCRIPTOR v28; // [rsp+C0h] [rbp+Fh] BYREF
  BOOL *v29; // [rsp+E0h] [rbp+2Fh]
  __int64 v30; // [rsp+E8h] [rbp+37h]

  IsResourceAcquiredExclusiveLite = ExIsResourceAcquiredExclusiveLite(gpresUser);
  v5 = IsResourceAcquiredExclusiveLite;
  if ( IsResourceAcquiredExclusiveLite )
  {
    if ( gfSwitchInProgress )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v2, v1, v3);
  }
  else
  {
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
      CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v2, v1, v3);
    else
      CurrentThreadWin32Thread = 0LL;
    v19 = CurrentThreadWin32Thread;
    v20 = 1;
    if ( CurrentThreadWin32Thread && (*(int *)(CurrentThreadWin32Thread + 24) > 0 || *(_DWORD *)(v19 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C028EE70 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
      {
        v24 = 4LL;
        v18 = v20 == 1;
        v23 = &v18;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C028EE70,
          (unsigned __int8 *)dword_1C025AD79,
          &ActivityId,
          0LL,
          3u,
          &v22);
      }
    }
    if ( dword_1C028D6F0 && tlgKeywordOn((__int64)&dword_1C028D6F0, 0x400000000000LL)
      || (v7 = W32kEtwEnabledKeyword, v8 = 0x8000002010000000uLL, (W32kEtwEnabledKeyword & 0x8000002010000000uLL) != 0)
      && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
      && (qword_1C028DB20 & 0x8000002010000000uLL) != 0
      && (qword_1C028DB28 & 0x8000002010000000uLL) == qword_1C028DB28
      || (v8 = 0x200000010000000LL, (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0)
      && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
      && (qword_1C028DB20 & 0x200000010000000LL) != 0
      && (qword_1C028DB28 & 0x200000010000000LL) == qword_1C028DB28 )
    {
      v15 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v2, v7, v8);
      if ( v15 )
        v15[1] = KeQueryPerformanceCounter(0LL);
    }
    v9 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
    EtwTraceAcquiredExclusiveUserCrit();
    if ( v9 )
    {
      v10 = *v9;
      if ( IsThreadCrossSessionAttached() )
        v10 = 0LL;
      if ( v19 )
      {
        v2 = *(unsigned int *)(v19 + 24);
        if ( *(_DWORD *)(v19 + 48) || (int)v2 > 0 )
        {
          *(_DWORD *)(v19 + 44) = 1;
          *(GUID *)(v19 + 28) = ActivityId;
          v3 = (unsigned int)dword_1C028EE70;
          if ( (unsigned int)dword_1C028EE70 > 6 )
          {
            if ( tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
            {
              v27 = 4LL;
              v18 = v20 == 1;
              v26 = &v18;
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_1C028EE70,
                (unsigned __int8 *)dword_1C025AD22,
                &ActivityId,
                0LL,
                3u,
                &v25);
              v3 = (unsigned int)dword_1C028EE70;
            }
            if ( (unsigned int)v3 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
            {
              v30 = 4LL;
              v18 = v20 == 1;
              v29 = &v18;
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_1C028EE70,
                (unsigned __int8 *)dword_1C025AD4F,
                &ActivityId,
                0LL,
                3u,
                &v28);
            }
          }
        }
      }
      gptiCurrent = v10;
      if ( v10 )
      {
        *((_DWORD *)v10 + 377) = 1;
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v2, v1, v3, v4);
        if ( CurrentProcessWin32Process )
        {
          if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
          {
            v2 = (__int64)gptiCurrent;
            if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0 && (*((_DWORD *)gptiCurrent + 314) & 0x80u) == 0 )
            {
              while ( 1 )
              {
                v12 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
                if ( !gpSharedUserCritDeferredUnlockListHead )
                  break;
                v16 = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2);
                v17 = *(_QWORD *)gpSharedUserCritDeferredUnlockListHead;
                *((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2) = 0LL;
                gpSharedUserCritDeferredUnlockListHead = v16;
                if ( !*(_DWORD *)(v17 + 8) )
                {
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v17, v1, v3);
                  v17 = *v12;
                }
                HMUnlockObject(v17);
              }
            }
          }
        }
      }
    }
    else
    {
      InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v19);
      gptiCurrent = 0LL;
    }
  }
  if ( gnPoSessionSwitchBlockCount > 0 )
  {
    ++gnPoSessionSwitchBlockCount;
LABEL_21:
    v13 = 0;
    goto LABEL_22;
  }
  if ( !gfSwitchInProgress && (unsigned int)RtlGetActiveConsoleId() == gSessionId && !gfSessionSwitchBlock )
  {
    ++gnPoSessionSwitchBlockCount;
    gfSessionSwitchBlock = 1;
    goto LABEL_21;
  }
  v13 = -1073086428;
LABEL_22:
  if ( !v5 )
    UserSessionSwitchLeaveCrit(v2, v1, v3, v4);
  return v13;
}
