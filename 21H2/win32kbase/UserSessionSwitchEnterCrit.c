/*
 * XREFs of UserSessionSwitchEnterCrit @ 0x1C00B8A10
 * Callers:
 *     AcquireCriticalSectionAndCheckState @ 0x1C006A120 (AcquireCriticalSectionAndCheckState.c)
 *     ?NtUserEnumDisplaySettingsExclusive@@YAJPEAU_UNICODE_STRING@@KPEAU_devicemodeW@@K@Z @ 0x1C015322C (-NtUserEnumDisplaySettingsExclusive@@YAJPEAU_UNICODE_STRING@@KPEAU_devicemodeW@@K@Z.c)
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

__int64 __fastcall UserSessionSwitchEnterCrit(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v4; // rdx
  struct tagTHREADINFO **v5; // rbx
  struct tagTHREADINFO *v6; // rbx
  __int64 v7; // rdx
  struct tagTHREADINFO *v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 CurrentProcessWin32Process; // rax
  __int64 *v12; // rbx
  LARGE_INTEGER *v14; // rbx
  struct tagKERNELHANDLETABLEENTRY *v15; // rax
  __int64 v16; // rcx
  PVOID CurrentProcess; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  unsigned int Count; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rax
  __int64 v31; // rbx
  int v32; // eax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // rax
  __int64 v37; // rdx
  LARGE_INTEGER *v38; // rbx
  struct tagTHREADINFO **v39; // rbx
  struct tagTHREADINFO *v40; // rbx
  __int64 v41; // rax
  struct tagKERNELHANDLETABLEENTRY *v42; // rax
  __int64 v43; // rcx
  __int64 *v44; // rbx
  __int64 v45; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v46; // [rsp+60h] [rbp-A8h] BYREF
  int v47; // [rsp+68h] [rbp-A0h]
  GUID v48; // [rsp+6Ch] [rbp-9Ch] BYREF
  struct _EVENT_DATA_DESCRIPTOR v49; // [rsp+80h] [rbp-88h] BYREF
  __int64 *v50; // [rsp+A0h] [rbp-68h]
  __int64 v51; // [rsp+A8h] [rbp-60h]
  struct _EVENT_DATA_DESCRIPTOR v52; // [rsp+B0h] [rbp-58h] BYREF
  __int64 *v53; // [rsp+D0h] [rbp-38h]
  __int64 v54; // [rsp+D8h] [rbp-30h]
  struct _EVENT_DATA_DESCRIPTOR v55; // [rsp+E0h] [rbp-28h] BYREF
  __int64 *v56; // [rsp+100h] [rbp-8h]
  __int64 v57; // [rsp+108h] [rbp+0h]

  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(a1, a2, a3);
  else
    CurrentThreadWin32Thread = 0LL;
  v46 = CurrentThreadWin32Thread;
  v47 = 1;
  if ( CurrentThreadWin32Thread && (*(int *)(CurrentThreadWin32Thread + 24) > 0 || *(_DWORD *)(v46 + 48)) )
  {
    EtwActivityIdControl(3u, &v48);
    if ( (unsigned int)dword_1C028EE70 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
    {
      v54 = 4LL;
      LODWORD(v45) = v47 == 1;
      v53 = &v45;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_1C028EE70,
        (unsigned __int8 *)dword_1C025AD79,
        &v48,
        0LL,
        3u,
        &v52);
    }
  }
  if ( dword_1C028D6F0 && tlgKeywordOn((__int64)&dword_1C028D6F0, 0x400000000000LL)
    || (v4 = W32kEtwEnabledKeyword, (W32kEtwEnabledKeyword & 0x8000002010000000uLL) != 0)
    && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
    && (qword_1C028DB20 & 0x8000002010000000uLL) != 0
    && (qword_1C028DB28 & 0x8000002010000000uLL) == qword_1C028DB28
    || (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0
    && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
    && (qword_1C028DB20 & 0x200000010000000LL) != 0
    && (qword_1C028DB28 & 0x200000010000000LL) == qword_1C028DB28 )
  {
    v14 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, v4, a3);
    if ( v14 )
      v14[1] = KeQueryPerformanceCounter(0LL);
  }
  v5 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
  EtwTraceAcquiredExclusiveUserCrit();
  if ( !v5 )
    goto LABEL_113;
  v6 = *v5;
  if ( IsThreadCrossSessionAttached() )
    v6 = 0LL;
  if ( v46 )
  {
    v8 = (struct tagTHREADINFO *)*(unsigned int *)(v46 + 24);
    if ( *(_DWORD *)(v46 + 48) || (int)v8 > 0 )
    {
      *(_DWORD *)(v46 + 44) = 1;
      *(GUID *)(v46 + 28) = v48;
      v9 = (unsigned int)dword_1C028EE70;
      if ( (unsigned int)dword_1C028EE70 > 6 )
      {
        if ( tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
        {
          v57 = 4LL;
          LODWORD(v45) = v47 == 1;
          v56 = &v45;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C028EE70,
            (unsigned __int8 *)dword_1C025AD22,
            &v48,
            0LL,
            3u,
            &v55);
          v9 = (unsigned int)dword_1C028EE70;
        }
        if ( (unsigned int)v9 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
        {
          v51 = 4LL;
          LODWORD(v45) = v47 == 1;
          v50 = &v45;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C028EE70,
            (unsigned __int8 *)dword_1C025AD4F,
            &v48,
            0LL,
            3u,
            &v49);
        }
      }
    }
  }
  gptiCurrent = v6;
  if ( v6 )
  {
    *((_DWORD *)v6 + 377) = 1;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v8);
    if ( CurrentProcessWin32Process )
    {
      if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
      {
        v8 = gptiCurrent;
        if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0 && (*((_DWORD *)gptiCurrent + 314) & 0x80u) == 0 )
        {
          while ( 1 )
          {
            v12 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
            if ( !gpSharedUserCritDeferredUnlockListHead )
              break;
            v15 = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2);
            v16 = *(_QWORD *)gpSharedUserCritDeferredUnlockListHead;
            *((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2) = 0LL;
            gpSharedUserCritDeferredUnlockListHead = v15;
            if ( !*(_DWORD *)(v16 + 8) )
            {
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, v7, v9);
              v16 = *v12;
            }
            HMUnlockObject(v16);
          }
        }
      }
    }
  }
  while ( gfSwitchInProgress )
  {
    CurrentProcess = (PVOID)PsGetCurrentProcess(v8, v7, v9, v10);
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    ++gcSwitchInProgressWaiters;
    if ( qword_1C029C988 )
      qword_1C029C988(v19, v18, v20, v21);
    if ( UserIsUserCritSecInExclusive() )
    {
      if ( gcInHMDestroyUnlockedObjectWorker )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v23, v22, v24);
      if ( gphePrimaryDestroyTarget )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v23, v22, v24);
      if ( gcDeferredDestroyTargets > gcSecondaryDestroyTargets )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v23, v22, v24);
      gcInHMDestroyUnlockedObjectWorker = 0;
      gphePrimaryDestroyTarget = 0LL;
      DestroyExclusiveUserCritDeferredUnlockList(v23, v22, v24, v25);
    }
    Count = AtomicExecutionCheck::GetCount();
    if ( Count )
    {
      if ( (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, Count, 0LL, 0LL, 0LL);
      DbgkWerCaptureLiveKernelDump(L"NTUSER", 400LL, 37LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
    }
    if ( gptiCurrent && W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) )
      *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 1508) = 0;
    gptiCurrent = 0LL;
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      v30 = PsGetCurrentThreadWin32Thread(v28, v27, v29);
      v31 = v30;
      if ( v30 )
      {
        v32 = *(_DWORD *)(v30 + 24);
        if ( (*(_DWORD *)(v31 + 44) || *(_DWORD *)(v31 + 48) || v32 > 0)
          && (unsigned int)dword_1C028EE70 > 6
          && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
        {
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C028EE70,
            (unsigned __int8 *)dword_1C025AD03,
            (const GUID *)(v31 + 28),
            0LL,
            2u,
            (PEVENT_DATA_DESCRIPTOR)&v46);
        }
        *(_DWORD *)(v31 + 44) = 0;
        *(_OWORD *)(v31 + 28) = 0LL;
      }
    }
    EtwTraceReleaseUserCrit();
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    KeWaitForSingleObject(gpsemSwitchInProgressWaiters, UserRequest, 0, 0, 0LL);
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
      v36 = PsGetCurrentThreadWin32Thread(v34, v33, v35);
    else
      v36 = 0LL;
    v46 = v36;
    v47 = 1;
    if ( v36 && (*(int *)(v36 + 24) > 0 || *(_DWORD *)(v46 + 48)) )
    {
      EtwActivityIdControl(3u, &v48);
      if ( (unsigned int)dword_1C028EE70 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
      {
        v51 = 4LL;
        LODWORD(v45) = v47 == 1;
        v50 = &v45;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C028EE70,
          (unsigned __int8 *)dword_1C025AD79,
          &v48,
          0LL,
          3u,
          &v49);
      }
    }
    if ( dword_1C028D6F0 && tlgKeywordOn((__int64)&dword_1C028D6F0, 0x400000000000LL)
      || (v37 = W32kEtwEnabledKeyword, (W32kEtwEnabledKeyword & 0x8000002010000000uLL) != 0)
      && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
      && (qword_1C028DB20 & 0x8000002010000000uLL) != 0
      && (qword_1C028DB28 & 0x8000002010000000uLL) == qword_1C028DB28
      || (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0
      && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
      && (qword_1C028DB20 & 0x200000010000000LL) != 0
      && (qword_1C028DB28 & 0x200000010000000LL) == qword_1C028DB28 )
    {
      v38 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v34, v37, v35);
      if ( v38 )
        v38[1] = KeQueryPerformanceCounter(0LL);
    }
    v39 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
    EtwTraceAcquiredExclusiveUserCrit();
    if ( v39 )
    {
      v40 = *v39;
      if ( IsThreadCrossSessionAttached() )
        v40 = 0LL;
      if ( v46 )
      {
        v8 = (struct tagTHREADINFO *)*(unsigned int *)(v46 + 24);
        if ( *(_DWORD *)(v46 + 48) || (int)v8 > 0 )
        {
          *(_DWORD *)(v46 + 44) = 1;
          *(GUID *)(v46 + 28) = v48;
          v9 = (unsigned int)dword_1C028EE70;
          if ( (unsigned int)dword_1C028EE70 > 6 )
          {
            if ( tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
            {
              v51 = 4LL;
              LODWORD(v45) = v47 == 1;
              v50 = &v45;
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_1C028EE70,
                (unsigned __int8 *)dword_1C025AD22,
                &v48,
                0LL,
                3u,
                &v49);
              v9 = (unsigned int)dword_1C028EE70;
            }
            if ( (unsigned int)v9 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
            {
              v51 = 4LL;
              LODWORD(v45) = v47 == 1;
              v50 = &v45;
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_1C028EE70,
                (unsigned __int8 *)dword_1C025AD4F,
                &v48,
                0LL,
                3u,
                &v49);
            }
          }
        }
      }
      gptiCurrent = v40;
      if ( v40 )
      {
        *((_DWORD *)v40 + 377) = 1;
        v41 = PsGetCurrentProcessWin32Process(v8);
        if ( v41 )
        {
          if ( (*(_DWORD *)(v41 + 12) & 0x8000) != 0 )
          {
            v8 = gptiCurrent;
            if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0 && (*((_DWORD *)gptiCurrent + 314) & 0x80u) == 0 )
            {
              while ( 1 )
              {
                v44 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
                if ( !gpSharedUserCritDeferredUnlockListHead )
                  break;
                v42 = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2);
                v43 = *(_QWORD *)gpSharedUserCritDeferredUnlockListHead;
                *((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2) = 0LL;
                gpSharedUserCritDeferredUnlockListHead = v42;
                if ( !*(_DWORD *)(v43 + 8) )
                {
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v43, v7, v9);
                  v43 = *v44;
                }
                HMUnlockObject(v43);
              }
            }
          }
        }
      }
    }
    else
    {
LABEL_113:
      InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v46);
      gptiCurrent = 0LL;
    }
  }
  return 0LL;
}
