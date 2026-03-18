/*
 * XREFs of ?ProcessPTPInertiaActions@CHidInput@@QEAA_NPEAX_K@Z @ 0x1C01E2B54
 * Callers:
 *     ?ivHandlePTPInertiaPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01EE470 (-ivHandlePTPInertiaPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z.c)
 * Callees:
 *     IsThreadCrossSessionAttached @ 0x1C0022CC0 (IsThreadCrossSessionAttached.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0028F90 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C002A3A8 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     HMUnlockObject @ 0x1C0038FB0 (HMUnlockObject.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C004DAC0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ?SensorDoWorkAndWait@CRIMBase@@IEAAXW4DispatcherHandleName@1@@Z @ 0x1C0052B2C (-SensorDoWorkAndWait@CRIMBase@@IEAAXW4DispatcherHandleName@1@@Z.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

char __fastcall CHidInput::ProcessPTPInertiaActions(CHidInput *this, __int64 a2, __int64 a3, __int64 a4)
{
  CBaseInput *v4; // rbx
  __int64 v5; // r8
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
  BOOL v24; // [rsp+38h] [rbp-79h] BYREF
  __int64 v25; // [rsp+40h] [rbp-71h] BYREF
  int v26; // [rsp+48h] [rbp-69h]
  GUID ActivityId; // [rsp+4Ch] [rbp-65h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v28; // [rsp+60h] [rbp-51h] BYREF
  BOOL *v29; // [rsp+80h] [rbp-31h]
  __int64 v30; // [rsp+88h] [rbp-29h]
  struct _EVENT_DATA_DESCRIPTOR v31; // [rsp+90h] [rbp-21h] BYREF
  BOOL *v32; // [rsp+B0h] [rbp-1h]
  __int64 v33; // [rsp+B8h] [rbp+7h]
  struct _EVENT_DATA_DESCRIPTOR v34; // [rsp+C0h] [rbp+Fh] BYREF
  BOOL *v35; // [rsp+E0h] [rbp+2Fh]
  __int64 v36; // [rsp+E8h] [rbp+37h]

  v4 = gpHidInput;
  *((_QWORD *)gpHidInput + 176) = a2;
  *((_QWORD *)v4 + 177) = a3;
  UserSessionSwitchLeaveCrit((__int64)this, a2, a3, a4);
  CRIMBase::SensorDoWorkAndWait((__int64)v4, 16LL, v5);
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v7, v6, v8);
  else
    CurrentThreadWin32Thread = 0LL;
  v25 = CurrentThreadWin32Thread;
  v26 = 1;
  if ( CurrentThreadWin32Thread && (*(int *)(CurrentThreadWin32Thread + 24) > 0 || *(_DWORD *)(v25 + 48)) )
  {
    EtwActivityIdControl(3u, &ActivityId);
    if ( (unsigned int)dword_1C028EE70 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
    {
      v30 = 4LL;
      v24 = v26 == 1;
      v29 = &v24;
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
    if ( v25 )
    {
      v15 = *(unsigned int *)(v25 + 24);
      if ( *(_DWORD *)(v25 + 48) || (int)v15 > 0 )
      {
        *(_DWORD *)(v25 + 44) = 1;
        *(GUID *)(v25 + 28) = ActivityId;
        if ( (unsigned int)dword_1C028EE70 > 6 )
        {
          if ( tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
          {
            v33 = 4LL;
            v24 = v26 == 1;
            v32 = &v24;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C028EE70,
              (unsigned __int8 *)dword_1C025AD22,
              &ActivityId,
              0LL,
              3u,
              &v31);
            v16 = dword_1C028EE70;
          }
          if ( v16 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
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
    InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v25);
    gptiCurrent = 0LL;
  }
  return 1;
}
