/*
 * XREFs of NtUserRegisterTouchPadCapable @ 0x1C00C4240
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0028F90 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C002A3A8 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C002CA0C (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C002CA34 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     HMUnlockObject @ 0x1C0038FB0 (HMUnlockObject.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C004DAC0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserRegisterTouchPadCapable(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // edi
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v5; // rdx
  unsigned __int64 v6; // r8
  struct tagTHREADINFO **v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  struct tagTHREADINFO *v11; // rbx
  __int64 CurrentProcessWin32Process; // rax
  __int64 *v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  LARGE_INTEGER *v19; // rbx
  struct tagKERNELHANDLETABLEENTRY *v20; // rax
  __int64 v21; // rcx
  _BYTE v22[4]; // [rsp+38h] [rbp-79h] BYREF
  BOOL v23; // [rsp+3Ch] [rbp-75h] BYREF
  __int64 v24; // [rsp+40h] [rbp-71h] BYREF
  int v25; // [rsp+48h] [rbp-69h]
  GUID ActivityId; // [rsp+4Ch] [rbp-65h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v27; // [rsp+60h] [rbp-51h] BYREF
  BOOL *v28; // [rsp+80h] [rbp-31h]
  int v29; // [rsp+88h] [rbp-29h]
  int v30; // [rsp+8Ch] [rbp-25h]
  struct _EVENT_DATA_DESCRIPTOR v31; // [rsp+90h] [rbp-21h] BYREF
  BOOL *v32; // [rsp+B0h] [rbp-1h]
  int v33; // [rsp+B8h] [rbp+7h]
  int v34; // [rsp+BCh] [rbp+Bh]
  struct _EVENT_DATA_DESCRIPTOR v35; // [rsp+C0h] [rbp+Fh] BYREF
  BOOL *v36; // [rsp+E0h] [rbp+2Fh]
  int v37; // [rsp+E8h] [rbp+37h]
  int v38; // [rsp+ECh] [rbp+3Bh]

  v3 = a1;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(a1, a2, a3);
  else
    CurrentThreadWin32Thread = 0LL;
  v24 = CurrentThreadWin32Thread;
  v25 = 1;
  if ( CurrentThreadWin32Thread && (*(int *)(CurrentThreadWin32Thread + 24) > 0 || *(_DWORD *)(v24 + 48)) )
  {
    EtwActivityIdControl(3u, &ActivityId);
    if ( (unsigned int)dword_1C028EE70 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
    {
      v29 = 4;
      v30 = 0;
      v23 = v25 == 1;
      v28 = &v23;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_1C028EE70,
        (unsigned __int8 *)dword_1C025AD79,
        &ActivityId,
        0LL,
        3u,
        &v27);
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
    v19 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, v5, v6);
    if ( v19 )
      v19[1] = KeQueryPerformanceCounter(0LL);
  }
  v7 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
  EtwTraceAcquiredExclusiveUserCrit();
  if ( v7 )
  {
    v11 = *v7;
    if ( v24 )
    {
      v9 = *(unsigned int *)(v24 + 24);
      if ( *(_DWORD *)(v24 + 48) || (int)v9 > 0 )
      {
        *(_DWORD *)(v24 + 44) = 1;
        *(GUID *)(v24 + 28) = ActivityId;
        v10 = (unsigned int)dword_1C028EE70;
        if ( (unsigned int)dword_1C028EE70 > 6 )
        {
          if ( tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
          {
            v33 = 4;
            v34 = 0;
            v23 = v25 == 1;
            v32 = &v23;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C028EE70,
              (unsigned __int8 *)dword_1C025AD22,
              &ActivityId,
              0LL,
              3u,
              &v31);
            v10 = (unsigned int)dword_1C028EE70;
          }
          if ( (unsigned int)v10 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
          {
            v37 = 4;
            v38 = 0;
            v23 = v25 == 1;
            v36 = &v23;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C028EE70,
              (unsigned __int8 *)dword_1C025AD4F,
              &ActivityId,
              0LL,
              3u,
              &v35);
          }
        }
      }
    }
    gptiCurrent = v11;
    if ( v11 )
    {
      *((_DWORD *)v11 + 377) = 1;
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
            v20 = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2);
            v21 = *(_QWORD *)gpSharedUserCritDeferredUnlockListHead;
            *((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2) = 0LL;
            gpSharedUserCritDeferredUnlockListHead = v20;
            if ( !*(_DWORD *)(v21 + 8) )
            {
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v21, v8, v10);
              v21 = *v13;
            }
            HMUnlockObject(v21);
          }
        }
      }
    }
  }
  else
  {
    InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v24);
    gptiCurrent = 0LL;
  }
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v22, v8, v10);
  *((_DWORD *)gptiCurrent + 314) = *((_DWORD *)gptiCurrent + 314) & 0xFFFEFFFF | (v3 != 0 ? 0x10000 : 0);
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v22);
  UserSessionSwitchLeaveCrit(v15, v14, v16, v17);
  return 1LL;
}
