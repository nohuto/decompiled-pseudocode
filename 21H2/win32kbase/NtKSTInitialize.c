/*
 * XREFs of NtKSTInitialize @ 0x1C0054130
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0028F90 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C002A3A8 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     ?IsInputThread@CInputThreadBase@@QEBA_NXZ @ 0x1C0037CB8 (-IsInputThread@CInputThreadBase@@QEBA_NXZ.c)
 *     HMUnlockObject @ 0x1C0038FB0 (HMUnlockObject.c)
 *     UserSetLastError @ 0x1C003CCC0 (UserSetLastError.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C004DAC0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     UserKSTInitialize @ 0x1C0054360 (UserKSTInitialize.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtKSTInitialize(void *a1, void *a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v7; // rdx
  unsigned __int64 v8; // r8
  struct tagTHREADINFO **v9; // rdi
  __int64 v10; // rdx
  struct tagTHREADINFO *v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  struct tagTHREADINFO *v14; // rdi
  __int64 CurrentProcessWin32Process; // rax
  __int64 *v16; // rdi
  PVOID CurrentProcess; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  LARGE_INTEGER *v27; // rdi
  struct tagKERNELHANDLETABLEENTRY *v28; // rax
  __int64 v29; // rcx
  BOOL v30; // [rsp+30h] [rbp-89h] BYREF
  __int64 v31; // [rsp+38h] [rbp-81h] BYREF
  int v32; // [rsp+40h] [rbp-79h]
  GUID ActivityId; // [rsp+44h] [rbp-75h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v34; // [rsp+58h] [rbp-61h] BYREF
  BOOL *v35; // [rsp+78h] [rbp-41h]
  __int64 v36; // [rsp+80h] [rbp-39h]
  struct _EVENT_DATA_DESCRIPTOR v37; // [rsp+88h] [rbp-31h] BYREF
  BOOL *v38; // [rsp+A8h] [rbp-11h]
  __int64 v39; // [rsp+B0h] [rbp-9h]
  struct _EVENT_DATA_DESCRIPTOR v40; // [rsp+B8h] [rbp-1h] BYREF
  BOOL *v41; // [rsp+D8h] [rbp+1Fh]
  __int64 v42; // [rsp+E0h] [rbp+27h]

  v3 = 0;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(a1, a2, a3);
    v31 = CurrentThreadWin32Thread;
  }
  else
  {
    CurrentThreadWin32Thread = 0LL;
    v31 = 0LL;
  }
  v32 = 1;
  if ( CurrentThreadWin32Thread && (*(int *)(CurrentThreadWin32Thread + 24) > 0 || *(_DWORD *)(v31 + 48)) )
  {
    EtwActivityIdControl(3u, &ActivityId);
    if ( (unsigned int)dword_1C028EE70 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
    {
      v36 = 4LL;
      v30 = v32 == 1;
      v35 = &v30;
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
    || (v7 = W32kEtwEnabledKeyword, v8 = 0x8000002010000000uLL, (W32kEtwEnabledKeyword & 0x8000002010000000uLL) != 0)
    && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
    && (qword_1C028DB20 & 0x8000002010000000uLL) != 0
    && (qword_1C028DB28 & 0x8000002010000000uLL) == qword_1C028DB28
    || (v8 = 0x200000010000000LL, (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0)
    && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
    && (qword_1C028DB20 & 0x200000010000000LL) != 0
    && (qword_1C028DB28 & 0x200000010000000LL) == qword_1C028DB28 )
  {
    v27 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, v7, v8);
    if ( v27 )
      v27[1] = KeQueryPerformanceCounter(0LL);
  }
  v9 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
  EtwTraceAcquiredExclusiveUserCrit();
  if ( v9 )
  {
    v14 = *v9;
    if ( v31 )
    {
      v11 = (struct tagTHREADINFO *)*(unsigned int *)(v31 + 24);
      if ( *(_DWORD *)(v31 + 48) || (int)v11 > 0 )
      {
        *(_DWORD *)(v31 + 44) = 1;
        *(GUID *)(v31 + 28) = ActivityId;
        v12 = (unsigned int)dword_1C028EE70;
        if ( (unsigned int)dword_1C028EE70 > 6 )
        {
          if ( tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
          {
            v39 = 4LL;
            v30 = v32 == 1;
            v38 = &v30;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C028EE70,
              (unsigned __int8 *)dword_1C025AD22,
              &ActivityId,
              0LL,
              3u,
              &v37);
            v12 = (unsigned int)dword_1C028EE70;
          }
          if ( (unsigned int)v12 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
          {
            v42 = 4LL;
            v30 = v32 == 1;
            v41 = &v30;
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
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v11, v10, v12, v13);
      if ( CurrentProcessWin32Process )
      {
        if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
        {
          v11 = gptiCurrent;
          if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0 && (*((_DWORD *)gptiCurrent + 314) & 0x80u) == 0 )
          {
            while ( 1 )
            {
              v16 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
              if ( !gpSharedUserCritDeferredUnlockListHead )
                break;
              v28 = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2);
              v29 = *(_QWORD *)gpSharedUserCritDeferredUnlockListHead;
              *((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2) = 0LL;
              gpSharedUserCritDeferredUnlockListHead = v28;
              if ( !*(_DWORD *)(v29 + 8) )
              {
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v29, v10, v12);
                v29 = *v16;
              }
              HMUnlockObject(v29);
            }
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
  CurrentProcess = (PVOID)PsGetCurrentProcess(v11, v10, v12, v13);
  if ( (!CurrentProcess || CurrentProcess != g_pepDwm) && PsGetCurrentProcessId() != (HANDLE)gpidLogon )
  {
    if ( !gDWMCapable )
      goto LABEL_52;
    goto LABEL_53;
  }
  if ( !gDWMCapable )
  {
LABEL_52:
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v19, v18, v20);
    goto LABEL_53;
  }
  if ( CInputThreadBase::IsInputThread(gpKernelSensorThread) )
  {
LABEL_53:
    UserSetLastError(5LL, v18, v20, v21);
    goto LABEL_21;
  }
  v3 = UserKSTInitialize(a1, a2);
LABEL_21:
  UserSessionSwitchLeaveCrit(v23, v22, v24, v25);
  return v3;
}
