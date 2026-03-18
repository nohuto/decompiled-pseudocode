/*
 * XREFs of NtUserRegisterSessionPort @ 0x1C00598B0
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0028F90 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C002A3A8 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     HMUnlockObject @ 0x1C0038FB0 (HMUnlockObject.c)
 *     UserSetLastError @ 0x1C003CCC0 (UserSetLastError.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C004DAC0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ?xxxDwmProcessStartup@@YAJPEAX@Z @ 0x1C00594C8 (-xxxDwmProcessStartup@@YAJPEAX@Z.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserRegisterSessionPort(HANDLE Handle, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v6; // rdx
  unsigned __int64 v7; // r8
  struct tagTHREADINFO **v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  struct tagTHREADINFO *v13; // rdi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 *v17; // rdi
  NTSTATUS v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  LARGE_INTEGER *v24; // rdi
  struct tagKERNELHANDLETABLEENTRY *v25; // rax
  __int64 v26; // rcx
  ULONG v27; // eax
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  BOOL v31; // [rsp+30h] [rbp-89h] BYREF
  __int64 v32; // [rsp+38h] [rbp-81h] BYREF
  int v33; // [rsp+40h] [rbp-79h]
  GUID ActivityId; // [rsp+44h] [rbp-75h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v35; // [rsp+58h] [rbp-61h] BYREF
  BOOL *v36; // [rsp+78h] [rbp-41h]
  __int64 v37; // [rsp+80h] [rbp-39h]
  struct _EVENT_DATA_DESCRIPTOR v38; // [rsp+88h] [rbp-31h] BYREF
  BOOL *v39; // [rsp+A8h] [rbp-11h]
  __int64 v40; // [rsp+B0h] [rbp-9h]
  struct _EVENT_DATA_DESCRIPTOR v41; // [rsp+B8h] [rbp-1h] BYREF
  BOOL *v42; // [rsp+D8h] [rbp+1Fh]
  __int64 v43; // [rsp+E0h] [rbp+27h]

  v3 = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(Handle, a2, a3);
    v32 = CurrentThreadWin32Thread;
  }
  else
  {
    CurrentThreadWin32Thread = 0LL;
    v32 = 0LL;
  }
  v33 = 1;
  if ( CurrentThreadWin32Thread && (*(int *)(CurrentThreadWin32Thread + 24) > 0 || *(_DWORD *)(v32 + 48)) )
  {
    EtwActivityIdControl(3u, &ActivityId);
    if ( (unsigned int)dword_1C028EE70 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
    {
      v37 = 4LL;
      v31 = v33 == 1;
      v36 = &v31;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_1C028EE70,
        (unsigned __int8 *)dword_1C025AD79,
        &ActivityId,
        0LL,
        3u,
        &v35);
    }
  }
  if ( dword_1C028D6F0 && tlgKeywordOn((__int64)&dword_1C028D6F0, 0x400000000000LL)
    || (v6 = W32kEtwEnabledKeyword, v7 = 0x8000002010000000uLL, (W32kEtwEnabledKeyword & 0x8000002010000000uLL) != 0)
    && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
    && (qword_1C028DB20 & 0x8000002010000000uLL) != 0
    && (qword_1C028DB28 & 0x8000002010000000uLL) == qword_1C028DB28
    || (v7 = 0x200000010000000LL, (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0)
    && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
    && (qword_1C028DB20 & 0x200000010000000LL) != 0
    && (qword_1C028DB28 & 0x200000010000000LL) == qword_1C028DB28 )
  {
    v24 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(Handle, v6, v7);
    if ( v24 )
      v24[1] = KeQueryPerformanceCounter(0LL);
  }
  v8 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
  EtwTraceAcquiredExclusiveUserCrit();
  if ( v8 )
  {
    v13 = *v8;
    if ( v32 )
    {
      v10 = *(unsigned int *)(v32 + 24);
      if ( *(_DWORD *)(v32 + 48) || (int)v10 > 0 )
      {
        *(_DWORD *)(v32 + 44) = 1;
        *(GUID *)(v32 + 28) = ActivityId;
        v11 = (unsigned int)dword_1C028EE70;
        if ( (unsigned int)dword_1C028EE70 > 6 )
        {
          if ( tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
          {
            v40 = 4LL;
            v31 = v33 == 1;
            v39 = &v31;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C028EE70,
              (unsigned __int8 *)dword_1C025AD22,
              &ActivityId,
              0LL,
              3u,
              &v38);
            v11 = (unsigned int)dword_1C028EE70;
          }
          if ( (unsigned int)v11 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
          {
            v43 = 4LL;
            v31 = v33 == 1;
            v42 = &v31;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C028EE70,
              (unsigned __int8 *)dword_1C025AD4F,
              &ActivityId,
              0LL,
              3u,
              &v41);
          }
        }
      }
    }
    gptiCurrent = v13;
    if ( v13 )
    {
      *((_DWORD *)v13 + 377) = 1;
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v10, v9, v11, v12);
      if ( CurrentProcessWin32Process )
      {
        if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0
          && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
          && (*((_DWORD *)gptiCurrent + 314) & 0x80u) == 0 )
        {
          while ( 1 )
          {
            v17 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
            if ( !gpSharedUserCritDeferredUnlockListHead )
              break;
            v25 = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2);
            v26 = *(_QWORD *)gpSharedUserCritDeferredUnlockListHead;
            *((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2) = 0LL;
            gpSharedUserCritDeferredUnlockListHead = v25;
            if ( !*(_DWORD *)(v26 + 8) )
            {
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v26, v15, v16);
              v26 = *v17;
            }
            HMUnlockObject(v26);
          }
        }
      }
    }
  }
  else
  {
    InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v32);
    gptiCurrent = 0LL;
  }
  v18 = xxxDwmProcessStartup(Handle);
  if ( v18 < 0 )
  {
    v27 = RtlNtStatusToDosError(v18);
    UserSetLastError(v27, v28, v29, v30);
  }
  else
  {
    v3 = 1LL;
  }
  UserSessionSwitchLeaveCrit(v20, v19, v21, v22);
  return v3;
}
