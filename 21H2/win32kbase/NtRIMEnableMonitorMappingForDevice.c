/*
 * XREFs of NtRIMEnableMonitorMappingForDevice @ 0x1C0180080
 * Callers:
 *     <none>
 * Callees:
 *     IsThreadCrossSessionAttached @ 0x1C0022CC0 (IsThreadCrossSessionAttached.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0028F90 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C002A3A8 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     HMUnlockObject @ 0x1C0038FB0 (HMUnlockObject.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C004DAC0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     RIMEnableMonitorMappingForDevice @ 0x1C0182990 (RIMEnableMonitorMappingForDevice.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtRIMEnableMonitorMappingForDevice(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v7; // rdx
  unsigned __int64 v8; // r8
  LARGE_INTEGER *v9; // rbx
  struct tagTHREADINFO **v10; // rbx
  struct tagTHREADINFO *v11; // rbx
  __int64 v12; // rcx
  unsigned int v13; // r8d
  __int64 CurrentProcessWin32Process; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  struct tagKERNELHANDLETABLEENTRY *v17; // rax
  __int64 v18; // rcx
  __int64 *v19; // rbx
  unsigned int v20; // ebx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  BOOL v26; // [rsp+30h] [rbp-99h] BYREF
  __int64 v27; // [rsp+38h] [rbp-91h] BYREF
  int v28; // [rsp+40h] [rbp-89h]
  GUID ActivityId; // [rsp+44h] [rbp-85h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v30; // [rsp+58h] [rbp-71h] BYREF
  BOOL *v31; // [rsp+78h] [rbp-51h]
  __int64 v32; // [rsp+80h] [rbp-49h]
  struct _EVENT_DATA_DESCRIPTOR v33; // [rsp+88h] [rbp-41h] BYREF
  BOOL *v34; // [rsp+A8h] [rbp-21h]
  __int64 v35; // [rsp+B0h] [rbp-19h]
  struct _EVENT_DATA_DESCRIPTOR v36; // [rsp+B8h] [rbp-11h] BYREF
  BOOL *v37; // [rsp+D8h] [rbp+Fh]
  __int64 v38; // [rsp+E0h] [rbp+17h]

  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(a1, a2, a3);
  else
    CurrentThreadWin32Thread = 0LL;
  v27 = CurrentThreadWin32Thread;
  v28 = 1;
  if ( CurrentThreadWin32Thread && (*(int *)(CurrentThreadWin32Thread + 24) > 0 || *(_DWORD *)(v27 + 48)) )
  {
    EtwActivityIdControl(3u, &ActivityId);
    if ( (unsigned int)dword_1C028EE70 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
    {
      v32 = 4LL;
      v26 = v28 == 1;
      v31 = &v26;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_1C028EE70,
        (unsigned __int8 *)dword_1C025AD79,
        &ActivityId,
        0LL,
        3u,
        &v30);
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
    v9 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, v7, v8);
    if ( v9 )
      v9[1] = KeQueryPerformanceCounter(0LL);
  }
  v10 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
  EtwTraceAcquiredExclusiveUserCrit();
  if ( v10 )
  {
    v11 = *v10;
    if ( IsThreadCrossSessionAttached() )
      v11 = 0LL;
    if ( v27 )
    {
      v12 = *(unsigned int *)(v27 + 24);
      if ( *(_DWORD *)(v27 + 48) || (int)v12 > 0 )
      {
        *(_DWORD *)(v27 + 44) = 1;
        *(GUID *)(v27 + 28) = ActivityId;
        if ( (unsigned int)dword_1C028EE70 > 6 )
        {
          if ( tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
          {
            v35 = 4LL;
            v26 = v28 == 1;
            v34 = &v26;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C028EE70,
              (unsigned __int8 *)dword_1C025AD22,
              &ActivityId,
              0LL,
              3u,
              &v33);
            v13 = dword_1C028EE70;
          }
          if ( v13 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
          {
            v38 = 4LL;
            v26 = v28 == 1;
            v37 = &v26;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C028EE70,
              (unsigned __int8 *)dword_1C025AD4F,
              &ActivityId,
              0LL,
              3u,
              &v36);
          }
        }
      }
    }
    gptiCurrent = v11;
    if ( v11 )
    {
      *((_DWORD *)v11 + 377) = 1;
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v12);
      if ( CurrentProcessWin32Process )
      {
        if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0
          && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
          && (*((_DWORD *)gptiCurrent + 314) & 0x80u) == 0 )
        {
          while ( 1 )
          {
            v19 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
            if ( !gpSharedUserCritDeferredUnlockListHead )
              break;
            v17 = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2);
            v18 = *(_QWORD *)gpSharedUserCritDeferredUnlockListHead;
            *((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2) = 0LL;
            gpSharedUserCritDeferredUnlockListHead = v17;
            if ( !*(_DWORD *)(v18 + 8) )
            {
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v18, v15, v16);
              v18 = *v19;
            }
            HMUnlockObject(v18);
          }
        }
      }
    }
  }
  else
  {
    InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v27);
    gptiCurrent = 0LL;
  }
  v20 = RIMEnableMonitorMappingForDevice(a1, a2, 1LL, a3);
  UserSessionSwitchLeaveCrit(v22, v21, v23, v24);
  return v20;
}
