/*
 * XREFs of ?W32kTraceLoggingEnableCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1C00C5C20
 * Callers:
 *     <none>
 * Callees:
 *     IsThreadCrossSessionAttached @ 0x1C0022CC0 (IsThreadCrossSessionAttached.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0028F90 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     ??0CTempW32TlsForThread@@QEAA@XZ @ 0x1C0029CE8 (--0CTempW32TlsForThread@@QEAA@XZ.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C002A3A8 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     HMUnlockObject @ 0x1C0038FB0 (HMUnlockObject.c)
 *     ??1CTempW32TlsForThread@@QEAA@XZ @ 0x1C0047598 (--1CTempW32TlsForThread@@QEAA@XZ.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C004DAC0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     ?CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z @ 0x1C023F0CC (-CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall W32kTraceLoggingEnableCallback(const struct _GUID *a1, int a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v10; // rdx
  unsigned __int64 v11; // r8
  LARGE_INTEGER *v12; // rbx
  struct tagTHREADINFO **v13; // rbx
  struct tagTHREADINFO *v14; // rbx
  __int64 v15; // rcx
  unsigned int v16; // r8d
  __int64 CurrentProcessWin32Process; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  struct tagKERNELHANDLETABLEENTRY *v20; // rax
  __int64 v21; // rcx
  __int64 *v22; // rbx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rdx
  __int64 v28; // r8
  BOOL v29; // [rsp+30h] [rbp-A1h] BYREF
  _BYTE v30[16]; // [rsp+38h] [rbp-99h] BYREF
  __int64 v31; // [rsp+48h] [rbp-89h] BYREF
  int v32; // [rsp+50h] [rbp-81h]
  GUID ActivityId; // [rsp+54h] [rbp-7Dh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v34; // [rsp+68h] [rbp-69h] BYREF
  BOOL *v35; // [rsp+88h] [rbp-49h]
  __int64 v36; // [rsp+90h] [rbp-41h]
  struct _EVENT_DATA_DESCRIPTOR v37; // [rsp+98h] [rbp-39h] BYREF
  BOOL *v38; // [rsp+B8h] [rbp-19h]
  __int64 v39; // [rsp+C0h] [rbp-11h]
  struct _EVENT_DATA_DESCRIPTOR v40; // [rsp+C8h] [rbp-9h] BYREF
  BOOL *v41; // [rsp+E8h] [rbp+17h]
  __int64 v42; // [rsp+F0h] [rbp+1Fh]

  if ( a2 == 2 )
  {
    CTempW32TlsForThread::CTempW32TlsForThread((CTempW32TlsForThread *)v30);
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
      CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v7, v6, v8);
    else
      CurrentThreadWin32Thread = 0LL;
    v31 = CurrentThreadWin32Thread;
    v32 = 1;
    if ( CurrentThreadWin32Thread && (*(int *)(CurrentThreadWin32Thread + 24) > 0 || *(_DWORD *)(v31 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C028EE70 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
      {
        v36 = 4LL;
        v29 = v32 == 1;
        v35 = &v29;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C028EE70,
          (unsigned __int8 *)dword_1C025AD79,
          &ActivityId,
          0LL,
          3u,
          &v34);
      }
    }
    if ( dword_1C028D6F0 && tlgKeywordOn((__int64)&dword_1C028D6F0, 0x400000000000LL)
      || (v10 = W32kEtwEnabledKeyword, v11 = 0x8000002010000000uLL, (W32kEtwEnabledKeyword & 0x8000002010000000uLL) != 0)
      && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
      && (qword_1C028DB20 & 0x8000002010000000uLL) != 0
      && (qword_1C028DB28 & 0x8000002010000000uLL) == qword_1C028DB28
      || (v11 = 0x200000010000000LL, (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0)
      && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
      && (qword_1C028DB20 & 0x200000010000000LL) != 0
      && (qword_1C028DB28 & 0x200000010000000LL) == qword_1C028DB28 )
    {
      v12 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v7, v10, v11);
      if ( v12 )
        v12[1] = KeQueryPerformanceCounter(0LL);
    }
    v13 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
    EtwTraceAcquiredExclusiveUserCrit();
    if ( v13 )
    {
      v14 = *v13;
      if ( IsThreadCrossSessionAttached() )
        v14 = 0LL;
      if ( v31 )
      {
        v15 = *(unsigned int *)(v31 + 24);
        if ( *(_DWORD *)(v31 + 48) || (int)v15 > 0 )
        {
          *(_DWORD *)(v31 + 44) = 1;
          *(GUID *)(v31 + 28) = ActivityId;
          if ( (unsigned int)dword_1C028EE70 > 6 )
          {
            if ( tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
            {
              v39 = 4LL;
              v29 = v32 == 1;
              v38 = &v29;
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_1C028EE70,
                (unsigned __int8 *)dword_1C025AD22,
                &ActivityId,
                0LL,
                3u,
                &v37);
              v16 = dword_1C028EE70;
            }
            if ( v16 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
            {
              v42 = 4LL;
              v29 = v32 == 1;
              v41 = &v29;
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
      gptiCurrent = v14;
      if ( v14 )
      {
        *((_DWORD *)v14 + 377) = 1;
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v15);
        if ( CurrentProcessWin32Process )
        {
          if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0
            && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
            && (*((_DWORD *)gptiCurrent + 314) & 0x80u) == 0 )
          {
            while ( 1 )
            {
              v22 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
              if ( !gpSharedUserCritDeferredUnlockListHead )
                break;
              v20 = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2);
              v21 = *(_QWORD *)gpSharedUserCritDeferredUnlockListHead;
              *((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2) = 0LL;
              gpSharedUserCritDeferredUnlockListHead = v20;
              if ( !*(_DWORD *)(v21 + 8) )
              {
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v21, v18, v19);
                v21 = *v22;
              }
              HMUnlockObject(v21);
            }
          }
        }
      }
    }
    else
    {
      InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v31);
      gptiCurrent = 0LL;
    }
    CitEtwEnableCallback(a1, 2u, a4);
    UserSessionSwitchLeaveCrit(v24, v23, v25, v26);
    CTempW32TlsForThread::~CTempW32TlsForThread((CTempW32TlsForThread *)v30, v27, v28);
  }
}
