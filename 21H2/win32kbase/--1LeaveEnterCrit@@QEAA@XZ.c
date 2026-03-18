/*
 * XREFs of ??1LeaveEnterCrit@@QEAA@XZ @ 0x1C005A46C
 * Callers:
 *     RIMAddInjectionDeviceOfType @ 0x1C0004880 (RIMAddInjectionDeviceOfType.c)
 *     xxxCreateThreadInfo @ 0x1C003911C (xxxCreateThreadInfo.c)
 *     ?xxxDwmProcessStartup@@YAJPEAX@Z @ 0x1C00594C8 (-xxxDwmProcessStartup@@YAJPEAX@Z.c)
 * Callees:
 *     IsThreadCrossSessionAttached @ 0x1C0022CC0 (IsThreadCrossSessionAttached.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0028F90 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C002A3A8 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     HMUnlockObject @ 0x1C0038FB0 (HMUnlockObject.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C004DAC0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall LeaveEnterCrit::~LeaveEnterCrit(LeaveEnterCrit *this, __int64 a2, __int64 a3)
{
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v4; // rdx
  unsigned __int64 v5; // r8
  LARGE_INTEGER *v6; // rbx
  struct tagTHREADINFO **v7; // rbx
  struct tagTHREADINFO *v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 CurrentProcessWin32Process; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 *v16; // rbx
  struct tagKERNELHANDLETABLEENTRY *v17; // rax
  __int64 v18; // rcx
  BOOL v20; // [rsp+38h] [rbp-79h] BYREF
  __int64 v21; // [rsp+40h] [rbp-71h] BYREF
  int v22; // [rsp+48h] [rbp-69h]
  GUID ActivityId; // [rsp+4Ch] [rbp-65h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v24; // [rsp+60h] [rbp-51h] BYREF
  BOOL *v25; // [rsp+80h] [rbp-31h]
  __int64 v26; // [rsp+88h] [rbp-29h]
  struct _EVENT_DATA_DESCRIPTOR v27; // [rsp+90h] [rbp-21h] BYREF
  BOOL *v28; // [rsp+B0h] [rbp-1h]
  __int64 v29; // [rsp+B8h] [rbp+7h]
  struct _EVENT_DATA_DESCRIPTOR v30; // [rsp+C0h] [rbp+Fh] BYREF
  BOOL *v31; // [rsp+E0h] [rbp+2Fh]
  __int64 v32; // [rsp+E8h] [rbp+37h]

  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(this, a2, a3);
  else
    CurrentThreadWin32Thread = 0LL;
  v21 = CurrentThreadWin32Thread;
  v22 = 1;
  if ( CurrentThreadWin32Thread && (*(int *)(CurrentThreadWin32Thread + 24) > 0 || *(_DWORD *)(v21 + 48)) )
  {
    EtwActivityIdControl(3u, &ActivityId);
    if ( (unsigned int)dword_1C028EE70 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
    {
      v26 = 4LL;
      v20 = v22 == 1;
      v25 = &v20;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_1C028EE70,
        (unsigned __int8 *)dword_1C025AD79,
        &ActivityId,
        0LL,
        3u,
        &v24);
    }
  }
  if ( dword_1C028D6F0 && tlgKeywordOn((__int64)&dword_1C028D6F0, 0x400000000000LL)
    || (v4 = W32kEtwEnabledKeyword, v5 = 0x8000002010000000uLL, (W32kEtwEnabledKeyword & 0x8000002010000000uLL) != 0)
    && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
    && (qword_1C028DB20 & 0x8000002010000000uLL) != 0
    && (qword_1C028DB28 & 0x8000002010000000uLL) == qword_1C028DB28
    || (v5 = 0x200000010000000LL, (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0)
    && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
    && (qword_1C028DB20 & 0x200000010000000LL) != 0
    && (qword_1C028DB28 & 0x200000010000000LL) == qword_1C028DB28 )
  {
    v6 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(this, v4, v5);
    if ( v6 )
      v6[1] = KeQueryPerformanceCounter(0LL);
  }
  v7 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
  EtwTraceAcquiredExclusiveUserCrit();
  if ( v7 )
  {
    v8 = *v7;
    if ( IsThreadCrossSessionAttached() )
      v8 = 0LL;
    if ( v21 )
    {
      v10 = *(unsigned int *)(v21 + 24);
      if ( *(_DWORD *)(v21 + 48) || (int)v10 > 0 )
      {
        *(_DWORD *)(v21 + 44) = 1;
        *(GUID *)(v21 + 28) = ActivityId;
        v11 = (unsigned int)dword_1C028EE70;
        if ( (unsigned int)dword_1C028EE70 > 6 )
        {
          if ( tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
          {
            v29 = 4LL;
            v20 = v22 == 1;
            v28 = &v20;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C028EE70,
              (unsigned __int8 *)dword_1C025AD22,
              &ActivityId,
              0LL,
              3u,
              &v27);
            v11 = (unsigned int)dword_1C028EE70;
          }
          if ( (unsigned int)v11 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
          {
            v32 = 4LL;
            v20 = v22 == 1;
            v31 = &v20;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C028EE70,
              (unsigned __int8 *)dword_1C025AD4F,
              &ActivityId,
              0LL,
              3u,
              &v30);
          }
        }
      }
    }
    gptiCurrent = v8;
    if ( v8 )
    {
      *((_DWORD *)v8 + 377) = 1;
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v10, v9, v11, v12);
      if ( CurrentProcessWin32Process )
      {
        if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0
          && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
          && (*((_DWORD *)gptiCurrent + 314) & 0x80u) == 0 )
        {
          while ( 1 )
          {
            v16 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
            if ( !gpSharedUserCritDeferredUnlockListHead )
              break;
            v17 = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2);
            v18 = *(_QWORD *)gpSharedUserCritDeferredUnlockListHead;
            *((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2) = 0LL;
            gpSharedUserCritDeferredUnlockListHead = v17;
            if ( !*(_DWORD *)(v18 + 8) )
            {
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v18, v14, v15);
              v18 = *v16;
            }
            HMUnlockObject(v18);
          }
        }
      }
    }
  }
  else
  {
    InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v21);
    gptiCurrent = 0LL;
  }
}
