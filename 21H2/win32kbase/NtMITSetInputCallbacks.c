/*
 * XREFs of NtMITSetInputCallbacks @ 0x1C00A9360
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0028F90 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C002A3A8 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     ?IsInputThread@CInputThreadBase@@QEBA_NXZ @ 0x1C0037CB8 (-IsInputThread@CInputThreadBase@@QEBA_NXZ.c)
 *     HMUnlockObject @ 0x1C0038FB0 (HMUnlockObject.c)
 *     UserSetLastError @ 0x1C003CCC0 (UserSetLastError.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C004DAC0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     UserSetMITInputCallbacks @ 0x1C00A9568 (UserSetMITInputCallbacks.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtMITSetInputCallbacks(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v5; // rdx
  unsigned __int64 v6; // r8
  struct tagTHREADINFO **v7; // rbx
  __int64 v8; // rdx
  struct tagTHREADINFO *v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  struct tagTHREADINFO *v12; // rbx
  __int64 CurrentProcessWin32Process; // rax
  __int64 *v14; // rbx
  PVOID CurrentProcess; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // ebx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  LARGE_INTEGER *v25; // rbx
  struct tagKERNELHANDLETABLEENTRY *v26; // rax
  __int64 v27; // rcx
  BOOL v28; // [rsp+38h] [rbp-79h] BYREF
  __int64 v29; // [rsp+40h] [rbp-71h] BYREF
  int v30; // [rsp+48h] [rbp-69h]
  GUID ActivityId; // [rsp+4Ch] [rbp-65h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v32; // [rsp+60h] [rbp-51h] BYREF
  BOOL *v33; // [rsp+80h] [rbp-31h]
  int v34; // [rsp+88h] [rbp-29h]
  int v35; // [rsp+8Ch] [rbp-25h]
  struct _EVENT_DATA_DESCRIPTOR v36; // [rsp+90h] [rbp-21h] BYREF
  BOOL *v37; // [rsp+B0h] [rbp-1h]
  int v38; // [rsp+B8h] [rbp+7h]
  int v39; // [rsp+BCh] [rbp+Bh]
  struct _EVENT_DATA_DESCRIPTOR v40; // [rsp+C0h] [rbp+Fh] BYREF
  BOOL *v41; // [rsp+E0h] [rbp+2Fh]
  int v42; // [rsp+E8h] [rbp+37h]
  int v43; // [rsp+ECh] [rbp+3Bh]

  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(a1, a2, a3);
  else
    CurrentThreadWin32Thread = 0LL;
  v29 = CurrentThreadWin32Thread;
  v30 = 1;
  if ( CurrentThreadWin32Thread && (*(int *)(CurrentThreadWin32Thread + 24) > 0 || *(_DWORD *)(v29 + 48)) )
  {
    EtwActivityIdControl(3u, &ActivityId);
    if ( (unsigned int)dword_1C028EE70 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
    {
      v34 = 4;
      v35 = 0;
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
    || (v5 = W32kEtwEnabledKeyword, v6 = 0x8000002010000000uLL, (W32kEtwEnabledKeyword & 0x8000002010000000uLL) != 0)
    && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
    && (qword_1C028DB20 & 0x8000002010000000uLL) != 0
    && (qword_1C028DB28 & 0x8000002010000000uLL) == qword_1C028DB28
    || (v6 = 0x200000010000000LL, (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0)
    && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
    && (qword_1C028DB20 & 0x200000010000000LL) != 0
    && (qword_1C028DB28 & 0x200000010000000LL) == qword_1C028DB28 )
  {
    v25 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, v5, v6);
    if ( v25 )
      v25[1] = KeQueryPerformanceCounter(0LL);
  }
  v7 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
  EtwTraceAcquiredExclusiveUserCrit();
  if ( v7 )
  {
    v12 = *v7;
    if ( v29 )
    {
      v9 = (struct tagTHREADINFO *)*(unsigned int *)(v29 + 24);
      if ( *(_DWORD *)(v29 + 48) || (int)v9 > 0 )
      {
        *(_DWORD *)(v29 + 44) = 1;
        *(GUID *)(v29 + 28) = ActivityId;
        v10 = (unsigned int)dword_1C028EE70;
        if ( (unsigned int)dword_1C028EE70 > 6 )
        {
          if ( tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
          {
            v38 = 4;
            v39 = 0;
            v28 = v30 == 1;
            v37 = &v28;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C028EE70,
              (unsigned __int8 *)dword_1C025AD22,
              &ActivityId,
              0LL,
              3u,
              &v36);
            v10 = (unsigned int)dword_1C028EE70;
          }
          if ( (unsigned int)v10 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
          {
            v42 = 4;
            v43 = 0;
            v28 = v30 == 1;
            v41 = &v28;
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
    gptiCurrent = v12;
    if ( v12 )
    {
      *((_DWORD *)v12 + 377) = 1;
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v9);
      if ( CurrentProcessWin32Process )
      {
        if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
        {
          v9 = gptiCurrent;
          if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0 && (*((_DWORD *)gptiCurrent + 314) & 0x80u) == 0 )
          {
            while ( 1 )
            {
              v14 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
              if ( !gpSharedUserCritDeferredUnlockListHead )
                break;
              v26 = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2);
              v27 = *(_QWORD *)gpSharedUserCritDeferredUnlockListHead;
              *((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2) = 0LL;
              gpSharedUserCritDeferredUnlockListHead = v26;
              if ( !*(_DWORD *)(v27 + 8) )
              {
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v27, v8, v10);
                v27 = *v14;
              }
              HMUnlockObject(v27);
            }
          }
        }
      }
    }
  }
  else
  {
    InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v29);
    gptiCurrent = 0LL;
  }
  CurrentProcess = (PVOID)PsGetCurrentProcess(v9, v8, v10, v11);
  if ( CurrentProcess && CurrentProcess == g_pepDwm && !CInputThreadBase::IsInputThread(gpInputThread) )
  {
    v19 = UserSetMITInputCallbacks(a1);
    if ( v19 && !CInputThreadBase::IsInputThread(gpInputThread) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v21, v20, v22);
  }
  else
  {
    v19 = 0;
    UserSetLastError(5LL, v16, v17, v18);
  }
  UserSessionSwitchLeaveCrit(v21, v20, v22, v23);
  return v19;
}
