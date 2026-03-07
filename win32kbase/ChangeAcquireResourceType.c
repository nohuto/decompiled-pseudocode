__int64 __fastcall ChangeAcquireResourceType(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int Count; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r9
  PVOID Reserved; // rdx
  unsigned __int64 v13; // r8
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v15; // rax
  struct tagTHREADINFO **v16; // r14
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdi
  LARGE_INTEGER PerformanceCounter; // rsi
  __int64 v23; // rbx
  int v24; // r8d
  bool v25; // zf
  struct tagTHREADINFO *v26; // rdi
  __int64 result; // rax
  __int64 v28; // rcx
  __int64 *v29; // rbx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rax
  ULONG_PTR BugCheckParameter4; // [rsp+20h] [rbp-58h]

  if ( qword_1C02D71D0 )
    qword_1C02D71D0(a1, a2, a3, a4);
  if ( IS_USERCRIT_OWNED_EXCLUSIVE(a1, a2, a3, a4) )
  {
    if ( gcInHMDestroyUnlockedObjectWorker )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 1206LL);
    if ( gphePrimaryDestroyTarget )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1214LL);
    if ( gcDeferredDestroyTargets > gcSecondaryDestroyTargets )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1220LL);
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
  if ( gptiCurrent && W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) )
    *((_DWORD *)PtiCurrentShared(v31, v30, v32, v33) + 387) = 0;
  gptiCurrent = 0LL;
  EtwTraceReleaseUserCrit();
  v9 = SGDGetUserSessionState(v6, v5, v7, v8);
  ExReleaseResourceAndLeaveCriticalRegion(*(PERESOURCE *)(v9 + 8));
  if ( dword_1C02C93D8 && tlgKeywordOn((__int64)&dword_1C02C93D8, 0x400000000000LL)
    || (Reserved = WPP_MAIN_CB.Reserved,
        v13 = 0x8000002010000000uLL,
        ((unsigned __int64)WPP_MAIN_CB.Reserved & 0x8000002010000000uLL) != 0)
    && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
    && (qword_1C02C4050 & 0x8000002010000000uLL) != 0
    && (qword_1C02C4058 & 0x8000002010000000uLL) == qword_1C02C4058
    || ((__int64)WPP_MAIN_CB.Reserved & 0x200000010000000LL) != 0
    && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
    && (qword_1C02C4050 & 0x200000010000000LL) != 0
    && (qword_1C02C4058 & 0x200000010000000LL) == qword_1C02C4058 )
  {
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(
                                                  v10,
                                                  Reserved,
                                                  v13,
                                                  v11,
                                                  BugCheckParameter4);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  }
  v15 = SGDGetUserSessionState(v10, Reserved, v13, v11);
  v16 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(*(PERESOURCE *)(v15 + 8));
  if ( !v16 )
  {
    result = EtwTraceAcquiredExclusiveUserCrit();
LABEL_31:
    v26 = 0LL;
    goto LABEL_28;
  }
  if ( IsEtwUserCritEnabled() )
  {
    v21 = PsGetCurrentThreadWin32Thread(v18, v17, v19, v20, BugCheckParameter4);
    if ( v21 )
    {
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      v23 = PerformanceCounter.QuadPart - *(_QWORD *)(v21 + 8);
      if ( (dword_1C02D1900 & 1) == 0 )
      {
        dword_1C02D1900 |= 1u;
        memset(stru_1C02D1910, 0, sizeof(stru_1C02D1910));
        word_1C02D2A38 = 0;
        byte_1C02D2A3A = 0;
        memset(&unk_1C02D2A40, 0, 0x168uLL);
        qword_1C02D2BB8 = 0LL;
        qword_1C02D2BD0 = 0LL;
        xmmword_1C02D2BA8 = 0LL;
        qword_1C02D2BE8 = 0LL;
        xmmword_1C02D2BC0 = 0LL;
        xmmword_1C02D2BF0 = 0uLL;
        xmmword_1C02D2BD8 = 0LL;
      }
      UserCritTelemetry::UpdateUserCritInfo((__int64)stru_1C02D1910, v23, 0);
      if ( (dword_1C02D1900 & 1) == 0 )
      {
        dword_1C02D1900 |= 1u;
        memset(stru_1C02D1910, 0, sizeof(stru_1C02D1910));
        word_1C02D2A38 = 0;
        byte_1C02D2A3A = 0;
        memset(&unk_1C02D2A40, 0, 0x168uLL);
        qword_1C02D2BB8 = 0LL;
        qword_1C02D2BD0 = 0LL;
        xmmword_1C02D2BA8 = 0LL;
        qword_1C02D2BE8 = 0LL;
        xmmword_1C02D2BC0 = 0LL;
        xmmword_1C02D2BF0 = 0uLL;
        xmmword_1C02D2BD8 = 0LL;
      }
      UserCritTelemetry::SendUserCritSummary(stru_1C02D1910);
      v25 = ((__int64)WPP_MAIN_CB.Reserved & 0x200000010000000LL) == 0;
      *(LARGE_INTEGER *)(v21 + 8) = PerformanceCounter;
      if ( !v25
        && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
        && (qword_1C02C4050 & 0x200000010000000LL) != 0
        && (qword_1C02C4058 & 0x200000010000000LL) == qword_1C02C4058
        && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
      {
        McTemplateK0xqx_EtwWriteTransfer(
          gullUserCritAcquireToken,
          (unsigned int)&AcquiredExclusiveUserCritEvent,
          v24,
          v23,
          1000000 * v23 / gliQpcFreq.QuadPart,
          gullUserCritAcquireToken);
      }
      if ( v23 >= *(__int64 *)&WPP_MAIN_CB.SectorSize
        && (signed __int64)(PerformanceCounter.QuadPart
                          - (unsigned __int64)WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink) >= W32KEtwUserCritTelemetryThrottleQPC )
      {
        if ( (Microsoft_Windows_Win32kEnableBits & 0x1000000000LL) != 0 )
          McTemplateK0xqx_EtwWriteTransfer(
            gullUserCritAcquireToken,
            (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
            v24,
            v23,
            1000 * v23 / gliQpcFreq.QuadPart,
            gullUserCritAcquireToken);
        WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink = (struct _LIST_ENTRY *)PerformanceCounter.QuadPart;
      }
      *(_QWORD *)(v21 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
    }
  }
  v26 = *v16;
  result = IsThreadCrossSessionAttached();
  if ( (_DWORD)result )
    goto LABEL_31;
  gptiCurrent = v26;
  if ( v26 )
  {
    *((_DWORD *)v26 + 387) = 1;
    result = PsGetCurrentProcessWin32Process(v28);
    if ( result )
    {
      if ( *(_QWORD *)result )
      {
        if ( (*(_DWORD *)(result + 12) & 0x8000) != 0 && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0 )
        {
          result = *((unsigned int *)gptiCurrent + 318);
          if ( (result & 0x80u) == 0LL )
          {
            while ( 1 )
            {
              v29 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
              if ( !gpSharedUserCritDeferredUnlockListHead )
                break;
              gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                           + 2);
              v34 = *v29;
              v29[2] = 0LL;
              if ( !*(_DWORD *)(v34 + 8) )
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4237LL);
              result = HMUnlockObject(*v29);
            }
          }
        }
      }
    }
  }
LABEL_28:
  gptiCurrent = v26;
  return result;
}
