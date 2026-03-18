/*
 * XREFs of ?HandleTSRequest@CBaseInput@@QEAAXW4InputTSRequest@@@Z @ 0x1C00528F0
 * Callers:
 *     UserKSTInitialize @ 0x1C0054360 (UserKSTInitialize.c)
 * Callees:
 *     IsThreadCrossSessionAttached @ 0x1C0022CC0 (IsThreadCrossSessionAttached.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0028F90 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C002A3A8 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     isChildPartition @ 0x1C00383F0 (isChildPartition.c)
 *     HMUnlockObject @ 0x1C0038FB0 (HMUnlockObject.c)
 *     ?ExecutingOnSensorHostingThread@CBaseInput@@QEBA_NXZ @ 0x1C003C780 (-ExecutingOnSensorHostingThread@CBaseInput@@QEBA_NXZ.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C004DAC0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ?SensorDoWorkAndWait@CRIMBase@@IEAAXW4DispatcherHandleName@1@@Z @ 0x1C0052B2C (-SensorDoWorkAndWait@CRIMBase@@IEAAXW4DispatcherHandleName@1@@Z.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

char __fastcall CBaseInput::HandleTSRequest(CBaseInput *a1, unsigned int a2)
{
  __int64 v2; // r15
  _UNKNOWN **v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v16; // rdx
  unsigned __int64 v17; // r8
  struct tagTHREADINFO **v18; // rdi
  struct tagTHREADINFO *v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 CurrentProcessWin32Process; // rax
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 *v27; // rdi
  LARGE_INTEGER *v28; // rdi
  bool v29; // bl
  int v30; // edx
  struct tagKERNELHANDLETABLEENTRY *v31; // rax
  __int64 v32; // rcx
  BOOL v34; // [rsp+40h] [rbp-89h] BYREF
  __int64 v35; // [rsp+48h] [rbp-81h] BYREF
  int v36; // [rsp+50h] [rbp-79h]
  GUID ActivityId; // [rsp+54h] [rbp-75h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v38; // [rsp+68h] [rbp-61h] BYREF
  BOOL *v39; // [rsp+88h] [rbp-41h]
  __int64 v40; // [rsp+90h] [rbp-39h]
  struct _EVENT_DATA_DESCRIPTOR v41; // [rsp+98h] [rbp-31h] BYREF
  BOOL *v42; // [rsp+B8h] [rbp-11h]
  __int64 v43; // [rsp+C0h] [rbp-9h]
  struct _EVENT_DATA_DESCRIPTOR v44; // [rsp+C8h] [rbp-1h] BYREF
  BOOL *v45; // [rsp+E8h] [rbp+1Fh]
  __int64 v46; // [rsp+F0h] [rbp+27h]

  v2 = a2;
  LOBYTE(v4) = isChildPartition();
  if ( !(_BYTE)v4 )
  {
    if ( *((_DWORD *)a1 + 328) )
    {
      if ( (unsigned int)v2 < 4 )
      {
        if ( *((_DWORD *)&unk_1C0243620 + 6 * v2) != (_DWORD)v2 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, v5, v7);
        if ( *((_DWORD *)&unk_1C0243620 + 6 * v2 + 4) >= 0x11u || CBaseInput::ExecutingOnSensorHostingThread(a1) )
        {
          (*((void (__fastcall **)(CBaseInput *))&unk_1C0243620 + 3 * v2 + 1))(a1);
        }
        else
        {
          UserSessionSwitchLeaveCrit(v9, v8, v10, v11);
          CRIMBase::SensorDoWorkAndWait(a1, *((unsigned int *)&unk_1C0243620 + 6 * v2 + 4));
          if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
            CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v13, v12, v14);
          else
            CurrentThreadWin32Thread = 0LL;
          v35 = CurrentThreadWin32Thread;
          v36 = 1;
          if ( CurrentThreadWin32Thread && (*(int *)(CurrentThreadWin32Thread + 24) > 0 || *(_DWORD *)(v35 + 48)) )
          {
            EtwActivityIdControl(3u, &ActivityId);
            if ( (unsigned int)dword_1C028EE70 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
            {
              v40 = 4LL;
              v34 = v36 == 1;
              v39 = &v34;
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_1C028EE70,
                (unsigned __int8 *)dword_1C025AD79,
                &ActivityId,
                0LL,
                3u,
                &v38);
            }
          }
          if ( dword_1C028D6F0 && tlgKeywordOn((__int64)&dword_1C028D6F0, 0x400000000000LL)
            || (v16 = W32kEtwEnabledKeyword,
                v17 = 0x8000002010000000uLL,
                (W32kEtwEnabledKeyword & 0x8000002010000000uLL) != 0)
            && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
            && (qword_1C028DB20 & 0x8000002010000000uLL) != 0
            && (qword_1C028DB28 & 0x8000002010000000uLL) == qword_1C028DB28
            || (v17 = 0x200000010000000LL, (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0)
            && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
            && (qword_1C028DB20 & 0x200000010000000LL) != 0
            && (qword_1C028DB28 & 0x200000010000000LL) == qword_1C028DB28 )
          {
            v28 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v13, v16, v17);
            if ( v28 )
              v28[1] = KeQueryPerformanceCounter(0LL);
          }
          v18 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
          EtwTraceAcquiredExclusiveUserCrit();
          if ( v18 )
          {
            v19 = *v18;
            if ( IsThreadCrossSessionAttached() )
              v19 = 0LL;
            if ( v35 )
            {
              v21 = *(unsigned int *)(v35 + 24);
              if ( *(_DWORD *)(v35 + 48) || (int)v21 > 0 )
              {
                *(_DWORD *)(v35 + 44) = 1;
                *(GUID *)(v35 + 28) = ActivityId;
                v22 = (unsigned int)dword_1C028EE70;
                if ( (unsigned int)dword_1C028EE70 > 6 )
                {
                  if ( tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
                  {
                    v43 = 4LL;
                    v34 = v36 == 1;
                    v42 = &v34;
                    tlgWriteTransfer_EtwWriteTransfer(
                      (__int64)&dword_1C028EE70,
                      (unsigned __int8 *)dword_1C025AD22,
                      &ActivityId,
                      0LL,
                      3u,
                      &v41);
                    v22 = (unsigned int)dword_1C028EE70;
                  }
                  if ( (unsigned int)v22 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
                  {
                    v46 = 4LL;
                    v34 = v36 == 1;
                    v45 = &v34;
                    tlgWriteTransfer_EtwWriteTransfer(
                      (__int64)&dword_1C028EE70,
                      (unsigned __int8 *)dword_1C025AD4F,
                      &ActivityId,
                      0LL,
                      3u,
                      &v44);
                  }
                }
              }
            }
            gptiCurrent = v19;
            if ( v19 )
            {
              *((_DWORD *)v19 + 377) = 1;
              CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v21, v20, v22, v23);
              if ( CurrentProcessWin32Process )
              {
                if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0
                  && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
                  && (*((_DWORD *)gptiCurrent + 314) & 0x80u) == 0 )
                {
                  while ( 1 )
                  {
                    v27 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
                    if ( !gpSharedUserCritDeferredUnlockListHead )
                      break;
                    v31 = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2);
                    v32 = *(_QWORD *)gpSharedUserCritDeferredUnlockListHead;
                    *((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2) = 0LL;
                    gpSharedUserCritDeferredUnlockListHead = v31;
                    if ( !*(_DWORD *)(v32 + 8) )
                    {
                      MicrosoftTelemetryAssertTriggeredNoArgsKM(v32, v25, v26);
                      v32 = *v27;
                    }
                    HMUnlockObject(v32);
                  }
                }
              }
            }
          }
          else
          {
            InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v35);
            gptiCurrent = 0LL;
          }
        }
      }
      LOBYTE(v4) = (*(__int64 (__fastcall **)(CBaseInput *, _QWORD))(*(_QWORD *)a1 + 128LL))(a1, (unsigned int)v2);
    }
    else
    {
      if ( (((_DWORD)v2 - 1) & 0xFFFFFFFD) != 0 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, v5, v7);
      v29 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
         && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000000) != 0
         && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
      v4 = &WPP_RECORDER_INITIALIZED;
      if ( v29 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v30 = 11;
        LOBYTE(v30) = v29;
        LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        LOBYTE(v4) = WPP_RECORDER_AND_TRACE_SF_(
                       WPP_GLOBAL_Control->AttachedDevice,
                       v30,
                       v7,
                       WPP_MAIN_CB.Queue.ListEntry.Flink,
                       3,
                       25,
                       11,
                       (__int64)&WPP_b99049c1e8dc304ebad6fe568d7717f2_Traceguids);
      }
    }
  }
  return (char)v4;
}
