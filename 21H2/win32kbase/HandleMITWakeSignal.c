/*
 * XREFs of HandleMITWakeSignal @ 0x1C0037910
 * Callers:
 *     _lambda_0f9e2a8fc479216b45af02f10e3c5bbd_::_lambda_invoker_cdecl_ @ 0x1C00B3CF0 (_lambda_0f9e2a8fc479216b45af02f10e3c5bbd_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     IsThreadCrossSessionAttached @ 0x1C0022CC0 (IsThreadCrossSessionAttached.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0028F90 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C002A3A8 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C0037FE8 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C0038050 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     HMUnlockObject @ 0x1C0038FB0 (HMUnlockObject.c)
 *     ProcessMouseEvent @ 0x1C003ADB0 (ProcessMouseEvent.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C004DAC0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@@Z @ 0x1C0152710 (--$Write@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ExecuteMarshaledInterceptRequest @ 0x1C01E7A40 (ExecuteMarshaledInterceptRequest.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void HandleMITWakeSignal()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  int v3; // ebx
  int v4; // ebx
  int v5; // ebx
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v7; // rdx
  struct tagTHREADINFO **v8; // rbx
  struct tagTHREADINFO *v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 CurrentProcessWin32Process; // rax
  struct tagKERNELHANDLETABLEENTRY *v15; // rbx
  LARGE_INTEGER *v16; // rbx
  const char *v17; // rax
  __int64 v18; // rcx
  BOOL v19; // [rsp+38h] [rbp-D0h] BYREF
  BOOL v20; // [rsp+3Ch] [rbp-CCh] BYREF
  __int64 v21; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v22; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v23; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v24; // [rsp+58h] [rbp-B0h] BYREF
  int ActivityId_4; // [rsp+60h] [rbp-A8h]
  GUID ActivityId_8; // [rsp+64h] [rbp-A4h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v27; // [rsp+78h] [rbp-90h] BYREF
  BOOL *v28; // [rsp+98h] [rbp-70h]
  __int64 v29; // [rsp+A0h] [rbp-68h]
  struct _EVENT_DATA_DESCRIPTOR v30; // [rsp+A8h] [rbp-60h] BYREF
  BOOL *v31; // [rsp+C8h] [rbp-40h]
  __int64 v32; // [rsp+D0h] [rbp-38h]
  struct _EVENT_DATA_DESCRIPTOR v33; // [rsp+D8h] [rbp-30h] BYREF
  __int64 *v34; // [rsp+F8h] [rbp-10h]
  __int64 v35; // [rsp+100h] [rbp-8h]

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
    (InputTraceLogging::ThreadLockedPerfRegion *)&v23,
    "HandleMITWakeSignal",
    0LL);
  while ( 1 )
  {
    v3 = gdwMITWakeReason & -gdwMITWakeReason;
    if ( !v3 )
      break;
    _InterlockedAnd(&gdwMITWakeReason, ~v3);
    if ( (unsigned int)dword_1C028EE70 > 4 && tlgKeywordOn((__int64)&dword_1C028EE70, 2LL) )
    {
      if ( v3 == 1 )
      {
        v17 = "Mouse";
      }
      else if ( v3 == 2 )
      {
        v17 = "InputSinkFromPoint";
      }
      else if ( v3 - 2 == (_DWORD)v0 )
      {
        v17 = "MouseInterceptCallout";
      }
      else
      {
        v17 = "UNKNOWN";
      }
      v22 = (__int64)v17;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
        (int)&dword_1C028EE70,
        (__int64)&v22);
    }
    v4 = v3 - 1;
    if ( v4 )
    {
      v5 = v4 - 1;
      if ( v5 )
      {
        if ( v5 == 2 )
          ExecuteMarshaledInterceptRequest();
      }
      else
      {
        if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
          CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v1, v0, v2);
        else
          CurrentThreadWin32Thread = 0LL;
        v24 = CurrentThreadWin32Thread;
        ActivityId_4 = 1;
        if ( CurrentThreadWin32Thread && (*(int *)(CurrentThreadWin32Thread + 24) > 0 || *(_DWORD *)(v24 + 48)) )
        {
          EtwActivityIdControl(3u, &ActivityId_8);
          if ( (unsigned int)dword_1C028EE70 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
          {
            v29 = 4LL;
            v19 = ActivityId_4 == 1;
            v28 = &v19;
            tlgWriteTransfer_EtwWriteTransfer(
              (int)&dword_1C028EE70,
              (int)&dword_1C025AD79,
              (int)&ActivityId_8,
              0,
              3u,
              &v27);
          }
        }
        if ( dword_1C028D6F0 && tlgKeywordOn((__int64)&dword_1C028D6F0, 0x400000000000LL)
          || (v7 = W32kEtwEnabledKeyword, (W32kEtwEnabledKeyword & 0x8000002010000000uLL) != 0)
          && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
          && (qword_1C028DB20 & 0x8000002010000000uLL) != 0
          && (qword_1C028DB28 & 0x8000002010000000uLL) == qword_1C028DB28
          || (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0
          && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
          && (qword_1C028DB20 & 0x200000010000000LL) != 0
          && (qword_1C028DB28 & 0x200000010000000LL) == qword_1C028DB28 )
        {
          v16 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v1, v7, v2);
          if ( v16 )
            v16[1] = KeQueryPerformanceCounter(0LL);
        }
        v8 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
        EtwTraceAcquiredExclusiveUserCrit();
        if ( v8 )
        {
          v9 = *v8;
          if ( IsThreadCrossSessionAttached() )
            v9 = 0LL;
          if ( v24 )
          {
            v11 = *(unsigned int *)(v24 + 24);
            if ( *(_DWORD *)(v24 + 48) || (int)v11 > 0 )
            {
              *(_DWORD *)(v24 + 44) = 1;
              *(GUID *)(v24 + 28) = ActivityId_8;
              v12 = (unsigned int)dword_1C028EE70;
              if ( (unsigned int)dword_1C028EE70 > 6 )
              {
                if ( tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
                {
                  v32 = 4LL;
                  v20 = ActivityId_4 == 1;
                  v31 = &v20;
                  tlgWriteTransfer_EtwWriteTransfer(
                    (int)&dword_1C028EE70,
                    (int)&dword_1C025AD22,
                    (int)&ActivityId_8,
                    0,
                    3u,
                    &v30);
                  v12 = (unsigned int)dword_1C028EE70;
                }
                if ( (unsigned int)v12 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
                {
                  v35 = 4LL;
                  LODWORD(v21) = ActivityId_4 == 1;
                  v34 = &v21;
                  tlgWriteTransfer_EtwWriteTransfer(
                    (int)&dword_1C028EE70,
                    (int)&dword_1C025AD4F,
                    (int)&ActivityId_8,
                    0,
                    3u,
                    &v33);
                }
              }
            }
          }
          gptiCurrent = v9;
          if ( v9 )
          {
            *((_DWORD *)v9 + 377) = 1;
            CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v11, v10, v12, v13);
            if ( CurrentProcessWin32Process )
            {
              if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
              {
                v11 = (__int64)gptiCurrent;
                if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0 && (*((_DWORD *)gptiCurrent + 314) & 0x80u) == 0 )
                {
                  while ( 1 )
                  {
                    v15 = gpSharedUserCritDeferredUnlockListHead;
                    if ( !gpSharedUserCritDeferredUnlockListHead )
                      break;
                    v18 = *(_QWORD *)gpSharedUserCritDeferredUnlockListHead;
                    gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                                 + 2);
                    *((_QWORD *)v15 + 2) = 0LL;
                    if ( !*(_DWORD *)(v18 + 8) )
                    {
                      MicrosoftTelemetryAssertTriggeredNoArgsKM(v18, v10, v12);
                      v18 = *(_QWORD *)v15;
                    }
                    HMUnlockObject(v18, v10, v12, v13);
                  }
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
        if ( qword_1C029D830 )
          qword_1C029D830();
        UserSessionSwitchLeaveCrit(v11, v10, v12, v13);
      }
    }
    else
    {
      ProcessMouseEvent();
    }
  }
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v23);
}
