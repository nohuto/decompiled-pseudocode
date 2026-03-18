/*
 * XREFs of NtUserSetProcessMousewheelRoutingMode @ 0x1C01624A0
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
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserSetProcessMousewheelRoutingMode(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  int v4; // esi
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v6; // rdx
  unsigned __int64 v7; // r8
  LARGE_INTEGER *v8; // rdi
  struct tagTHREADINFO **v9; // rdi
  struct tagTHREADINFO *v10; // rcx
  struct tagTHREADINFO *v11; // rdi
  unsigned int v12; // r8d
  __int64 CurrentProcessWin32Process; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  struct tagKERNELHANDLETABLEENTRY *v16; // rax
  __int64 v17; // rcx
  __int64 *v18; // rdi
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdx
  int v24; // esi
  unsigned int v25; // eax
  BOOL v27; // [rsp+38h] [rbp-79h] BYREF
  __int64 v28; // [rsp+40h] [rbp-71h] BYREF
  int v29; // [rsp+48h] [rbp-69h]
  GUID ActivityId; // [rsp+4Ch] [rbp-65h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v31; // [rsp+60h] [rbp-51h] BYREF
  BOOL *v32; // [rsp+80h] [rbp-31h]
  __int64 v33; // [rsp+88h] [rbp-29h]
  struct _EVENT_DATA_DESCRIPTOR v34; // [rsp+90h] [rbp-21h] BYREF
  BOOL *v35; // [rsp+B0h] [rbp-1h]
  __int64 v36; // [rsp+B8h] [rbp+7h]
  struct _EVENT_DATA_DESCRIPTOR v37; // [rsp+C0h] [rbp+Fh] BYREF
  BOOL *v38; // [rsp+E0h] [rbp+2Fh]
  __int64 v39; // [rsp+E8h] [rbp+37h]

  v3 = 0LL;
  v4 = a1;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(a1, a2, a3);
    v28 = CurrentThreadWin32Thread;
  }
  else
  {
    CurrentThreadWin32Thread = 0LL;
    v28 = 0LL;
  }
  v29 = 1;
  if ( CurrentThreadWin32Thread && (*(int *)(CurrentThreadWin32Thread + 24) > 0 || *(_DWORD *)(v28 + 48)) )
  {
    EtwActivityIdControl(3u, &ActivityId);
    if ( (unsigned int)dword_1C028EE70 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
    {
      v33 = 4LL;
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
    v8 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, v6, v7);
    if ( v8 )
      v8[1] = KeQueryPerformanceCounter(0LL);
  }
  v9 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
  EtwTraceAcquiredExclusiveUserCrit();
  if ( v9 )
  {
    v11 = *v9;
    if ( v28 )
    {
      v10 = (struct tagTHREADINFO *)*(unsigned int *)(v28 + 24);
      if ( *(_DWORD *)(v28 + 48) || (int)v10 > 0 )
      {
        *(_DWORD *)(v28 + 44) = 1;
        *(GUID *)(v28 + 28) = ActivityId;
        if ( (unsigned int)dword_1C028EE70 > 6 )
        {
          if ( tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
          {
            v36 = 4LL;
            v27 = v29 == 1;
            v35 = &v27;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C028EE70,
              (unsigned __int8 *)dword_1C025AD22,
              &ActivityId,
              0LL,
              3u,
              &v34);
            v12 = dword_1C028EE70;
          }
          if ( v12 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
          {
            v39 = 4LL;
            v27 = v29 == 1;
            v38 = &v27;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C028EE70,
              (unsigned __int8 *)dword_1C025AD4F,
              &ActivityId,
              0LL,
              3u,
              &v37);
          }
        }
      }
    }
    gptiCurrent = v11;
    if ( v11 )
    {
      *((_DWORD *)v11 + 377) = 1;
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
              v18 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
              if ( !gpSharedUserCritDeferredUnlockListHead )
                break;
              v16 = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2);
              v17 = *(_QWORD *)gpSharedUserCritDeferredUnlockListHead;
              *((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2) = 0LL;
              gpSharedUserCritDeferredUnlockListHead = v16;
              if ( !*(_DWORD *)(v17 + 8) )
              {
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v17, v14, v15);
                v17 = *v18;
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
    InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v28);
    gptiCurrent = 0LL;
  }
  v19 = PsGetCurrentProcessWin32Process(v10);
  v23 = v19;
  if ( !v19 )
    goto LABEL_51;
  if ( !v4 )
  {
    v25 = *(_DWORD *)(v19 + 820) & 0xFFFE7FFF;
    goto LABEL_50;
  }
  v24 = v4 - 1;
  if ( !v24 )
  {
    v25 = *(_DWORD *)(v19 + 820) & 0xFFFE7FFF | 0x8000;
    goto LABEL_50;
  }
  if ( v24 != 1 )
  {
LABEL_51:
    UserSetLastError(87LL, v19, v21, v22);
    goto LABEL_52;
  }
  v25 = *(_DWORD *)(v19 + 820) & 0xFFFE7FFF | 0x10000;
LABEL_50:
  *(_DWORD *)(v23 + 820) = v25;
  v3 = 1LL;
LABEL_52:
  UserSessionSwitchLeaveCrit(v20, v23, v21, v22);
  return v3;
}
