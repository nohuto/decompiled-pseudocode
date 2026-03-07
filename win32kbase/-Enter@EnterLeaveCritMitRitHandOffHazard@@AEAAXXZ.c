void __fastcall EnterLeaveCritMitRitHandOffHazard::Enter(Enter *this, __int64 a2, __int64 a3, __int64 a4)
{
  Enter *v4; // r15
  unsigned __int64 v5; // r8
  PVOID Reserved; // rdx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v8; // rax
  struct tagTHREADINFO **v9; // r14
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdi
  LARGE_INTEGER PerformanceCounter; // rsi
  LONGLONG v16; // rbx
  struct tagTHREADINFO *v17; // rax
  __int64 CurrentProcessWin32Process; // rax
  struct tagKERNELHANDLETABLEENTRY *v19; // rbx
  __int64 v20; // rax
  unsigned int Count; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rax
  __int64 v27; // rcx
  NTSTATUS v28; // ebp
  __int64 v29; // r9
  PVOID v30; // rdx
  unsigned __int64 v31; // r8
  LARGE_INTEGER *v32; // rbx
  __int64 v33; // rax
  struct tagTHREADINFO **v34; // r14
  __int64 v35; // rdi
  LARGE_INTEGER v36; // rsi
  LONGLONG v37; // rbx
  int v38; // r8d
  struct tagTHREADINFO *v39; // rbx
  __int64 v40; // rax
  struct tagKERNELHANDLETABLEENTRY *v41; // rbx
  __int64 v42; // rax

  v4 = this;
  v5 = 0x8000002010000000uLL;
  if ( dword_1C02C93D8 && (unsigned __int8)tlgKeywordOn(&dword_1C02C93D8, 0x400000000000LL)
    || (Reserved = WPP_MAIN_CB.Reserved, ((unsigned __int64)WPP_MAIN_CB.Reserved & v5) != 0)
    && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
    && (v5 & qword_1C02C4050) != 0
    && (v5 & qword_1C02C4058) == qword_1C02C4058
    || ((__int64)WPP_MAIN_CB.Reserved & 0x200000010000000LL) != 0
    && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
    && (qword_1C02C4050 & 0x200000010000000LL) != 0
    && (qword_1C02C4058 & 0x200000010000000LL) == qword_1C02C4058 )
  {
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread();
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  }
  v8 = SGDGetUserSessionState(this, Reserved, v5, a4);
  v9 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(*(PERESOURCE *)(v8 + 8));
  if ( v9 )
  {
    if ( (unsigned int)IsEtwUserCritEnabled() )
    {
      v14 = PsGetCurrentThreadWin32Thread();
      if ( v14 )
      {
        PerformanceCounter = KeQueryPerformanceCounter(0LL);
        v16 = PerformanceCounter.QuadPart - *(_QWORD *)(v14 + 8);
        if ( (dword_1C02D1900 & 1) == 0 )
        {
          dword_1C02D1900 |= 1u;
          memset(&unk_1C02D1910, 0, 0x1128uLL);
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
        UserCritTelemetry::UpdateUserCritInfo(&unk_1C02D1910, v16, 0LL);
        if ( (dword_1C02D1900 & 1) == 0 )
        {
          dword_1C02D1900 |= 1u;
          memset(&unk_1C02D1910, 0, 0x1128uLL);
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
        UserCritTelemetry::SendUserCritSummary((UserCritTelemetry *)&unk_1C02D1910);
        v10 = 0x200000010000000LL;
        *(LARGE_INTEGER *)(v14 + 8) = PerformanceCounter;
        if ( ((__int64)WPP_MAIN_CB.Reserved & 0x200000010000000LL) != 0 )
        {
          v11 = 2LL;
          if ( (unsigned __int8)(byte_1C02C4068 - 1) > 2u
            && (qword_1C02C4050 & 0x200000010000000LL) != 0
            && (qword_1C02C4058 & 0x200000010000000LL) == qword_1C02C4058
            && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
          {
            McTemplateK0xqx_EtwWriteTransfer(
              gullUserCritAcquireToken,
              (unsigned int)&AcquiredExclusiveUserCritEvent,
              v12,
              v16,
              1000000 * v16 / gliQpcFreq.QuadPart,
              gullUserCritAcquireToken);
          }
        }
        if ( v16 >= *(__int64 *)&WPP_MAIN_CB.SectorSize
          && (signed __int64)(PerformanceCounter.QuadPart
                            - (unsigned __int64)WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink) >= W32KEtwUserCritTelemetryThrottleQPC )
        {
          if ( (Microsoft_Windows_Win32kEnableBits & 0x1000000000LL) != 0 )
            McTemplateK0xqx_EtwWriteTransfer(
              gullUserCritAcquireToken,
              (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
              v12,
              v16,
              1000 * v16 / gliQpcFreq.QuadPart,
              gullUserCritAcquireToken);
          WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink = (struct _LIST_ENTRY *)PerformanceCounter.QuadPart;
        }
        *(_QWORD *)(v14 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
      }
    }
    v17 = *v9;
    gptiCurrent = v17;
    if ( v17 )
    {
      *((_DWORD *)v17 + 387) = 1;
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v11);
      if ( CurrentProcessWin32Process )
      {
        if ( *(_QWORD *)CurrentProcessWin32Process )
        {
          if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
          {
            v11 = (__int64)gptiCurrent;
            if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0 && (*((_DWORD *)gptiCurrent + 318) & 0x80u) == 0 )
            {
              while ( 1 )
              {
                v19 = gpSharedUserCritDeferredUnlockListHead;
                if ( !gpSharedUserCritDeferredUnlockListHead )
                  break;
                gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                             + 2);
                v20 = *(_QWORD *)v19;
                *((_QWORD *)v19 + 2) = 0LL;
                if ( !*(_DWORD *)(v20 + 8) )
                  MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4237LL);
                HMUnlockObject(*(_QWORD *)v19);
              }
            }
          }
        }
      }
    }
  }
  else
  {
    EtwTraceAcquiredExclusiveUserCrit();
    gptiCurrent = 0LL;
  }
  while ( gbInMitRitHandOff )
  {
    ++EnterLeaveCritMitRitHandOffHazard::_slSemWaiters;
    if ( qword_1C02D71D0 )
      qword_1C02D71D0(v11, v10, v12, v13);
    if ( IS_USERCRIT_OWNED_EXCLUSIVE() )
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
    if ( gptiCurrent && W32GetThreadWin32Thread(KeGetCurrentThread()) )
      *((_DWORD *)PtiCurrentShared() + 387) = 0;
    gptiCurrent = 0LL;
    EtwTraceReleaseUserCrit();
    v26 = SGDGetUserSessionState(v23, v22, v24, v25);
    ExReleaseResourceAndLeaveCriticalRegion(*(PERESOURCE *)(v26 + 8));
    v28 = KeWaitForSingleObject(WPP_MAIN_CB.Dpc.DpcListEntry.Next, UserRequest, 1, 0, 0LL);
    if ( dword_1C02C93D8 && (unsigned __int8)tlgKeywordOn(&dword_1C02C93D8, 0x400000000000LL)
      || (v30 = WPP_MAIN_CB.Reserved,
          v31 = 0x8000002010000000uLL,
          ((unsigned __int64)WPP_MAIN_CB.Reserved & 0x8000002010000000uLL) != 0)
      && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
      && (qword_1C02C4050 & 0x8000002010000000uLL) != 0
      && (qword_1C02C4058 & 0x8000002010000000uLL) == qword_1C02C4058
      || ((__int64)WPP_MAIN_CB.Reserved & 0x200000010000000LL) != 0
      && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
      && (qword_1C02C4050 & 0x200000010000000LL) != 0
      && (qword_1C02C4058 & 0x200000010000000LL) == qword_1C02C4058 )
    {
      v32 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread();
      if ( v32 )
        v32[1] = KeQueryPerformanceCounter(0LL);
    }
    v33 = SGDGetUserSessionState(v27, v30, v31, v29);
    v34 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(*(PERESOURCE *)(v33 + 8));
    if ( v34 )
    {
      if ( (unsigned int)IsEtwUserCritEnabled() )
      {
        v35 = PsGetCurrentThreadWin32Thread();
        if ( v35 )
        {
          v36 = KeQueryPerformanceCounter(0LL);
          v37 = v36.QuadPart - *(_QWORD *)(v35 + 8);
          if ( (dword_1C02D1900 & 1) == 0 )
          {
            dword_1C02D1900 |= 1u;
            memset(&unk_1C02D1910, 0, 0x1128uLL);
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
          UserCritTelemetry::UpdateUserCritInfo(&unk_1C02D1910, v37, 0LL);
          if ( (dword_1C02D1900 & 1) == 0 )
          {
            dword_1C02D1900 |= 1u;
            memset(&unk_1C02D1910, 0, 0x1128uLL);
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
          UserCritTelemetry::SendUserCritSummary((UserCritTelemetry *)&unk_1C02D1910);
          *(LARGE_INTEGER *)(v35 + 8) = v36;
          if ( ((__int64)WPP_MAIN_CB.Reserved & 0x200000010000000LL) != 0
            && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
            && (qword_1C02C4050 & 0x200000010000000LL) != 0
            && (qword_1C02C4058 & 0x200000010000000LL) == qword_1C02C4058
            && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
          {
            McTemplateK0xqx_EtwWriteTransfer(
              gullUserCritAcquireToken,
              (unsigned int)&AcquiredExclusiveUserCritEvent,
              v38,
              v37,
              1000000 * v37 / gliQpcFreq.QuadPart,
              gullUserCritAcquireToken);
          }
          if ( v37 >= *(__int64 *)&WPP_MAIN_CB.SectorSize
            && (signed __int64)(v36.QuadPart - (unsigned __int64)WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink) >= W32KEtwUserCritTelemetryThrottleQPC )
          {
            if ( (Microsoft_Windows_Win32kEnableBits & 0x1000000000LL) != 0 )
              McTemplateK0xqx_EtwWriteTransfer(
                gullUserCritAcquireToken,
                (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
                v38,
                v37,
                1000 * v37 / gliQpcFreq.QuadPart,
                gullUserCritAcquireToken);
            WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink = (struct _LIST_ENTRY *)v36.QuadPart;
          }
          *(_QWORD *)(v35 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
        }
      }
      v39 = *v34;
      if ( !(unsigned int)IsThreadCrossSessionAttached() )
      {
        gptiCurrent = v39;
        if ( v39 )
        {
          *((_DWORD *)v39 + 387) = 1;
          v40 = PsGetCurrentProcessWin32Process(v11);
          if ( v40 )
          {
            if ( *(_QWORD *)v40 )
            {
              if ( (*(_DWORD *)(v40 + 12) & 0x8000) != 0 )
              {
                v11 = (__int64)gptiCurrent;
                if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0 && (*((_DWORD *)gptiCurrent + 318) & 0x80u) == 0 )
                {
                  v41 = gpSharedUserCritDeferredUnlockListHead;
                  if ( gpSharedUserCritDeferredUnlockListHead )
                  {
                    do
                    {
                      gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)v41 + 2);
                      v42 = *(_QWORD *)v41;
                      *((_QWORD *)v41 + 2) = 0LL;
                      if ( !*(_DWORD *)(v42 + 8) )
                        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4237LL);
                      HMUnlockObject(*(_QWORD *)v41);
                      v41 = gpSharedUserCritDeferredUnlockListHead;
                    }
                    while ( gpSharedUserCritDeferredUnlockListHead );
                    v4 = this;
                  }
                }
              }
            }
          }
        }
        goto LABEL_108;
      }
    }
    else
    {
      EtwTraceAcquiredExclusiveUserCrit();
    }
    gptiCurrent = 0LL;
LABEL_108:
    if ( v28 == 192 )
    {
      --EnterLeaveCritMitRitHandOffHazard::_slSemWaiters;
      *(_BYTE *)v4 = 1;
      return;
    }
  }
}
