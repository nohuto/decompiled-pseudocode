/*
 * XREFs of ?ivHandleKeyboardAsyncKeyStatePacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01ED550
 * Callers:
 *     <none>
 * Callees:
 *     IsThreadCrossSessionAttached @ 0x1C0022CC0 (IsThreadCrossSessionAttached.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0028F90 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C002A3A8 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     HMUnlockObject @ 0x1C0038FB0 (HMUnlockObject.c)
 *     ?HandleLeftRightVKs@CKeyboardProcessor@@SAEE@Z @ 0x1C003E4F0 (-HandleLeftRightVKs@CKeyboardProcessor@@SAEE@Z.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C004DAC0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     WPP_RECORDER_AND_TRACE_SF_s @ 0x1C00E6154 (WPP_RECORDER_AND_TRACE_SF_s.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x1C0186440 (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     ?ApplyKeyStateUpdate@@YAXE_N@Z @ 0x1C01EC470 (-ApplyKeyStateUpdate@@YAXE_N@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CBaseInput::ivHandleKeyboardAsyncKeyStatePacket(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v5; // rdx
  unsigned __int64 v6; // r8
  LARGE_INTEGER *v7; // rbx
  struct tagTHREADINFO **v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // r8
  struct tagTHREADINFO *v11; // rbx
  __int64 v12; // rcx
  __int64 CurrentProcessWin32Process; // rax
  struct tagKERNELHANDLETABLEENTRY *v14; // rax
  __int64 v15; // rcx
  __int64 *v16; // rbx
  unsigned __int8 v17; // al
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rcx
  __int64 v23; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v24; // [rsp+60h] [rbp-A8h] BYREF
  int ActivityId_4; // [rsp+68h] [rbp-A0h]
  GUID ActivityId_8; // [rsp+6Ch] [rbp-9Ch] BYREF
  struct _EVENT_DATA_DESCRIPTOR v27; // [rsp+80h] [rbp-88h] BYREF
  __int64 *v28; // [rsp+A0h] [rbp-68h]
  __int64 v29; // [rsp+A8h] [rbp-60h]
  struct _EVENT_DATA_DESCRIPTOR v30; // [rsp+B0h] [rbp-58h] BYREF
  __int64 *v31; // [rsp+D0h] [rbp-38h]
  __int64 v32; // [rsp+D8h] [rbp-30h]
  struct _EVENT_DATA_DESCRIPTOR v33; // [rsp+E0h] [rbp-28h] BYREF
  __int64 *v34; // [rsp+100h] [rbp-8h]
  __int64 v35; // [rsp+108h] [rbp+0h]

  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(a1, a2, a3);
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
      LODWORD(v23) = ActivityId_4 == 1;
      v28 = &v23;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_1C028EE70,
        (unsigned __int8 *)dword_1C025AD79,
        &ActivityId_8,
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
    v7 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, v5, v6);
    if ( v7 )
      v7[1] = KeQueryPerformanceCounter(0LL);
  }
  v8 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
  EtwTraceAcquiredExclusiveUserCrit();
  if ( v8 )
  {
    v11 = *v8;
    if ( IsThreadCrossSessionAttached() )
      v11 = 0LL;
    if ( v24 )
    {
      v12 = *(unsigned int *)(v24 + 24);
      if ( *(_DWORD *)(v24 + 48) || (int)v12 > 0 )
      {
        *(_DWORD *)(v24 + 44) = 1;
        *(GUID *)(v24 + 28) = ActivityId_8;
        LODWORD(v10) = dword_1C028EE70;
        if ( (unsigned int)dword_1C028EE70 > 6 )
        {
          if ( tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
          {
            v32 = 4LL;
            LODWORD(v23) = ActivityId_4 == 1;
            v31 = &v23;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C028EE70,
              (unsigned __int8 *)dword_1C025AD22,
              &ActivityId_8,
              0LL,
              3u,
              &v30);
            LODWORD(v10) = dword_1C028EE70;
          }
          if ( (unsigned int)v10 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
          {
            v35 = 4LL;
            LODWORD(v23) = ActivityId_4 == 1;
            v34 = &v23;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C028EE70,
              (unsigned __int8 *)dword_1C025AD4F,
              &ActivityId_8,
              0LL,
              3u,
              &v33);
          }
        }
      }
    }
    gptiCurrent = v11;
    if ( v11 )
    {
      *((_DWORD *)v11 + 377) = 1;
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v12);
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
            v14 = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2);
            v15 = *(_QWORD *)gpSharedUserCritDeferredUnlockListHead;
            *((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2) = 0LL;
            gpSharedUserCritDeferredUnlockListHead = v14;
            if ( !*(_DWORD *)(v15 + 8) )
            {
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, v9, v10);
              v15 = *v16;
            }
            HMUnlockObject(v15);
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
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xBu)
    || (LOBYTE(v9) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(v9) = 0;
  }
  if ( (_BYTE)v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_s(
      WPP_GLOBAL_Control->AttachedDevice,
      v9,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      WPP_MAIN_CB.Queue.ListEntry.Flink);
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xBu)
    || (LOBYTE(v9) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(v9) = 0;
  }
  if ( (_BYTE)v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v10) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_Dd(
      WPP_GLOBAL_Control->AttachedDevice,
      v9,
      v10,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      12,
      45,
      (__int64)&WPP_4c82548882e434c25d4dd8d26e311b60_Traceguids,
      *(_WORD *)a2,
      *(_DWORD *)(a2 + 4));
  }
  ApplyKeyStateUpdate(*(_BYTE *)a2, *(_DWORD *)(a2 + 4) != 0);
  v17 = CKeyboardProcessor::HandleLeftRightVKs(*(_BYTE *)a2);
  v21 = v17;
  if ( v17 != *(_WORD *)a2 )
    ApplyKeyStateUpdate(v17, *(_DWORD *)(a2 + 4) != 0);
  UserSessionSwitchLeaveCrit(v21, v18, v19, v20);
  return 1LL;
}
