/*
 * XREFs of ?WaitAndDispatch@LegacyInputDispatcher@@QEAAJXZ @ 0x1C0040610
 * Callers:
 *     <none>
 * Callees:
 *     IsThreadCrossSessionAttached @ 0x1C0022CC0 (IsThreadCrossSessionAttached.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0028F90 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C002A3A8 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     HMUnlockObject @ 0x1C0038FB0 (HMUnlockObject.c)
 *     ?UpdateKeyboardLEDs@CKeyboardSensor@@QEAAXXZ @ 0x1C00400A0 (-UpdateKeyboardLEDs@CKeyboardSensor@@QEAAXXZ.c)
 *     ?NeedsUpdateKeyboardLEDs@@YA_NXZ @ 0x1C0040888 (-NeedsUpdateKeyboardLEDs@@YA_NXZ.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C004DAC0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ?Dispatch@LegacyInputDispatcher@@QEBAJI@Z @ 0x1C00B7C14 (-Dispatch@LegacyInputDispatcher@@QEBAJI@Z.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall LegacyInputDispatcher::WaitAndDispatch(LegacyInputDispatcher *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  NTSTATUS v5; // eax
  __int64 v6; // r8
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned int v10; // eax
  void (*v11)(void); // rax
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v14; // rdx
  struct tagTHREADINFO **v15; // rbx
  struct tagTHREADINFO *v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 CurrentProcessWin32Process; // rax
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 *v24; // rbx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  LARGE_INTEGER *v29; // rbx
  struct tagKERNELHANDLETABLEENTRY *v30; // rax
  __int64 v31; // rcx
  BOOL v32; // [rsp+48h] [rbp-29h] BYREF
  __int64 v33; // [rsp+50h] [rbp-21h] BYREF
  int v34; // [rsp+58h] [rbp-19h]
  GUID ActivityId; // [rsp+5Ch] [rbp-15h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v36; // [rsp+70h] [rbp-1h] BYREF
  BOOL *v37; // [rsp+90h] [rbp+1Fh]
  __int64 v38; // [rsp+98h] [rbp+27h]

  while ( 1 )
  {
    if ( NeedsUpdateKeyboardLEDs() )
    {
      if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
        CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v3, v2, v4);
      else
        CurrentThreadWin32Thread = 0LL;
      v33 = CurrentThreadWin32Thread;
      v34 = 1;
      if ( CurrentThreadWin32Thread && (*(int *)(CurrentThreadWin32Thread + 24) > 0 || *(_DWORD *)(v33 + 48)) )
      {
        EtwActivityIdControl(3u, &ActivityId);
        if ( (unsigned int)dword_1C028EE70 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
        {
          v38 = 4LL;
          v32 = v34 == 1;
          v37 = &v32;
          tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C028EE70, (int)&dword_1C025AD79, (int)&ActivityId, 0, 3u, &v36);
        }
      }
      if ( dword_1C028D6F0 && tlgKeywordOn((__int64)&dword_1C028D6F0, 0x400000000000LL)
        || (v14 = W32kEtwEnabledKeyword, (W32kEtwEnabledKeyword & 0x8000002010000000uLL) != 0)
        && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
        && (qword_1C028DB20 & 0x8000002010000000uLL) != 0
        && (qword_1C028DB28 & 0x8000002010000000uLL) == qword_1C028DB28
        || (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0
        && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
        && (qword_1C028DB20 & 0x200000010000000LL) != 0
        && (qword_1C028DB28 & 0x200000010000000LL) == qword_1C028DB28 )
      {
        v29 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v3, v14, v4);
        if ( v29 )
          v29[1] = KeQueryPerformanceCounter(0LL);
      }
      v15 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
      EtwTraceAcquiredExclusiveUserCrit();
      if ( v15 )
      {
        v16 = *v15;
        if ( IsThreadCrossSessionAttached() )
          v16 = 0LL;
        if ( v33 )
        {
          v18 = *(unsigned int *)(v33 + 24);
          if ( *(_DWORD *)(v33 + 48) || (int)v18 > 0 )
          {
            *(_DWORD *)(v33 + 44) = 1;
            *(GUID *)(v33 + 28) = ActivityId;
            v19 = (unsigned int)dword_1C028EE70;
            if ( (unsigned int)dword_1C028EE70 > 6 )
            {
              if ( tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
              {
                v38 = 4LL;
                v32 = v34 == 1;
                v37 = &v32;
                tlgWriteTransfer_EtwWriteTransfer(
                  (int)&dword_1C028EE70,
                  (int)&dword_1C025AD22,
                  (int)&ActivityId,
                  0,
                  3u,
                  &v36);
                v19 = (unsigned int)dword_1C028EE70;
              }
              if ( (unsigned int)v19 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
              {
                v38 = 4LL;
                v32 = v34 == 1;
                v37 = &v32;
                tlgWriteTransfer_EtwWriteTransfer(
                  (int)&dword_1C028EE70,
                  (int)&dword_1C025AD4F,
                  (int)&ActivityId,
                  0,
                  3u,
                  &v36);
              }
            }
          }
        }
        gptiCurrent = v16;
        if ( v16 )
        {
          *((_DWORD *)v16 + 377) = 1;
          CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v18, v17, v19, v20);
          if ( CurrentProcessWin32Process )
          {
            if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0
              && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
              && (*((_DWORD *)gptiCurrent + 314) & 0x80u) == 0 )
            {
              while ( 1 )
              {
                v24 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
                if ( !gpSharedUserCritDeferredUnlockListHead )
                  break;
                v30 = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2);
                v31 = *(_QWORD *)gpSharedUserCritDeferredUnlockListHead;
                *((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2) = 0LL;
                gpSharedUserCritDeferredUnlockListHead = v30;
                if ( !*(_DWORD *)(v31 + 8) )
                {
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v31, v22, v23);
                  v31 = *v24;
                }
                HMUnlockObject(v31);
              }
            }
          }
        }
      }
      else
      {
        InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v33);
        gptiCurrent = 0LL;
      }
      if ( NeedsUpdateKeyboardLEDs() )
        CKeyboardSensor::UpdateKeyboardLEDs(gpKeyboardSensor);
      UserSessionSwitchLeaveCrit(v26, v25, v27, v28);
    }
    v5 = KeWaitForMultipleObjects(
           *((_DWORD *)this + 13),
           *((PVOID **)this + 1),
           WaitAny,
           WrUserRequest,
           *((_BYTE *)this + 56),
           *((_BYTE *)this + 57),
           0LL,
           *((PKWAIT_BLOCK *)this + 3));
    v7 = (unsigned int)v5;
    if ( v5 < 0 )
      return (unsigned int)v7;
    v8 = *((unsigned int *)this + 13);
    if ( v5 >= (unsigned int)v8 )
      goto LABEL_64;
    v9 = *((unsigned int *)this + 10);
    v10 = v9;
    if ( (unsigned int)v9 >= (unsigned int)v8 && (_DWORD)v9 != 64 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8, v6);
      v10 = *((_DWORD *)this + 10);
    }
    if ( (unsigned int)v7 < v10 || v10 == 64 )
    {
LABEL_64:
      if ( (unsigned int)v7 >= *((_DWORD *)this + 10) )
        return (unsigned int)v7;
      v11 = *(void (**)(void))(*((_QWORD *)this + 4) + 16 * v7);
      if ( !v11 )
        return (unsigned int)v7;
      v11();
    }
    else
    {
      LegacyInputDispatcher::Dispatch(this, v7);
    }
  }
}
