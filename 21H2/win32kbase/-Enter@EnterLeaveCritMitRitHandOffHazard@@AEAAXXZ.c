/*
 * XREFs of ?Enter@EnterLeaveCritMitRitHandOffHazard@@AEAAXXZ @ 0x1C00070A0
 * Callers:
 *     NtUserInjectKeyboardInput @ 0x1C0003160 (NtUserInjectKeyboardInput.c)
 *     NtUserInitializeGenericHidInjection @ 0x1C015B1B0 (NtUserInitializeGenericHidInjection.c)
 *     NtUserInitializeInputDeviceInjection @ 0x1C015BD40 (NtUserInitializeInputDeviceInjection.c)
 *     NtUserInitializePointerDeviceInjectionEx @ 0x1C015C5F0 (NtUserInitializePointerDeviceInjectionEx.c)
 *     NtUserInjectDeviceInput @ 0x1C015C9F0 (NtUserInjectDeviceInput.c)
 *     NtUserInjectGenericHidInput @ 0x1C015D580 (NtUserInjectGenericHidInput.c)
 *     NtUserInjectMouseInput @ 0x1C015DD80 (NtUserInjectMouseInput.c)
 *     NtUserInjectPointerInput @ 0x1C015E990 (NtUserInjectPointerInput.c)
 *     NtUserRemoveInjectionDevice @ 0x1C0160100 (NtUserRemoveInjectionDevice.c)
 *     NtUserSetFeatureReportResponse @ 0x1C0161000 (NtUserSetFeatureReportResponse.c)
 * Callees:
 *     IsThreadCrossSessionAttached @ 0x1C0022CC0 (IsThreadCrossSessionAttached.c)
 *     W32GetThreadWin32Thread @ 0x1C0023390 (W32GetThreadWin32Thread.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0028F90 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     ?GetCount@AtomicExecutionCheck@@SAIXZ @ 0x1C0029C98 (-GetCount@AtomicExecutionCheck@@SAIXZ.c)
 *     EtwTraceReleaseUserCrit @ 0x1C0029EE0 (EtwTraceReleaseUserCrit.c)
 *     DestroyExclusiveUserCritDeferredUnlockList @ 0x1C002A100 (DestroyExclusiveUserCritDeferredUnlockList.c)
 *     UserIsUserCritSecInExclusive @ 0x1C002A1D0 (UserIsUserCritSecInExclusive.c)
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C002A3A8 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     HMUnlockObject @ 0x1C0038FB0 (HMUnlockObject.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C004DAC0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall EnterLeaveCritMitRitHandOffHazard::Enter(Enter *this)
{
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v3; // r8
  unsigned __int64 v4; // r9
  struct tagTHREADINFO **v5; // rbx
  __int64 v6; // rdx
  struct tagTHREADINFO *v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  struct tagTHREADINFO *v10; // rbx
  __int64 CurrentProcessWin32Process; // rax
  struct tagKERNELHANDLETABLEENTRY *v12; // rbx
  LARGE_INTEGER *v13; // rbx
  struct tagKERNELHANDLETABLEENTRY *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  unsigned int Count; // eax
  __int64 v20; // rax
  __int64 v21; // rbx
  int v22; // eax
  NTSTATUS v23; // edi
  __int64 v24; // rax
  LARGE_INTEGER *v25; // rbx
  struct tagTHREADINFO **v26; // rbx
  struct tagTHREADINFO *v27; // rbx
  __int64 v28; // rax
  struct tagKERNELHANDLETABLEENTRY *v29; // rax
  __int64 v30; // rcx
  struct tagKERNELHANDLETABLEENTRY *v31; // rbx
  BOOL v32; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v33; // [rsp+58h] [rbp-A8h] BYREF
  int v34; // [rsp+60h] [rbp-A0h]
  GUID v35; // [rsp+64h] [rbp-9Ch] BYREF
  struct _EVENT_DATA_DESCRIPTOR v36; // [rsp+78h] [rbp-88h] BYREF
  BOOL *v37; // [rsp+98h] [rbp-68h]
  __int64 v38; // [rsp+A0h] [rbp-60h]
  struct _EVENT_DATA_DESCRIPTOR v39; // [rsp+A8h] [rbp-58h] BYREF
  BOOL *v40; // [rsp+C8h] [rbp-38h]
  __int64 v41; // [rsp+D0h] [rbp-30h]
  struct _EVENT_DATA_DESCRIPTOR v42; // [rsp+D8h] [rbp-28h] BYREF
  BOOL *v43; // [rsp+F8h] [rbp-8h]
  __int64 v44; // [rsp+100h] [rbp+0h]

  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread();
  else
    CurrentThreadWin32Thread = 0LL;
  v33 = CurrentThreadWin32Thread;
  v34 = 1;
  if ( CurrentThreadWin32Thread && (*(int *)(CurrentThreadWin32Thread + 24) > 0 || *(_DWORD *)(v33 + 48)) )
  {
    EtwActivityIdControl(3u, &v35);
    if ( (unsigned int)dword_1C028EE70 > 6 )
    {
      if ( (unsigned __int8)tlgKeywordOn(&dword_1C028EE70, 0x2000LL) )
      {
        v41 = 4LL;
        v32 = v34 == 1;
        v40 = &v32;
        tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C028EE70, (int)&dword_1C025AD79, (int)&v35, 0, 3u, &v39);
      }
    }
  }
  v3 = 0x200000010000000LL;
  v4 = 0x8000002010000000uLL;
  if ( dword_1C028D6F0 && (unsigned __int8)tlgKeywordOn(&dword_1C028D6F0, 0x400000000000LL)
    || (W32kEtwEnabledKeyword & v4) != 0
    && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
    && (v4 & qword_1C028DB20) != 0
    && (v4 & qword_1C028DB28) == qword_1C028DB28
    || (W32kEtwEnabledKeyword & v3) != 0
    && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
    && (v3 & qword_1C028DB20) != 0
    && (v3 & qword_1C028DB28) == qword_1C028DB28 )
  {
    v13 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread();
    if ( v13 )
      v13[1] = KeQueryPerformanceCounter(0LL);
  }
  v5 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
  EtwTraceAcquiredExclusiveUserCrit();
  if ( v5 )
  {
    v10 = *v5;
    if ( v33 )
    {
      v7 = (struct tagTHREADINFO *)*(unsigned int *)(v33 + 24);
      if ( *(_DWORD *)(v33 + 48) || (int)v7 > 0 )
      {
        *(_DWORD *)(v33 + 44) = 1;
        *(GUID *)(v33 + 28) = v35;
        v8 = (unsigned int)dword_1C028EE70;
        if ( (unsigned int)dword_1C028EE70 > 6 )
        {
          if ( (unsigned __int8)tlgKeywordOn(&dword_1C028EE70, 0x2000LL) )
          {
            v44 = 4LL;
            v32 = v34 == 1;
            v43 = &v32;
            tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C028EE70, (int)&dword_1C025AD22, (int)&v35, 0, 3u, &v42);
            v8 = (unsigned int)dword_1C028EE70;
          }
          if ( (unsigned int)v8 > 6 && (unsigned __int8)tlgKeywordOn(&dword_1C028EE70, 0x2000LL) )
          {
            v38 = 4LL;
            v32 = v34 == 1;
            v37 = &v32;
            tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C028EE70, (int)&dword_1C025AD4F, (int)&v35, 0, 3u, &v36);
          }
        }
      }
    }
    gptiCurrent = v10;
    if ( v10 )
    {
      *((_DWORD *)v10 + 377) = 1;
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v7, v6, v8, v9);
      if ( CurrentProcessWin32Process )
      {
        if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
        {
          v7 = gptiCurrent;
          if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0 && (*((_DWORD *)gptiCurrent + 314) & 0x80u) == 0 )
          {
            while ( 1 )
            {
              v12 = gpSharedUserCritDeferredUnlockListHead;
              if ( !gpSharedUserCritDeferredUnlockListHead )
                break;
              v14 = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2);
              v15 = *(_QWORD *)gpSharedUserCritDeferredUnlockListHead;
              *((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2) = 0LL;
              gpSharedUserCritDeferredUnlockListHead = v14;
              if ( !*(_DWORD *)(v15 + 8) )
              {
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, v6, v8);
                v15 = *(_QWORD *)v12;
              }
              HMUnlockObject(v15, v6, v8, v9);
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
  while ( gbInMitRitHandOff )
  {
    ++EnterLeaveCritMitRitHandOffHazard::_slSemWaiters;
    if ( qword_1C029C988 )
      qword_1C029C988(v7, v6, v8, v9);
    if ( (unsigned int)UserIsUserCritSecInExclusive(v7, v6, v8, v9) )
    {
      if ( gcInHMDestroyUnlockedObjectWorker )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v17, v16, v18);
      if ( gphePrimaryDestroyTarget )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v17, v16, v18);
      if ( gcDeferredDestroyTargets > gcSecondaryDestroyTargets )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v17, v16, v18);
      gcInHMDestroyUnlockedObjectWorker = 0;
      gphePrimaryDestroyTarget = 0LL;
      DestroyExclusiveUserCritDeferredUnlockList();
    }
    Count = AtomicExecutionCheck::GetCount();
    if ( Count )
    {
      if ( (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, Count, 0LL, 0LL, 0LL);
      DbgkWerCaptureLiveKernelDump(L"NTUSER", 400LL, 37LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
    }
    if ( gptiCurrent && W32GetThreadWin32Thread(KeGetCurrentThread()) )
      *(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 1508) = 0;
    gptiCurrent = 0LL;
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      v20 = PsGetCurrentThreadWin32Thread();
      v21 = v20;
      if ( v20 )
      {
        v22 = *(_DWORD *)(v20 + 24);
        if ( (*(_DWORD *)(v21 + 44) || *(_DWORD *)(v21 + 48) || v22 > 0)
          && (unsigned int)dword_1C028EE70 > 6
          && (unsigned __int8)tlgKeywordOn(&dword_1C028EE70, 0x2000LL) )
        {
          tlgWriteTransfer_EtwWriteTransfer(
            (int)&dword_1C028EE70,
            (int)&dword_1C025AD03,
            v21 + 28,
            0,
            2u,
            (PEVENT_DATA_DESCRIPTOR)&v33);
        }
        *(_DWORD *)(v21 + 44) = 0;
        *(_OWORD *)(v21 + 28) = 0LL;
      }
    }
    EtwTraceReleaseUserCrit();
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    v23 = KeWaitForSingleObject(EnterLeaveCritMitRitHandOffHazard::_spkSem, UserRequest, 1, 0, 0LL);
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
      v24 = PsGetCurrentThreadWin32Thread();
    else
      v24 = 0LL;
    v33 = v24;
    v34 = 1;
    if ( v24 && (*(int *)(v24 + 24) > 0 || *(_DWORD *)(v33 + 48)) )
    {
      EtwActivityIdControl(3u, &v35);
      if ( (unsigned int)dword_1C028EE70 > 6 )
      {
        if ( (unsigned __int8)tlgKeywordOn(&dword_1C028EE70, 0x2000LL) )
        {
          v38 = 4LL;
          v32 = v34 == 1;
          v37 = &v32;
          tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C028EE70, (int)&dword_1C025AD79, (int)&v35, 0, 3u, &v36);
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
      v25 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread();
      if ( v25 )
        v25[1] = KeQueryPerformanceCounter(0LL);
    }
    v26 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
    EtwTraceAcquiredExclusiveUserCrit();
    if ( v26 )
    {
      v27 = *v26;
      if ( (unsigned int)IsThreadCrossSessionAttached() )
        v27 = 0LL;
      if ( v33 )
      {
        v7 = (struct tagTHREADINFO *)*(unsigned int *)(v33 + 24);
        if ( *(_DWORD *)(v33 + 48) || (int)v7 > 0 )
        {
          *(_DWORD *)(v33 + 44) = 1;
          *(GUID *)(v33 + 28) = v35;
          v8 = (unsigned int)dword_1C028EE70;
          if ( (unsigned int)dword_1C028EE70 > 6 )
          {
            if ( (unsigned __int8)tlgKeywordOn(&dword_1C028EE70, 0x2000LL) )
            {
              v38 = 4LL;
              v32 = v34 == 1;
              v37 = &v32;
              tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C028EE70, (int)&dword_1C025AD22, (int)&v35, 0, 3u, &v36);
              v8 = (unsigned int)dword_1C028EE70;
            }
            if ( (unsigned int)v8 > 6 && (unsigned __int8)tlgKeywordOn(&dword_1C028EE70, 0x2000LL) )
            {
              v38 = 4LL;
              v32 = v34 == 1;
              v37 = &v32;
              tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C028EE70, (int)&dword_1C025AD4F, (int)&v35, 0, 3u, &v36);
            }
          }
        }
      }
      gptiCurrent = v27;
      if ( v27 )
      {
        *((_DWORD *)v27 + 377) = 1;
        v28 = PsGetCurrentProcessWin32Process(v7, v6, v8, v9);
        if ( v28 )
        {
          if ( (*(_DWORD *)(v28 + 12) & 0x8000) != 0 )
          {
            v7 = gptiCurrent;
            if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0 && (*((_DWORD *)gptiCurrent + 314) & 0x80u) == 0 )
            {
              while ( 1 )
              {
                v31 = gpSharedUserCritDeferredUnlockListHead;
                if ( !gpSharedUserCritDeferredUnlockListHead )
                  break;
                v29 = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2);
                v30 = *(_QWORD *)gpSharedUserCritDeferredUnlockListHead;
                *((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2) = 0LL;
                gpSharedUserCritDeferredUnlockListHead = v29;
                if ( !*(_DWORD *)(v30 + 8) )
                {
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v30, v6, v8);
                  v30 = *(_QWORD *)v31;
                }
                HMUnlockObject(v30, v6, v8, v9);
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
    if ( v23 == 192 )
    {
      --EnterLeaveCritMitRitHandOffHazard::_slSemWaiters;
      *(_BYTE *)this = 1;
      return;
    }
  }
}
