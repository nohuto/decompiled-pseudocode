/*
 * XREFs of UserProcessThawCallout @ 0x1C00ACCFC
 * Callers:
 *     W32CalloutDispatch @ 0x1C00E4D10 (W32CalloutDispatch.c)
 * Callees:
 *     IsThreadCrossSessionAttached @ 0x1C0022CC0 (IsThreadCrossSessionAttached.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0028F90 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C002A3A8 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     HMUnlockObject @ 0x1C0038FB0 (HMUnlockObject.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C004DAC0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     IsFreezeThawTimersSupported @ 0x1C00AD648 (IsFreezeThawTimersSupported.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall UserProcessThawCallout(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v5; // rdx
  unsigned __int64 v6; // r8
  LARGE_INTEGER *v7; // rbx
  struct tagTHREADINFO **v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 ProcessWin32Process; // rdi
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rbx
  unsigned __int64 v15; // rsi
  struct tagTHREADINFO *v17; // rbx
  __int64 v18; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  unsigned int v22; // r8d
  __int64 *v23; // rbx
  struct tagKERNELHANDLETABLEENTRY *v24; // rax
  __int64 v25; // rcx
  BOOL v26; // [rsp+30h] [rbp-89h] BYREF
  __int64 v27; // [rsp+38h] [rbp-81h] BYREF
  int v28; // [rsp+40h] [rbp-79h]
  GUID ActivityId; // [rsp+44h] [rbp-75h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v30; // [rsp+58h] [rbp-61h] BYREF
  BOOL *v31; // [rsp+78h] [rbp-41h]
  __int64 v32; // [rsp+80h] [rbp-39h]
  struct _EVENT_DATA_DESCRIPTOR v33; // [rsp+88h] [rbp-31h] BYREF
  BOOL *v34; // [rsp+A8h] [rbp-11h]
  __int64 v35; // [rsp+B0h] [rbp-9h]
  struct _EVENT_DATA_DESCRIPTOR v36; // [rsp+B8h] [rbp-1h] BYREF
  BOOL *v37; // [rsp+D8h] [rbp+1Fh]
  __int64 v38; // [rsp+E0h] [rbp+27h]

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
    || (v5 = W32kEtwEnabledKeyword, v6 = 0x8000002010000000uLL, (W32kEtwEnabledKeyword & 0x8000002010000000uLL) != 0)
    && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
    && (qword_1C028DB20 & 0x8000002010000000uLL) != 0
    && (qword_1C028DB28 & 0x8000002010000000uLL) == qword_1C028DB28
    || (v6 = 0x200000010000000LL, (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0)
    && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
    && (qword_1C028DB20 & 0x200000010000000LL) != 0
    && (qword_1C028DB28 & 0x200000010000000LL) == qword_1C028DB28 )
  {
    v7 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, v5, v6);
    if ( v7 )
      v7[1] = KeQueryPerformanceCounter(0LL);
  }
  v8 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
  EtwTraceAcquiredExclusiveUserCrit();
  if ( v8 )
  {
    v17 = *v8;
    if ( IsThreadCrossSessionAttached() )
      v17 = 0LL;
    if ( v27 )
    {
      v18 = *(unsigned int *)(v27 + 24);
      if ( *(_DWORD *)(v27 + 48) || (int)v18 > 0 )
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
            v22 = dword_1C028EE70;
          }
          if ( v22 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
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
    gptiCurrent = v17;
    if ( v17 )
    {
      *((_DWORD *)v17 + 377) = 1;
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v18);
      if ( CurrentProcessWin32Process )
      {
        if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0
          && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
          && (*((_DWORD *)gptiCurrent + 314) & 0x80u) == 0 )
        {
          while ( 1 )
          {
            v23 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
            if ( !gpSharedUserCritDeferredUnlockListHead )
              break;
            v24 = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2);
            v25 = *(_QWORD *)gpSharedUserCritDeferredUnlockListHead;
            *((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2) = 0LL;
            gpSharedUserCritDeferredUnlockListHead = v24;
            if ( !*(_DWORD *)(v25 + 8) )
            {
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v25, v20, v21);
              v25 = *v23;
            }
            HMUnlockObject(v25);
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
  ProcessWin32Process = PsGetProcessWin32Process(a1);
  if ( ProcessWin32Process )
  {
    v14 = *(_QWORD *)(ProcessWin32Process + 320);
    v15 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    while ( v14 )
    {
      if ( qword_1C029C0E0 && (int)qword_1C029C0E0() >= 0 )
      {
        if ( qword_1C029C0E8 )
          qword_1C029C0E8(v14, (unsigned int)v15);
      }
      v14 = *(_QWORD *)(v14 + 664);
    }
    *(_DWORD *)(ProcessWin32Process + 820) &= ~0x400u;
    if ( (int)IsFreezeThawTimersSupported() >= 0 )
    {
      if ( qword_1C029BDC0 )
        qword_1C029BDC0();
    }
  }
  UserSessionSwitchLeaveCrit(v10, v9, v12, v13);
  return 0LL;
}
