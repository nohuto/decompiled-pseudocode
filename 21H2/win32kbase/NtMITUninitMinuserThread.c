/*
 * XREFs of NtMITUninitMinuserThread @ 0x1C0156050
 * Callers:
 *     <none>
 * Callees:
 *     IsThreadCrossSessionAttached @ 0x1C0022CC0 (IsThreadCrossSessionAttached.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0028F90 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C002A3A8 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     HMUnlockObject @ 0x1C0038FB0 (HMUnlockObject.c)
 *     ProtectHandle @ 0x1C003AA94 (ProtectHandle.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C004DAC0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtMITUninitMinuserThread(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v5; // rdx
  unsigned __int64 v6; // r8
  LARGE_INTEGER *v7; // rdi
  struct tagTHREADINFO **v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  struct tagTHREADINFO *v13; // rdi
  __int64 CurrentProcessWin32Process; // rax
  struct tagKERNELHANDLETABLEENTRY *v15; // rax
  __int64 v16; // rcx
  __int64 *v17; // rdi
  struct tagTHREADINFO *v18; // rdi
  int v19; // eax
  void *v20; // rcx
  BOOL v22; // [rsp+38h] [rbp-89h] BYREF
  BOOL v23; // [rsp+3Ch] [rbp-85h] BYREF
  BOOL v24; // [rsp+40h] [rbp-81h] BYREF
  __int64 v25; // [rsp+48h] [rbp-79h] BYREF
  int v26; // [rsp+50h] [rbp-71h]
  GUID ActivityId; // [rsp+54h] [rbp-6Dh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v28; // [rsp+68h] [rbp-59h] BYREF
  BOOL *v29; // [rsp+88h] [rbp-39h]
  __int64 v30; // [rsp+90h] [rbp-31h]
  struct _EVENT_DATA_DESCRIPTOR v31; // [rsp+98h] [rbp-29h] BYREF
  BOOL *v32; // [rsp+B8h] [rbp-9h]
  __int64 v33; // [rsp+C0h] [rbp-1h]
  struct _EVENT_DATA_DESCRIPTOR v34; // [rsp+C8h] [rbp+7h] BYREF
  BOOL *v35; // [rsp+E8h] [rbp+27h]
  __int64 v36; // [rsp+F0h] [rbp+2Fh]

  v3 = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(a1, a2, a3);
    v25 = CurrentThreadWin32Thread;
  }
  else
  {
    CurrentThreadWin32Thread = 0LL;
    v25 = 0LL;
  }
  v26 = 1;
  if ( CurrentThreadWin32Thread && (*(int *)(CurrentThreadWin32Thread + 24) > 0 || *(_DWORD *)(v25 + 48)) )
  {
    EtwActivityIdControl(3u, &ActivityId);
    if ( (unsigned int)dword_1C028EE70 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
    {
      v30 = 4LL;
      v22 = v26 == 1;
      v29 = &v22;
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
    v7 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, v5, v6);
    if ( v7 )
      v7[1] = KeQueryPerformanceCounter(0LL);
  }
  v8 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
  EtwTraceAcquiredExclusiveUserCrit();
  if ( v8 )
  {
    v13 = *v8;
    if ( IsThreadCrossSessionAttached() )
      v13 = 0LL;
    if ( v25 )
    {
      v10 = *(unsigned int *)(v25 + 24);
      if ( *(_DWORD *)(v25 + 48) || (int)v10 > 0 )
      {
        *(_DWORD *)(v25 + 44) = 1;
        *(GUID *)(v25 + 28) = ActivityId;
        v11 = (unsigned int)dword_1C028EE70;
        if ( (unsigned int)dword_1C028EE70 > 6 )
        {
          if ( tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
          {
            v33 = 4LL;
            v23 = v26 == 1;
            v32 = &v23;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C028EE70,
              (unsigned __int8 *)dword_1C025AD22,
              &ActivityId,
              0LL,
              3u,
              &v31);
            v11 = (unsigned int)dword_1C028EE70;
          }
          if ( (unsigned int)v11 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
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
    gptiCurrent = v13;
    if ( v13 )
    {
      *((_DWORD *)v13 + 377) = 1;
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v10);
      if ( CurrentProcessWin32Process )
      {
        if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
        {
          v10 = (__int64)gptiCurrent;
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
    InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v25);
    gptiCurrent = 0LL;
  }
  v18 = gptiCurrent;
  v19 = *((_DWORD *)gptiCurrent + 314);
  if ( (v19 & 0x1000000) != 0 )
  {
    v20 = (void *)*((_QWORD *)gptiCurrent + 91);
    *((_DWORD *)gptiCurrent + 314) = v19 & 0xFEFFFFFF;
    ProtectHandle(v20, v9, (struct _OBJECT_TYPE *)ExEventObjectType, 0);
    ObfDereferenceObject(*((PVOID *)v18 + 92));
    *((_QWORD *)v18 + 91) = 0LL;
    *((_QWORD *)v18 + 92) = 0LL;
    v3 = 1LL;
  }
  UserSessionSwitchLeaveCrit(v10, v9, v11, v12);
  return v3;
}
