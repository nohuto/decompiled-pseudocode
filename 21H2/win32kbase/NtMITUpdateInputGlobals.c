/*
 * XREFs of NtMITUpdateInputGlobals @ 0x1C007EB70
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0028F90 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C002A3A8 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     ?IsInputThread@CInputThreadBase@@QEBA_NXZ @ 0x1C0037CB8 (-IsInputThread@CInputThreadBase@@QEBA_NXZ.c)
 *     HMUnlockObject @ 0x1C0038FB0 (HMUnlockObject.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C004DAC0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ?UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z @ 0x1C007DBA0 (-UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z.c)
 *     UpconvertTime @ 0x1C007ED60 (UpconvertTime.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtMITUpdateInputGlobals(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, unsigned int a5)
{
  __int64 v5; // rbx
  unsigned __int16 v7; // r14
  unsigned int v8; // r12d
  unsigned int v9; // r15d
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v11; // rdx
  unsigned __int64 v12; // r8
  struct tagTHREADINFO **v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  struct tagTHREADINFO *v18; // rdi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 *v22; // rdi
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rax
  LARGE_INTEGER *v29; // rdi
  struct tagKERNELHANDLETABLEENTRY *v30; // rax
  __int64 v31; // rcx
  BOOL v32; // [rsp+30h] [rbp-B1h] BYREF
  BOOL v33; // [rsp+34h] [rbp-ADh] BYREF
  BOOL v34; // [rsp+38h] [rbp-A9h] BYREF
  __int64 v35; // [rsp+40h] [rbp-A1h] BYREF
  int v36; // [rsp+48h] [rbp-99h]
  GUID ActivityId; // [rsp+4Ch] [rbp-95h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v38; // [rsp+60h] [rbp-81h] BYREF
  BOOL *v39; // [rsp+80h] [rbp-61h]
  __int64 v40; // [rsp+88h] [rbp-59h]
  struct _EVENT_DATA_DESCRIPTOR v41; // [rsp+90h] [rbp-51h] BYREF
  BOOL *v42; // [rsp+B0h] [rbp-31h]
  __int64 v43; // [rsp+B8h] [rbp-29h]
  struct _EVENT_DATA_DESCRIPTOR v44; // [rsp+C0h] [rbp-21h] BYREF
  BOOL *v45; // [rsp+E0h] [rbp-1h]
  __int64 v46; // [rsp+E8h] [rbp+7h]

  v5 = 0LL;
  v7 = a3;
  v8 = a2;
  v9 = a1;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(a1, a2, a3);
    v35 = CurrentThreadWin32Thread;
  }
  else
  {
    CurrentThreadWin32Thread = 0LL;
    v35 = 0LL;
  }
  v36 = 1;
  if ( CurrentThreadWin32Thread && (*(int *)(CurrentThreadWin32Thread + 24) > 0 || *(_DWORD *)(v35 + 48)) )
  {
    EtwActivityIdControl(3u, &ActivityId);
    if ( (unsigned int)dword_1C028EE70 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
    {
      v40 = 4LL;
      v32 = v36 == 1;
      v39 = &v32;
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
    || (v11 = W32kEtwEnabledKeyword, v12 = 0x8000002010000000uLL, (W32kEtwEnabledKeyword & 0x8000002010000000uLL) != 0)
    && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
    && (qword_1C028DB20 & 0x8000002010000000uLL) != 0
    && (qword_1C028DB28 & 0x8000002010000000uLL) == qword_1C028DB28
    || (v12 = 0x200000010000000LL, (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0)
    && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
    && (qword_1C028DB20 & 0x200000010000000LL) != 0
    && (qword_1C028DB28 & 0x200000010000000LL) == qword_1C028DB28 )
  {
    v29 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, v11, v12);
    if ( v29 )
      v29[1] = KeQueryPerformanceCounter(0LL);
  }
  v13 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
  EtwTraceAcquiredExclusiveUserCrit();
  if ( v13 )
  {
    v18 = *v13;
    if ( v35 )
    {
      v15 = *(unsigned int *)(v35 + 24);
      if ( *(_DWORD *)(v35 + 48) || (int)v15 > 0 )
      {
        *(_DWORD *)(v35 + 44) = 1;
        *(GUID *)(v35 + 28) = ActivityId;
        v16 = (unsigned int)dword_1C028EE70;
        if ( (unsigned int)dword_1C028EE70 > 6 )
        {
          if ( tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
          {
            v43 = 4LL;
            v33 = v36 == 1;
            v42 = &v33;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C028EE70,
              (unsigned __int8 *)dword_1C025AD22,
              &ActivityId,
              0LL,
              3u,
              &v41);
            v16 = (unsigned int)dword_1C028EE70;
          }
          if ( (unsigned int)v16 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
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
    gptiCurrent = v18;
    if ( v18 )
    {
      *((_DWORD *)v18 + 377) = 1;
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v15, v14, v16, v17);
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
            v30 = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2);
            v31 = *(_QWORD *)gpSharedUserCritDeferredUnlockListHead;
            *((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2) = 0LL;
            gpSharedUserCritDeferredUnlockListHead = v30;
            if ( !*(_DWORD *)(v31 + 8) )
            {
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v31, v20, v21);
              v31 = *v22;
            }
            HMUnlockObject(v31);
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
  if ( CInputThreadBase::IsInputThread(gpInputThread) )
  {
    v27 = UpconvertTime(v9);
    CInputGlobals::UpdateInputGlobals((__int64)gpInputGlobals, v27, v8, v7, a4, a5);
    v5 = 1LL;
  }
  UserSessionSwitchLeaveCrit(v24, v23, v25, v26);
  return v5;
}
