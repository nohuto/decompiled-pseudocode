/*
 * XREFs of ?Close@IOCPDispatcher@@QEAAX_N@Z @ 0x1C0059DF0
 * Callers:
 *     DeactivateKSTInputProcessingHelper @ 0x1C005A698 (DeactivateKSTInputProcessingHelper.c)
 *     ??_GIOCPDispatcher@@QEAAPEAXI@Z @ 0x1C005C93C (--_GIOCPDispatcher@@QEAAPEAXI@Z.c)
 *     UserDeactivateMITInputProcessingHelper @ 0x1C01EBD40 (UserDeactivateMITInputProcessingHelper.c)
 * Callees:
 *     IsThreadCrossSessionAttached @ 0x1C0022CC0 (IsThreadCrossSessionAttached.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0028F90 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C002A3A8 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     HMUnlockObject @ 0x1C0038FB0 (HMUnlockObject.c)
 *     ProtectHandle @ 0x1C003AA94 (ProtectHandle.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0043BF0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C004DAC0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ?CleanupThreadDispatcherObjects@IOCPDispatcher@@AEAAXXZ @ 0x1C005A084 (-CleanupThreadDispatcherObjects@IOCPDispatcher@@AEAAXXZ.c)
 *     ?CleanupInputDispatcherObjects@IOCPDispatcher@@AEAAXXZ @ 0x1C005A0F0 (-CleanupInputDispatcherObjects@IOCPDispatcher@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall IOCPDispatcher::Close(HANDLE *this, char a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  HANDLE v8; // rcx
  int v9; // eax
  __int64 v10; // rdx
  PDEVICE_OBJECT v11; // rcx
  __int64 v12; // r8
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v14; // rdx
  unsigned __int64 v15; // r8
  struct tagTHREADINFO **v16; // rbx
  struct tagTHREADINFO *v17; // rbx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 CurrentProcessWin32Process; // rax
  __int64 v22; // r8
  __int64 *v23; // rbx
  HANDLE v24; // rcx
  LARGE_INTEGER *v25; // rbx
  void *v26; // r8
  struct tagKERNELHANDLETABLEENTRY *v27; // rax
  __int64 v28; // rcx
  int v29; // [rsp+30h] [rbp-D8h]
  __int64 v30; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE v31[40]; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v32; // [rsp+88h] [rbp-80h] BYREF
  int v33; // [rsp+90h] [rbp-78h]
  GUID ActivityId; // [rsp+94h] [rbp-74h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v35; // [rsp+A8h] [rbp-60h] BYREF
  __int64 *v36; // [rsp+C8h] [rbp-40h]
  __int64 v37; // [rsp+D0h] [rbp-38h]
  struct _EVENT_DATA_DESCRIPTOR v38; // [rsp+D8h] [rbp-30h] BYREF
  __int64 *v39; // [rsp+F8h] [rbp-10h]
  __int64 v40; // [rsp+100h] [rbp-8h]
  struct _EVENT_DATA_DESCRIPTOR v41; // [rsp+108h] [rbp+0h] BYREF
  __int64 *v42; // [rsp+128h] [rbp+20h]
  __int64 v43; // [rsp+130h] [rbp+28h]

  if ( this[363] )
  {
    IOCPDispatcher::CleanupInputDispatcherObjects((IOCPDispatcher *)this);
    IOCPDispatcher::CleanupThreadDispatcherObjects((IOCPDispatcher *)this);
    if ( a2 )
    {
      UserSessionSwitchLeaveCrit(v5, v4, v6, v7);
      *(_DWORD *)v31 = 0;
      memset(&v31[8], 0, 32);
      while ( 1 )
      {
        v8 = this[363];
        LOBYTE(v29) = 0;
        v30 = -200000LL;
        v9 = ZwRemoveIoCompletionEx(v8, &v31[8], 1LL, v31, &v30, v29);
        v12 = (unsigned int)v9;
        if ( v9 < 0 )
          break;
        if ( v9 == 258 )
          goto LABEL_6;
      }
      v11 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) == 0
        || (LOBYTE(v10) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
      {
        LOBYTE(v10) = 0;
      }
      if ( (_BYTE)v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v26 = &WPP_b99049c1e8dc304ebad6fe568d7717f2_Traceguids;
        LOBYTE(v26) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_D(
          WPP_GLOBAL_Control->AttachedDevice,
          v10,
          (_DWORD)v26,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          2,
          3,
          24,
          (__int64)&WPP_b99049c1e8dc304ebad6fe568d7717f2_Traceguids,
          v9);
      }
LABEL_6:
      if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
        CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v11, v10, v12);
      else
        CurrentThreadWin32Thread = 0LL;
      v32 = CurrentThreadWin32Thread;
      v33 = 1;
      if ( CurrentThreadWin32Thread && (*(int *)(CurrentThreadWin32Thread + 24) > 0 || *(_DWORD *)(v32 + 48)) )
      {
        EtwActivityIdControl(3u, &ActivityId);
        if ( (unsigned int)dword_1C028EE70 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
        {
          v37 = 4LL;
          LODWORD(v30) = v33 == 1;
          v36 = &v30;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C028EE70,
            (unsigned __int8 *)dword_1C025AD79,
            &ActivityId,
            0LL,
            3u,
            &v35);
        }
      }
      if ( dword_1C028D6F0 && tlgKeywordOn((__int64)&dword_1C028D6F0, 0x400000000000LL)
        || (v14 = W32kEtwEnabledKeyword,
            v15 = 0x8000002010000000uLL,
            (W32kEtwEnabledKeyword & 0x8000002010000000uLL) != 0)
        && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
        && (qword_1C028DB20 & 0x8000002010000000uLL) != 0
        && (qword_1C028DB28 & 0x8000002010000000uLL) == qword_1C028DB28
        || (v15 = 0x200000010000000LL, (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0)
        && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
        && (qword_1C028DB20 & 0x200000010000000LL) != 0
        && (qword_1C028DB28 & 0x200000010000000LL) == qword_1C028DB28 )
      {
        v25 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v11, v14, v15);
        if ( v25 )
          v25[1] = KeQueryPerformanceCounter(0LL);
      }
      v16 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
      EtwTraceAcquiredExclusiveUserCrit();
      if ( v16 )
      {
        v17 = *v16;
        if ( IsThreadCrossSessionAttached() )
          v17 = 0LL;
        if ( v32 )
        {
          v18 = *(unsigned int *)(v32 + 24);
          if ( *(_DWORD *)(v32 + 48) || (int)v18 > 0 )
          {
            *(_DWORD *)(v32 + 44) = 1;
            *(GUID *)(v32 + 28) = ActivityId;
            v19 = (unsigned int)dword_1C028EE70;
            if ( (unsigned int)dword_1C028EE70 > 6 )
            {
              if ( tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
              {
                v40 = 4LL;
                LODWORD(v30) = v33 == 1;
                v39 = &v30;
                tlgWriteTransfer_EtwWriteTransfer(
                  (__int64)&dword_1C028EE70,
                  (unsigned __int8 *)dword_1C025AD22,
                  &ActivityId,
                  0LL,
                  3u,
                  &v38);
                v19 = (unsigned int)dword_1C028EE70;
              }
              if ( (unsigned int)v19 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
              {
                v43 = 4LL;
                LODWORD(v30) = v33 == 1;
                v42 = &v30;
                tlgWriteTransfer_EtwWriteTransfer(
                  (__int64)&dword_1C028EE70,
                  (unsigned __int8 *)dword_1C025AD4F,
                  &ActivityId,
                  0LL,
                  3u,
                  &v41);
              }
            }
          }
        }
        gptiCurrent = v17;
        if ( v17 )
        {
          *((_DWORD *)v17 + 377) = 1;
          CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v18, v4, v19, v20);
          if ( CurrentProcessWin32Process )
          {
            if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0
              && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
              && (*((_DWORD *)gptiCurrent + 314) & 0x80u) == 0 )
            {
              while ( 1 )
              {
                v23 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
                if ( !gpSharedUserCritDeferredUnlockListHead )
                  break;
                v27 = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2);
                v28 = *(_QWORD *)gpSharedUserCritDeferredUnlockListHead;
                *((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2) = 0LL;
                gpSharedUserCritDeferredUnlockListHead = v27;
                if ( !*(_DWORD *)(v28 + 8) )
                {
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v28, v4, v22);
                  v28 = *v23;
                }
                HMUnlockObject(v28);
              }
            }
          }
        }
      }
      else
      {
        InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v32);
        gptiCurrent = 0LL;
      }
    }
    v24 = this[364];
    if ( v24 )
    {
      ProtectHandle(v24, v4, 0LL, 0);
      ObCloseHandle(this[364], 1);
      this[364] = 0LL;
    }
    ZwClose(this[363]);
    this[363] = 0LL;
  }
}
