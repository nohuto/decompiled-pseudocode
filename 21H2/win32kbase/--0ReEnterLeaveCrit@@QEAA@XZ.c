/*
 * XREFs of ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C001B500
 * Callers:
 *     UserDeleteW32Process @ 0x1C0017780 (UserDeleteW32Process.c)
 *     UserDeleteW32Thread @ 0x1C0019A70 (UserDeleteW32Thread.c)
 *     GreCreateCompatibleDC @ 0x1C002E050 (GreCreateCompatibleDC.c)
 *     RIMDeviceClassNotifyUsingAsyncPnpWorkNotification @ 0x1C00456F8 (RIMDeviceClassNotifyUsingAsyncPnpWorkNotification.c)
 *     ?RegisterDispatcherObject@CBaseInput@@QEAAJPEAVIRegisterInputDispatcherObjects@@@Z @ 0x1C0054C90 (-RegisterDispatcherObject@CBaseInput@@QEAAJPEAVIRegisterInputDispatcherObjects@@@Z.c)
 *     DeactivateKSTInputProcessingHelper @ 0x1C005A698 (DeactivateKSTInputProcessingHelper.c)
 *     UserGetDesktopDC @ 0x1C0071BC0 (UserGetDesktopDC.c)
 *     ResetAccessibilityCountersOnMouseInput @ 0x1C00BBF90 (ResetAccessibilityCountersOnMouseInput.c)
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

ReEnterLeaveCrit *__fastcall ReEnterLeaveCrit::ReEnterLeaveCrit(ReEnterLeaveCrit *this)
{
  __int64 CurrentThreadWin32Thread; // rax
  struct tagTHREADINFO **v3; // rbx
  struct tagTHREADINFO *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 CurrentProcessWin32Process; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  struct tagKERNELHANDLETABLEENTRY *v13; // rbx
  LARGE_INTEGER *v15; // rbx
  struct tagKERNELHANDLETABLEENTRY *v16; // rax
  __int64 v17; // rcx
  BOOL v18; // [rsp+30h] [rbp-89h] BYREF
  __int64 v19; // [rsp+38h] [rbp-81h] BYREF
  int v20; // [rsp+40h] [rbp-79h]
  GUID ActivityId; // [rsp+44h] [rbp-75h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v22; // [rsp+58h] [rbp-61h] BYREF
  BOOL *v23; // [rsp+78h] [rbp-41h]
  __int64 v24; // [rsp+80h] [rbp-39h]
  struct _EVENT_DATA_DESCRIPTOR v25; // [rsp+88h] [rbp-31h] BYREF
  BOOL *v26; // [rsp+A8h] [rbp-11h]
  __int64 v27; // [rsp+B0h] [rbp-9h]
  struct _EVENT_DATA_DESCRIPTOR v28; // [rsp+B8h] [rbp-1h] BYREF
  BOOL *v29; // [rsp+D8h] [rbp+1Fh]
  __int64 v30; // [rsp+E0h] [rbp+27h]

  if ( ExIsResourceAcquiredExclusiveLite(gpresUser) == 1 )
  {
    *(_DWORD *)this = 1;
  }
  else
  {
    *(_DWORD *)this = 0;
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
      CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread();
    else
      CurrentThreadWin32Thread = 0LL;
    v19 = CurrentThreadWin32Thread;
    v20 = 1;
    if ( CurrentThreadWin32Thread && (*(int *)(CurrentThreadWin32Thread + 24) > 0 || *(_DWORD *)(v19 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C028EE70 > 6 )
      {
        if ( (unsigned __int8)tlgKeywordOn(&dword_1C028EE70, 0x2000LL) )
        {
          v24 = 4LL;
          v18 = v20 == 1;
          v23 = &v18;
          tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C028EE70, (int)&dword_1C025AD79, (int)&ActivityId, 0, 3u, &v22);
        }
      }
    }
    if ( dword_1C028D6F0 && (unsigned __int8)tlgKeywordOn(&dword_1C028D6F0, 0x400000000000LL)
      || (W32kEtwEnabledKeyword & 0x8000002010000000uLL) != 0
      && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
      && (qword_1C028DB20 & 0x8000002010000000uLL) != 0
      && (qword_1C028DB28 & 0x8000002010000000uLL) == qword_1C028DB28
      || (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0
      && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
      && (qword_1C028DB20 & 0x200000010000000LL) != 0
      && (qword_1C028DB28 & 0x200000010000000LL) == qword_1C028DB28 )
    {
      v15 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread();
      if ( v15 )
        v15[1] = KeQueryPerformanceCounter(0LL);
    }
    v3 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
    EtwTraceAcquiredExclusiveUserCrit();
    if ( v3 )
    {
      v4 = *v3;
      if ( (unsigned int)IsThreadCrossSessionAttached() )
        v4 = 0LL;
      if ( v19 )
      {
        v6 = *(unsigned int *)(v19 + 24);
        if ( *(_DWORD *)(v19 + 48) || (int)v6 > 0 )
        {
          *(_DWORD *)(v19 + 44) = 1;
          *(GUID *)(v19 + 28) = ActivityId;
          v7 = (unsigned int)dword_1C028EE70;
          if ( (unsigned int)dword_1C028EE70 > 6 )
          {
            if ( (unsigned __int8)tlgKeywordOn(&dword_1C028EE70, 0x2000LL) )
            {
              v27 = 4LL;
              v18 = v20 == 1;
              v26 = &v18;
              tlgWriteTransfer_EtwWriteTransfer(
                (int)&dword_1C028EE70,
                (int)&dword_1C025AD22,
                (int)&ActivityId,
                0,
                3u,
                &v25);
              v7 = (unsigned int)dword_1C028EE70;
            }
            if ( (unsigned int)v7 > 6 && (unsigned __int8)tlgKeywordOn(&dword_1C028EE70, 0x2000LL) )
            {
              v30 = 4LL;
              v18 = v20 == 1;
              v29 = &v18;
              tlgWriteTransfer_EtwWriteTransfer(
                (int)&dword_1C028EE70,
                (int)&dword_1C025AD4F,
                (int)&ActivityId,
                0,
                3u,
                &v28);
            }
          }
        }
      }
      gptiCurrent = v4;
      if ( v4 )
      {
        *((_DWORD *)v4 + 377) = 1;
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v6, v5, v7, v8);
        if ( CurrentProcessWin32Process )
        {
          if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0
            && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
            && (*((_DWORD *)gptiCurrent + 314) & 0x80u) == 0 )
          {
            while ( 1 )
            {
              v13 = gpSharedUserCritDeferredUnlockListHead;
              if ( !gpSharedUserCritDeferredUnlockListHead )
                break;
              v16 = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2);
              v17 = *(_QWORD *)gpSharedUserCritDeferredUnlockListHead;
              *((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2) = 0LL;
              gpSharedUserCritDeferredUnlockListHead = v16;
              if ( !*(_DWORD *)(v17 + 8) )
              {
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v17, v10, v11);
                v17 = *(_QWORD *)v13;
              }
              HMUnlockObject(v17, v10, v11, v12);
            }
          }
        }
      }
    }
    else
    {
      InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v19);
      gptiCurrent = 0LL;
    }
  }
  return this;
}
