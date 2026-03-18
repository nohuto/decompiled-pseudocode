/*
 * XREFs of NtUserCitSetInfo @ 0x1C009CFA0
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0028F90 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C002A3A8 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     HMUnlockObject @ 0x1C0038FB0 (HMUnlockObject.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C004DAC0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     CitSetInfo @ 0x1C009D150 (CitSetInfo.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserCitSetInfo(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v6; // rdx
  unsigned __int64 v7; // r8
  struct tagTHREADINFO **v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  struct tagTHREADINFO *v13; // rbx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 *v17; // rbx
  __int64 v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  LARGE_INTEGER *v24; // rbx
  struct tagKERNELHANDLETABLEENTRY *v25; // rax
  __int64 v26; // rcx
  BOOL v27; // [rsp+30h] [rbp-89h] BYREF
  __int64 v28; // [rsp+38h] [rbp-81h] BYREF
  int v29; // [rsp+40h] [rbp-79h]
  GUID ActivityId; // [rsp+44h] [rbp-75h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v31; // [rsp+58h] [rbp-61h] BYREF
  BOOL *v32; // [rsp+78h] [rbp-41h]
  int v33; // [rsp+80h] [rbp-39h]
  int v34; // [rsp+84h] [rbp-35h]
  struct _EVENT_DATA_DESCRIPTOR v35; // [rsp+88h] [rbp-31h] BYREF
  BOOL *v36; // [rsp+A8h] [rbp-11h]
  int v37; // [rsp+B0h] [rbp-9h]
  int v38; // [rsp+B4h] [rbp-5h]
  struct _EVENT_DATA_DESCRIPTOR v39; // [rsp+B8h] [rbp-1h] BYREF
  BOOL *v40; // [rsp+D8h] [rbp+1Fh]
  int v41; // [rsp+E0h] [rbp+27h]
  int v42; // [rsp+E4h] [rbp+2Bh]

  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(a1, a2, a3);
  else
    CurrentThreadWin32Thread = 0LL;
  v28 = CurrentThreadWin32Thread;
  v29 = 1;
  if ( CurrentThreadWin32Thread && (*(int *)(CurrentThreadWin32Thread + 24) > 0 || *(_DWORD *)(v28 + 48)) )
  {
    EtwActivityIdControl(3u, &ActivityId);
    if ( (unsigned int)dword_1C028EE70 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
    {
      v33 = 4;
      v34 = 0;
      v27 = v29 == 1;
      v32 = &v27;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_1C028EE70,
        (unsigned __int8 *)dword_1C025AD79,
        &ActivityId,
        0LL,
        3u,
        &v31);
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
    v24 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, v6, v7);
    if ( v24 )
      v24[1] = KeQueryPerformanceCounter(0LL);
  }
  v8 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
  EtwTraceAcquiredExclusiveUserCrit();
  if ( v8 )
  {
    v13 = *v8;
    if ( v28 )
    {
      v10 = *(unsigned int *)(v28 + 24);
      if ( *(_DWORD *)(v28 + 48) || (int)v10 > 0 )
      {
        *(_DWORD *)(v28 + 44) = 1;
        *(GUID *)(v28 + 28) = ActivityId;
        v11 = (unsigned int)dword_1C028EE70;
        if ( (unsigned int)dword_1C028EE70 > 6 )
        {
          if ( tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
          {
            v37 = 4;
            v38 = 0;
            v27 = v29 == 1;
            v36 = &v27;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C028EE70,
              (unsigned __int8 *)dword_1C025AD22,
              &ActivityId,
              0LL,
              3u,
              &v35);
            v11 = (unsigned int)dword_1C028EE70;
          }
          if ( (unsigned int)v11 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
          {
            v41 = 4;
            v42 = 0;
            v27 = v29 == 1;
            v40 = &v27;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C028EE70,
              (unsigned __int8 *)dword_1C025AD4F,
              &ActivityId,
              0LL,
              3u,
              &v39);
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
    InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v28);
    gptiCurrent = 0LL;
  }
  v18 = CitSetInfo(a1, a2);
  UserSessionSwitchLeaveCrit(v20, v19, v21, v22);
  return v18;
}
