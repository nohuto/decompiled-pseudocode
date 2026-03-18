/*
 * XREFs of NtUserUnregisterSessionPort @ 0x1C0164670
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
 *     ?xxxDwmProcessShutdown@@YAJH@Z @ 0x1C0059C80 (-xxxDwmProcessShutdown@@YAJH@Z.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserUnregisterSessionPort(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v4; // rdi
  __int64 v5; // rdx
  unsigned __int64 v6; // r8
  LARGE_INTEGER *v7; // rbx
  struct tagTHREADINFO **v8; // rbx
  __int64 v9; // rdx
  struct tagTHREADINFO *v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  struct tagTHREADINFO *v13; // rbx
  __int64 CurrentProcessWin32Process; // rax
  struct tagKERNELHANDLETABLEENTRY *v15; // rax
  __int64 v16; // rcx
  __int64 *v17; // rbx
  PVOID CurrentProcess; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  BOOL v27; // [rsp+38h] [rbp-69h] BYREF
  __int64 v28; // [rsp+40h] [rbp-61h] BYREF
  int v29; // [rsp+48h] [rbp-59h]
  GUID ActivityId; // [rsp+4Ch] [rbp-55h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v31; // [rsp+60h] [rbp-41h] BYREF
  BOOL *v32; // [rsp+80h] [rbp-21h]
  int v33; // [rsp+88h] [rbp-19h]
  int v34; // [rsp+8Ch] [rbp-15h]
  struct _EVENT_DATA_DESCRIPTOR v35; // [rsp+90h] [rbp-11h] BYREF
  BOOL *v36; // [rsp+B0h] [rbp+Fh]
  int v37; // [rsp+B8h] [rbp+17h]
  int v38; // [rsp+BCh] [rbp+1Bh]
  struct _EVENT_DATA_DESCRIPTOR v39; // [rsp+C0h] [rbp+1Fh] BYREF
  BOOL *v40; // [rsp+E0h] [rbp+3Fh]
  int v41; // [rsp+E8h] [rbp+47h]
  int v42; // [rsp+ECh] [rbp+4Bh]

  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(a1, a2, a3);
  else
    CurrentThreadWin32Thread = 0LL;
  v28 = CurrentThreadWin32Thread;
  v4 = 1LL;
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
    v13 = *v8;
    if ( v28 )
    {
      v10 = (struct tagTHREADINFO *)*(unsigned int *)(v28 + 24);
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
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v10);
      if ( CurrentProcessWin32Process )
      {
        if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
        {
          v10 = gptiCurrent;
          if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0 && (*((_DWORD *)gptiCurrent + 314) & 0x80u) == 0 )
          {
            while ( 1 )
            {
              v17 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
              if ( !gpSharedUserCritDeferredUnlockListHead )
                break;
              v15 = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2);
              v16 = *(_QWORD *)gpSharedUserCritDeferredUnlockListHead;
              *((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2) = 0LL;
              gpSharedUserCritDeferredUnlockListHead = v15;
              if ( !*(_DWORD *)(v16 + 8) )
              {
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, v9, v11);
                v16 = *v17;
              }
              HMUnlockObject(v16);
            }
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
  CurrentProcess = (PVOID)PsGetCurrentProcess(v10, v9, v11, v12);
  if ( CurrentProcess && CurrentProcess == g_pepDwm )
  {
    xxxDwmProcessShutdown(0);
  }
  else
  {
    UserSetLastError(5LL, v19, v20, v21);
    v4 = 0LL;
  }
  UserSessionSwitchLeaveCrit(v23, v22, v24, v25);
  return v4;
}
