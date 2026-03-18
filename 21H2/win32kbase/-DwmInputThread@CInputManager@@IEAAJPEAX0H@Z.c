/*
 * XREFs of ?DwmInputThread@CInputManager@@IEAAJPEAX0H@Z @ 0x1C023BE68
 * Callers:
 *     NtCompositionInputThread @ 0x1C023CF30 (NtCompositionInputThread.c)
 * Callees:
 *     IsThreadCrossSessionAttached @ 0x1C0022CC0 (IsThreadCrossSessionAttached.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0028F90 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C002A3A8 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     HMUnlockObject @ 0x1C0038FB0 (HMUnlockObject.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C004DAC0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     ?CleanupDwmInputThread@CInputManager@@IEAAXXZ @ 0x1C023BDC0 (-CleanupDwmInputThread@CInputManager@@IEAAXXZ.c)
 *     ?ValidateUserEvent@CInputManager@@CAJPEAXPEAPEAX@Z @ 0x1C023C6CC (-ValidateUserEvent@CInputManager@@CAJPEAXPEAPEAX@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CInputManager::DwmInputThread(CInputManager *this, void *a2, void *a3, int a4)
{
  CInputManager *v4; // rsi
  int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // r8
  struct _KTHREAD *CurrentThread; // rcx
  signed __int64 v11; // rax
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v13; // rdx
  unsigned __int64 v14; // r8
  LARGE_INTEGER *v15; // rdi
  struct tagTHREADINFO **v16; // rdi
  struct tagTHREADINFO *v17; // rdi
  __int64 v18; // rcx
  unsigned int v19; // r8d
  __int64 CurrentProcessWin32Process; // rax
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // rcx
  __int64 *v24; // rdi
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  BOOL v30; // [rsp+30h] [rbp-99h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-91h] BYREF
  HANDLE v32; // [rsp+40h] [rbp-89h] BYREF
  __int64 v33; // [rsp+48h] [rbp-81h] BYREF
  int v34; // [rsp+50h] [rbp-79h]
  GUID ActivityId; // [rsp+54h] [rbp-75h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v36; // [rsp+68h] [rbp-61h] BYREF
  BOOL *v37; // [rsp+88h] [rbp-41h]
  __int64 v38; // [rsp+90h] [rbp-39h]
  struct _EVENT_DATA_DESCRIPTOR v39; // [rsp+98h] [rbp-31h] BYREF
  BOOL *v40; // [rsp+B8h] [rbp-11h]
  __int64 v41; // [rsp+C0h] [rbp-9h]
  struct _EVENT_DATA_DESCRIPTOR v42; // [rsp+C8h] [rbp-1h] BYREF
  BOOL *v43; // [rsp+E8h] [rbp+1Fh]
  __int64 v44; // [rsp+F0h] [rbp+27h]

  v4 = g_pInputManager;
  Handle = 0LL;
  v32 = 0LL;
  v7 = CInputManager::ValidateUserEvent(a2, &Handle);
  if ( v7 < 0 )
    return (unsigned int)v7;
  v7 = CInputManager::ValidateUserEvent(a3, &v32);
  if ( v7 < 0 )
    return (unsigned int)v7;
  CurrentThread = KeGetCurrentThread();
  v11 = _InterlockedCompareExchange64((volatile signed __int64 *)v4 + 1, (signed __int64)CurrentThread, 0LL);
  if ( !v11 || (CurrentThread = KeGetCurrentThread(), (struct _KTHREAD *)v11 == CurrentThread) )
  {
    *((_QWORD *)v4 + 2) = Handle;
    *((_QWORD *)v4 + 3) = v32;
    *((_QWORD *)v4 + 4) = *(_QWORD *)v4;
    *((_DWORD *)v4 + 15) = a4;
    Handle = 0LL;
    v32 = 0LL;
    if ( qword_1C029CA28 )
    {
      v7 = qword_1C029CA28((char *)v4 + 16);
      if ( v7 < 0 )
      {
LABEL_11:
        if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
          CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(CurrentThread, v8, v9);
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
            v30 = v34 == 1;
            v37 = &v30;
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
          || (v13 = W32kEtwEnabledKeyword,
              v14 = 0x8000002010000000uLL,
              (W32kEtwEnabledKeyword & 0x8000002010000000uLL) != 0)
          && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
          && (qword_1C028DB20 & 0x8000002010000000uLL) != 0
          && (qword_1C028DB28 & 0x8000002010000000uLL) == qword_1C028DB28
          || (v14 = 0x200000010000000LL, (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0)
          && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
          && (qword_1C028DB20 & 0x200000010000000LL) != 0
          && (qword_1C028DB28 & 0x200000010000000LL) == qword_1C028DB28 )
        {
          v15 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(CurrentThread, v13, v14);
          if ( v15 )
            v15[1] = KeQueryPerformanceCounter(0LL);
        }
        v16 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
        EtwTraceAcquiredExclusiveUserCrit();
        if ( v16 )
        {
          v17 = *v16;
          if ( IsThreadCrossSessionAttached() )
            v17 = 0LL;
          if ( v33 )
          {
            v18 = *(unsigned int *)(v33 + 24);
            if ( *(_DWORD *)(v33 + 48) || (int)v18 > 0 )
            {
              *(_DWORD *)(v33 + 44) = 1;
              *(GUID *)(v33 + 28) = ActivityId;
              if ( (unsigned int)dword_1C028EE70 > 6 )
              {
                if ( tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
                {
                  v41 = 4LL;
                  v30 = v34 == 1;
                  v40 = &v30;
                  tlgWriteTransfer_EtwWriteTransfer(
                    (__int64)&dword_1C028EE70,
                    (unsigned __int8 *)dword_1C025AD22,
                    &ActivityId,
                    0LL,
                    3u,
                    &v39);
                  v19 = dword_1C028EE70;
                }
                if ( v19 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
                {
                  v44 = 4LL;
                  v30 = v34 == 1;
                  v43 = &v30;
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
          gptiCurrent = v17;
          if ( v17 )
          {
            *((_DWORD *)v17 + 377) = 1;
            CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v18);
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
                  v23 = *(_QWORD *)gpSharedUserCritDeferredUnlockListHead;
                  gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                               + 2);
                  v24[2] = 0LL;
                  if ( !*(_DWORD *)(v23 + 8) )
                  {
                    MicrosoftTelemetryAssertTriggeredNoArgsKM(v23, v21, v22);
                    v23 = *v24;
                  }
                  HMUnlockObject(v23);
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
        CInputManager::CleanupDwmInputThread(v4);
        UserSessionSwitchLeaveCrit(v26, v25, v27, v28);
        goto LABEL_56;
      }
      if ( qword_1C029CA30 )
      {
        v7 = qword_1C029CA30((char *)v4 + 16);
        goto LABEL_11;
      }
    }
    v7 = -1073741822;
    goto LABEL_11;
  }
  v7 = -2147483631;
LABEL_56:
  if ( Handle )
    ZwClose(Handle);
  if ( v32 )
    ZwClose(v32);
  return (unsigned int)v7;
}
