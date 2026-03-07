__int64 __fastcall SendIVWorkerThreadRequest(PVOID *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  char *v6; // rdx
  __int64 v8; // rcx
  int v9; // ebp
  __int64 v10; // r9
  PVOID Reserved; // rdx
  unsigned __int64 v12; // r8
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v14; // rax
  struct tagTHREADINFO **v15; // r14
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdi
  LARGE_INTEGER PerformanceCounter; // rsi
  __int64 v22; // rbx
  __int64 v23; // r8
  bool v24; // zf
  struct tagTHREADINFO *v25; // rbx
  __int64 v26; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v28; // rax
  __int64 *v29; // rbx
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-418h]
  PLARGE_INTEGER Timeouta; // [rsp+20h] [rbp-418h]
  __int64 v32; // [rsp+38h] [rbp-400h] BYREF
  _DWORD v33[240]; // [rsp+40h] [rbp-3F8h] BYREF

  memset(v33, 0, 0x3B8uLL);
  if ( (unsigned int)InitCreateSystemThreadsMsg(v33, 8u, (__int64)a1) )
  {
    UserSessionSwitchLeaveCrit(v3, v2, v4, v5);
    Timeout = (PLARGE_INTEGER)&v32;
    v32 = 952LL;
    v9 = LpcSendWaitReceivePort(CsrApiPort, 0x20000LL, v33, v33);
    if ( v9 >= 0 )
      KeWaitForSingleObject(*a1, WrUserRequest, 0, 0, 0LL);
    if ( dword_1C02C93D8 && tlgKeywordOn((__int64)&dword_1C02C93D8, 0x400000000000LL)
      || (Reserved = WPP_MAIN_CB.Reserved,
          v12 = 0x8000002010000000uLL,
          ((unsigned __int64)WPP_MAIN_CB.Reserved & 0x8000002010000000uLL) != 0)
      && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
      && (qword_1C02C4050 & 0x8000002010000000uLL) != 0
      && (qword_1C02C4058 & 0x8000002010000000uLL) == qword_1C02C4058
      || ((__int64)WPP_MAIN_CB.Reserved & 0x200000010000000LL) != 0
      && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
      && (qword_1C02C4050 & 0x200000010000000LL) != 0
      && (qword_1C02C4058 & 0x200000010000000LL) == qword_1C02C4058 )
    {
      CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v8, Reserved, v12, v10, Timeout);
      if ( CurrentThreadWin32Thread )
        CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    }
    v14 = SGDGetUserSessionState(v8, Reserved, v12, v10);
    v15 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(*(PERESOURCE *)(v14 + 8));
    if ( v15 )
    {
      if ( IsEtwUserCritEnabled() )
      {
        v20 = PsGetCurrentThreadWin32Thread(v17, v16, v18, v19, Timeout);
        if ( v20 )
        {
          PerformanceCounter = KeQueryPerformanceCounter(0LL);
          v22 = PerformanceCounter.QuadPart - *(_QWORD *)(v20 + 8);
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
          UserCritTelemetry::UpdateUserCritInfo((__int64)stru_1C02D1910, v22, 0);
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
          v24 = ((__int64)WPP_MAIN_CB.Reserved & 0x200000010000000LL) == 0;
          *(LARGE_INTEGER *)(v20 + 8) = PerformanceCounter;
          if ( !v24
            && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
            && (qword_1C02C4050 & 0x200000010000000LL) != 0
            && (qword_1C02C4058 & 0x200000010000000LL) == qword_1C02C4058
            && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
          {
            LODWORD(Timeouta) = 1000000 * v22 / gliQpcFreq.QuadPart;
            McTemplateK0xqx_EtwWriteTransfer(
              gullUserCritAcquireToken,
              &AcquiredExclusiveUserCritEvent,
              v23,
              v22,
              Timeouta,
              gullUserCritAcquireToken);
          }
          if ( v22 >= *(__int64 *)&WPP_MAIN_CB.SectorSize
            && (signed __int64)(PerformanceCounter.QuadPart
                              - (unsigned __int64)WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink) >= W32KEtwUserCritTelemetryThrottleQPC )
          {
            if ( (Microsoft_Windows_Win32kEnableBits & 0x1000000000LL) != 0 )
            {
              LODWORD(Timeouta) = 1000 * v22 / gliQpcFreq.QuadPart;
              McTemplateK0xqx_EtwWriteTransfer(
                gullUserCritAcquireToken,
                &AcquiredExclusiveUserCritTelemetryEvent,
                v23,
                v22,
                Timeouta,
                gullUserCritAcquireToken);
            }
            WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink = (struct _LIST_ENTRY *)PerformanceCounter.QuadPart;
          }
          *(_QWORD *)(v20 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
        }
      }
      v25 = *v15;
      if ( !IsThreadCrossSessionAttached() )
      {
        gptiCurrent = v25;
        if ( v25 )
        {
          *((_DWORD *)v25 + 387) = 1;
          CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v26);
          if ( CurrentProcessWin32Process )
          {
            if ( *(_QWORD *)CurrentProcessWin32Process
              && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0
              && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
              && (*((_DWORD *)gptiCurrent + 318) & 0x80u) == 0 )
            {
              while ( 1 )
              {
                v29 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
                if ( !gpSharedUserCritDeferredUnlockListHead )
                  break;
                gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                             + 2);
                v28 = *v29;
                v29[2] = 0LL;
                if ( !*(_DWORD *)(v28 + 8) )
                  MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4237);
                HMUnlockObject(*v29);
              }
            }
          }
        }
        return (unsigned int)v9;
      }
    }
    else
    {
      EtwTraceAcquiredExclusiveUserCrit();
    }
    gptiCurrent = 0LL;
    return (unsigned int)v9;
  }
  if ( *a1 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)*a1);
  *a1 = 0LL;
  v6 = (char *)a1[1];
  if ( v6 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v6);
  a1[1] = 0LL;
  return 3221225495LL;
}
