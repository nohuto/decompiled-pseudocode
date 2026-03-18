/*
 * XREFs of NtSetCursorInputSpace @ 0x1C0156450
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0028F90 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C002A3A8 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     HMUnlockObject @ 0x1C0038FB0 (HMUnlockObject.c)
 *     UserSetLastError @ 0x1C003CCC0 (UserSetLastError.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C004DAC0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     ?BindMouse@CInputConfig@@QEAAJU_LUID@@@Z @ 0x1C01E37B0 (-BindMouse@CInputConfig@@QEAAJU_LUID@@@Z.c)
 *     CheckCapability @ 0x1C01E77C0 (CheckCapability.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtSetCursorInputSpace(struct _LUID a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  __int64 v5; // rax
  __int64 v6; // rdx
  unsigned __int64 v7; // r8
  LARGE_INTEGER *v8; // rsi
  struct tagTHREADINFO **v9; // rsi
  __int64 v10; // rdx
  struct tagTHREADINFO *v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  struct tagTHREADINFO *v14; // rsi
  __int64 CurrentProcessWin32Process; // rax
  struct tagKERNELHANDLETABLEENTRY *v16; // rax
  __int64 v17; // rcx
  __int64 *v18; // rsi
  PVOID CurrentProcess; // rax
  CInputConfig *v20; // rcx
  NTSTATUS v21; // eax
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  BOOL v32; // [rsp+30h] [rbp-89h] BYREF
  __int64 v33; // [rsp+38h] [rbp-81h] BYREF
  int v34; // [rsp+40h] [rbp-79h]
  GUID ActivityId; // [rsp+44h] [rbp-75h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v36; // [rsp+58h] [rbp-61h] BYREF
  BOOL *v37; // [rsp+78h] [rbp-41h]
  __int64 v38; // [rsp+80h] [rbp-39h]
  struct _EVENT_DATA_DESCRIPTOR v39; // [rsp+88h] [rbp-31h] BYREF
  BOOL *v40; // [rsp+A8h] [rbp-11h]
  __int64 v41; // [rsp+B0h] [rbp-9h]
  struct _EVENT_DATA_DESCRIPTOR v42; // [rsp+B8h] [rbp-1h] BYREF
  BOOL *v43; // [rsp+D8h] [rbp+1Fh]
  __int64 v44; // [rsp+E0h] [rbp+27h]

  v3 = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    v5 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))PsGetCurrentThreadWin32Thread)(a1, a2, a3);
  else
    v5 = 0LL;
  v33 = v5;
  v34 = 1;
  if ( v5 && (*(int *)(v5 + 24) > 0 || *(_DWORD *)(v33 + 48)) )
  {
    EtwActivityIdControl(3u, &ActivityId);
    if ( (unsigned int)dword_1C028EE70 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
    {
      v38 = 4LL;
      v32 = v34 == 1;
      v37 = &v32;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_1C028EE70,
        (unsigned __int8 *)dword_1C025AD79,
        &ActivityId,
        0LL,
        3u,
        &v36);
    }
  }
  if ( dword_1C028D6F0 && tlgKeywordOn((__int64)&dword_1C028D6F0, 0x400000000000LL)
    || (v6 = W32kEtwEnabledKeyword, v7 = 0x8000002010000000uLL, (W32kEtwEnabledKeyword & 0x8000002010000000uLL) != 0)
    && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
    && (qword_1C028DB20 & 0x8000002010000000uLL) != 0
    && (qword_1C028DB28 & 0x8000002010000000uLL) == qword_1C028DB28
    || (v7 = 0x200000010000000LL, (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0)
    && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
    && (qword_1C028DB20 & 0x200000010000000LL) != 0
    && (qword_1C028DB28 & 0x200000010000000LL) == qword_1C028DB28 )
  {
    v8 = (LARGE_INTEGER *)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))PsGetCurrentThreadWin32Thread)(a1, v6, v7);
    if ( v8 )
      v8[1] = KeQueryPerformanceCounter(0LL);
  }
  v9 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
  EtwTraceAcquiredExclusiveUserCrit();
  if ( v9 )
  {
    v14 = *v9;
    if ( v33 )
    {
      v11 = (struct tagTHREADINFO *)*(unsigned int *)(v33 + 24);
      if ( *(_DWORD *)(v33 + 48) || (int)v11 > 0 )
      {
        *(_DWORD *)(v33 + 44) = 1;
        *(GUID *)(v33 + 28) = ActivityId;
        v12 = (unsigned int)dword_1C028EE70;
        if ( (unsigned int)dword_1C028EE70 > 6 )
        {
          if ( tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
          {
            v41 = 4LL;
            v32 = v34 == 1;
            v40 = &v32;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C028EE70,
              (unsigned __int8 *)dword_1C025AD22,
              &ActivityId,
              0LL,
              3u,
              &v39);
            v12 = (unsigned int)dword_1C028EE70;
          }
          if ( (unsigned int)v12 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
          {
            v44 = 4LL;
            v32 = v34 == 1;
            v43 = &v32;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C028EE70,
              (unsigned __int8 *)dword_1C025AD4F,
              &ActivityId,
              0LL,
              3u,
              &v42);
          }
        }
      }
    }
    gptiCurrent = v14;
    if ( v14 )
    {
      *((_DWORD *)v14 + 377) = 1;
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v11);
      if ( CurrentProcessWin32Process )
      {
        if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
        {
          v11 = gptiCurrent;
          if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0 && (*((_DWORD *)gptiCurrent + 314) & 0x80u) == 0 )
          {
            while ( 1 )
            {
              v18 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
              if ( !gpSharedUserCritDeferredUnlockListHead )
                break;
              v16 = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2);
              v17 = *(_QWORD *)gpSharedUserCritDeferredUnlockListHead;
              *((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2) = 0LL;
              gpSharedUserCritDeferredUnlockListHead = v16;
              if ( !*(_DWORD *)(v17 + 8) )
              {
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v17, v10, v12);
                v17 = *v18;
              }
              HMUnlockObject(v17);
            }
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
  CurrentProcess = (PVOID)PsGetCurrentProcess(v11, v10, v12, v13);
  if ( CurrentProcess && CurrentProcess == g_pepDwm )
  {
LABEL_50:
    v21 = CInputConfig::BindMouse(v20, a1);
    if ( v21 >= 0 )
    {
      v3 = 1LL;
      goto LABEL_52;
    }
    goto LABEL_46;
  }
  v21 = CheckCapability(L"shellExperienceComposer");
  if ( v21 >= 0 )
  {
    v20 = (CInputConfig *)*(unsigned int *)(PsGetCurrentProcessWin32Process(v22) + 820);
    if ( ((unsigned __int8)v20 & 0x30) == 0 )
    {
      v24 = 5LL;
      goto LABEL_47;
    }
    goto LABEL_50;
  }
LABEL_46:
  v24 = RtlNtStatusToDosError(v21);
LABEL_47:
  UserSetLastError(v24, v23, v25, v26);
LABEL_52:
  UserSessionSwitchLeaveCrit(v28, v27, v29, v30);
  return v3;
}
