/*
 * XREFs of NtRIMOnPnpNotification @ 0x1C00BDAE0
 * Callers:
 *     <none>
 * Callees:
 *     IsThreadCrossSessionAttached @ 0x1C0022CC0 (IsThreadCrossSessionAttached.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0028F90 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C002A3A8 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     HMUnlockObject @ 0x1C0038FB0 (HMUnlockObject.c)
 *     RIMOnPnpNotification @ 0x1C0042B50 (RIMOnPnpNotification.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C004DAC0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtRIMOnPnpNotification(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v5; // rdx
  unsigned __int64 v6; // r8
  struct tagTHREADINFO **v7; // rbx
  struct tagTHREADINFO *v8; // rbx
  __int64 v9; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 *v13; // rbx
  unsigned int v14; // ebx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  LARGE_INTEGER *v20; // rbx
  unsigned int v21; // r8d
  struct tagKERNELHANDLETABLEENTRY *v22; // rax
  __int64 v23; // rcx
  BOOL v24; // [rsp+30h] [rbp-89h] BYREF
  __int64 v25; // [rsp+38h] [rbp-81h] BYREF
  int v26; // [rsp+40h] [rbp-79h]
  GUID ActivityId; // [rsp+44h] [rbp-75h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v28; // [rsp+58h] [rbp-61h] BYREF
  BOOL *v29; // [rsp+78h] [rbp-41h]
  __int64 v30; // [rsp+80h] [rbp-39h]
  struct _EVENT_DATA_DESCRIPTOR v31; // [rsp+88h] [rbp-31h] BYREF
  BOOL *v32; // [rsp+A8h] [rbp-11h]
  __int64 v33; // [rsp+B0h] [rbp-9h]
  struct _EVENT_DATA_DESCRIPTOR v34; // [rsp+B8h] [rbp-1h] BYREF
  BOOL *v35; // [rsp+D8h] [rbp+1Fh]
  __int64 v36; // [rsp+E0h] [rbp+27h]

  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(a1, a2, a3);
  else
    CurrentThreadWin32Thread = 0LL;
  v25 = CurrentThreadWin32Thread;
  v26 = 1;
  if ( CurrentThreadWin32Thread && (*(int *)(CurrentThreadWin32Thread + 24) > 0 || *(_DWORD *)(v25 + 48)) )
  {
    EtwActivityIdControl(3u, &ActivityId);
    if ( (unsigned int)dword_1C028EE70 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
    {
      v30 = 4LL;
      v24 = v26 == 1;
      v29 = &v24;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_1C028EE70,
        (unsigned __int8 *)dword_1C025AD79,
        &ActivityId,
        0LL,
        3u,
        &v28);
    }
  }
  if ( dword_1C028D6F0 && tlgKeywordOn((__int64)&dword_1C028D6F0, 0x400000000000LL)
    || (v5 = W32kEtwEnabledKeyword, v6 = 0x8000002010000000uLL, (W32kEtwEnabledKeyword & 0x8000002010000000uLL) != 0)
    && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
    && (qword_1C028DB20 & 0x8000002010000000uLL) != 0
    && (qword_1C028DB28 & 0x8000002010000000uLL) == qword_1C028DB28
    || (v6 = 0x200000010000000LL, (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0)
    && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
    && (qword_1C028DB20 & 0x200000010000000LL) != 0
    && (qword_1C028DB28 & 0x200000010000000LL) == qword_1C028DB28 )
  {
    v20 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, v5, v6);
    if ( v20 )
      v20[1] = KeQueryPerformanceCounter(0LL);
  }
  v7 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
  EtwTraceAcquiredExclusiveUserCrit();
  if ( v7 )
  {
    v8 = *v7;
    if ( IsThreadCrossSessionAttached() )
      v8 = 0LL;
    if ( v25 )
    {
      v9 = *(unsigned int *)(v25 + 24);
      if ( *(_DWORD *)(v25 + 48) || (int)v9 > 0 )
      {
        *(_DWORD *)(v25 + 44) = 1;
        *(GUID *)(v25 + 28) = ActivityId;
        if ( (unsigned int)dword_1C028EE70 > 6 )
        {
          if ( tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
          {
            v33 = 4LL;
            v24 = v26 == 1;
            v32 = &v24;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C028EE70,
              (unsigned __int8 *)dword_1C025AD22,
              &ActivityId,
              0LL,
              3u,
              &v31);
            v21 = dword_1C028EE70;
          }
          if ( v21 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
          {
            v36 = 4LL;
            v24 = v26 == 1;
            v35 = &v24;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C028EE70,
              (unsigned __int8 *)dword_1C025AD4F,
              &ActivityId,
              0LL,
              3u,
              &v34);
          }
        }
      }
    }
    gptiCurrent = v8;
    if ( v8 )
    {
      *((_DWORD *)v8 + 377) = 1;
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v9);
      if ( CurrentProcessWin32Process )
      {
        if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0
          && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
          && (*((_DWORD *)gptiCurrent + 314) & 0x80u) == 0 )
        {
          while ( 1 )
          {
            v13 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
            if ( !gpSharedUserCritDeferredUnlockListHead )
              break;
            v22 = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2);
            v23 = *(_QWORD *)gpSharedUserCritDeferredUnlockListHead;
            *((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2) = 0LL;
            gpSharedUserCritDeferredUnlockListHead = v22;
            if ( !*(_DWORD *)(v23 + 8) )
            {
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v23, v11, v12);
              v23 = *v13;
            }
            HMUnlockObject(v23);
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
  v14 = RIMOnPnpNotification(a1);
  UserSessionSwitchLeaveCrit(v16, v15, v17, v18);
  return v14;
}
