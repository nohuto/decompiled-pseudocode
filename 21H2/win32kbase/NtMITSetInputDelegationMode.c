/*
 * XREFs of NtMITSetInputDelegationMode @ 0x1C009DB60
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
 *     ProcessInfoFromPID @ 0x1C009DD54 (ProcessInfoFromPID.c)
 *     SetInputDelegationModeImpl @ 0x1C009DE40 (SetInputDelegationModeImpl.c)
 *     CitEnableKeyboardDelegation @ 0x1C009DF2C (CitEnableKeyboardDelegation.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtMITSetInputDelegationMode(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // esi
  unsigned int v4; // r15d
  unsigned int v5; // r14d
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v7; // rdx
  unsigned __int64 v8; // r8
  struct tagTHREADINFO **v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  struct tagTHREADINFO *v14; // rbx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 *v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // rcx
  int v24; // edi
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rbx
  __int64 v28; // rax
  LARGE_INTEGER *v30; // rbx
  struct tagKERNELHANDLETABLEENTRY *v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rcx
  BOOL v34; // [rsp+30h] [rbp-A9h] BYREF
  BOOL v35; // [rsp+34h] [rbp-A5h] BYREF
  BOOL v36; // [rsp+38h] [rbp-A1h] BYREF
  __int64 v37; // [rsp+40h] [rbp-99h] BYREF
  int v38; // [rsp+48h] [rbp-91h]
  GUID ActivityId; // [rsp+4Ch] [rbp-8Dh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v40; // [rsp+60h] [rbp-79h] BYREF
  BOOL *v41; // [rsp+80h] [rbp-59h]
  int v42; // [rsp+88h] [rbp-51h]
  int v43; // [rsp+8Ch] [rbp-4Dh]
  struct _EVENT_DATA_DESCRIPTOR v44; // [rsp+90h] [rbp-49h] BYREF
  BOOL *v45; // [rsp+B0h] [rbp-29h]
  int v46; // [rsp+B8h] [rbp-21h]
  int v47; // [rsp+BCh] [rbp-1Dh]
  struct _EVENT_DATA_DESCRIPTOR v48; // [rsp+C0h] [rbp-19h] BYREF
  BOOL *v49; // [rsp+E0h] [rbp+7h]
  int v50; // [rsp+E8h] [rbp+Fh]
  int v51; // [rsp+ECh] [rbp+13h]

  v3 = a3;
  v4 = a2;
  v5 = a1;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(a1, a2, a3);
  else
    CurrentThreadWin32Thread = 0LL;
  v37 = CurrentThreadWin32Thread;
  v38 = 1;
  if ( CurrentThreadWin32Thread && (*(int *)(CurrentThreadWin32Thread + 24) > 0 || *(_DWORD *)(v37 + 48)) )
  {
    EtwActivityIdControl(3u, &ActivityId);
    if ( (unsigned int)dword_1C028EE70 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
    {
      v42 = 4;
      v43 = 0;
      v34 = v38 == 1;
      v41 = &v34;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_1C028EE70,
        (unsigned __int8 *)dword_1C025AD79,
        &ActivityId,
        0LL,
        3u,
        &v40);
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
    v30 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, v7, v8);
    if ( v30 )
      v30[1] = KeQueryPerformanceCounter(0LL);
  }
  v9 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
  EtwTraceAcquiredExclusiveUserCrit();
  if ( v9 )
  {
    v14 = *v9;
    if ( v37 )
    {
      v11 = *(unsigned int *)(v37 + 24);
      if ( *(_DWORD *)(v37 + 48) || (int)v11 > 0 )
      {
        *(_DWORD *)(v37 + 44) = 1;
        *(GUID *)(v37 + 28) = ActivityId;
        v12 = (unsigned int)dword_1C028EE70;
        if ( (unsigned int)dword_1C028EE70 > 6 )
        {
          if ( tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
          {
            v46 = 4;
            v47 = 0;
            v35 = v38 == 1;
            v45 = &v35;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C028EE70,
              (unsigned __int8 *)dword_1C025AD22,
              &ActivityId,
              0LL,
              3u,
              &v44);
            v12 = (unsigned int)dword_1C028EE70;
          }
          if ( (unsigned int)v12 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
          {
            v50 = 4;
            v51 = 0;
            v36 = v38 == 1;
            v49 = &v36;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C028EE70,
              (unsigned __int8 *)dword_1C025AD4F,
              &ActivityId,
              0LL,
              3u,
              &v48);
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
        if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0
          && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
          && (*((_DWORD *)gptiCurrent + 314) & 0x80u) == 0 )
        {
          while ( 1 )
          {
            v18 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
            if ( !gpSharedUserCritDeferredUnlockListHead )
              break;
            v31 = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2);
            v32 = *(_QWORD *)gpSharedUserCritDeferredUnlockListHead;
            *((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2) = 0LL;
            gpSharedUserCritDeferredUnlockListHead = v31;
            if ( !*(_DWORD *)(v32 + 8) )
            {
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v32, v16, v17);
              v32 = *v18;
            }
            HMUnlockObject(v32);
          }
        }
      }
    }
  }
  else
  {
    InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v37);
    gptiCurrent = 0LL;
  }
  if ( !CInputThreadBase::IsInputThread(gpInputThread) )
    goto LABEL_57;
  if ( !v3 )
    goto LABEL_18;
  if ( !v5 || (v3 & 0xFFFFFFFC) != 0 || *(&InputDelegation::CInputDelegationInfo::gInstance + 1) )
  {
    v33 = 87LL;
LABEL_51:
    v24 = 0;
    UserSetLastError(v33, v19, v20, v21);
    goto LABEL_21;
  }
  if ( !gptiForeground || v5 != ((unsigned int)PsGetThreadProcessId(*(PETHREAD *)gptiForeground) & 0xFFFFFFFC) )
  {
LABEL_57:
    v33 = 5LL;
    goto LABEL_51;
  }
LABEL_18:
  v24 = SetInputDelegationModeImpl(v5, v3);
  if ( v24 && v4 )
  {
    v27 = ProcessInfoFromPID(v4);
    v28 = ProcessInfoFromPID(v5);
    CitEnableKeyboardDelegation(v3 & 1, v28, v27);
  }
LABEL_21:
  UserSessionSwitchLeaveCrit(v23, v22, v25, v26);
  return v24;
}
