void __fastcall IOCPDispatcher::Close(IOCPDispatcher *this, char a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rcx
  int v9; // eax
  int v10; // edx
  PDEVICE_OBJECT v11; // rcx
  __int64 v12; // r9
  PVOID Reserved; // rdx
  unsigned __int64 v14; // r8
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v16; // rax
  struct tagTHREADINFO **v17; // r14
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rsi
  LARGE_INTEGER PerformanceCounter; // rbp
  __int64 v24; // rbx
  int v25; // r8d
  bool v26; // zf
  struct tagTHREADINFO *v27; // rbx
  __int64 v28; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 *v30; // rbx
  __int64 v31; // rcx
  void *v32; // r8
  __int64 v33; // rax
  __int64 v34; // [rsp+20h] [rbp-88h]
  int v35; // [rsp+28h] [rbp-80h]
  _OWORD v36[5]; // [rsp+50h] [rbp-58h] BYREF
  __int64 v37; // [rsp+B0h] [rbp+8h] BYREF
  int v38; // [rsp+C0h] [rbp+18h] BYREF

  if ( !*((_QWORD *)this + 363) )
    return;
  IOCPDispatcher::CleanupInputDispatcherObjects(this);
  IOCPDispatcher::CleanupThreadDispatcherObjects(this);
  if ( a2 )
  {
    UserSessionSwitchLeaveCrit(v5, v4, v6, v7);
    v38 = 0;
    memset(v36, 0, 32);
    while ( 1 )
    {
      v8 = *((_QWORD *)this + 363);
      LOBYTE(v35) = 0;
      v37 = -200000LL;
      v9 = ZwRemoveIoCompletionEx(v8, v36, 1LL, &v38, &v37, v35);
      if ( v9 < 0 )
        break;
      if ( v9 == 258 )
        goto LABEL_6;
    }
    v11 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) == 0
      || (LOBYTE(v10) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(v10) = 0;
    }
    if ( (_BYTE)v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v32 = &WPP_b9fda6c6f15d3af104d8d89ad615ee8c_Traceguids;
      LOBYTE(v32) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_d(
        WPP_GLOBAL_Control->AttachedDevice,
        v10,
        (_DWORD)v32,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        3,
        24,
        (__int64)&WPP_b9fda6c6f15d3af104d8d89ad615ee8c_Traceguids,
        v9);
    }
LABEL_6:
    if ( dword_1C02C93D8 && tlgKeywordOn((__int64)&dword_1C02C93D8, 0x400000000000LL)
      || (Reserved = WPP_MAIN_CB.Reserved,
          v14 = 0x8000002010000000uLL,
          ((unsigned __int64)WPP_MAIN_CB.Reserved & 0x8000002010000000uLL) != 0)
      && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
      && (qword_1C02C4050 & 0x8000002010000000uLL) != 0
      && (qword_1C02C4058 & 0x8000002010000000uLL) == qword_1C02C4058
      || ((__int64)WPP_MAIN_CB.Reserved & 0x200000010000000LL) != 0
      && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
      && (qword_1C02C4050 & 0x200000010000000LL) != 0
      && (qword_1C02C4058 & 0x200000010000000LL) == qword_1C02C4058 )
    {
      CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v11, Reserved, v14, v12, v34);
      if ( CurrentThreadWin32Thread )
        CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    }
    v16 = SGDGetUserSessionState(v11, Reserved, v14, v12);
    v17 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(*(PERESOURCE *)(v16 + 8));
    if ( v17 )
    {
      if ( IsEtwUserCritEnabled() )
      {
        v22 = PsGetCurrentThreadWin32Thread(v19, v18, v20, v21, v34);
        if ( v22 )
        {
          PerformanceCounter = KeQueryPerformanceCounter(0LL);
          v24 = PerformanceCounter.QuadPart - *(_QWORD *)(v22 + 8);
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
          UserCritTelemetry::UpdateUserCritInfo((__int64)stru_1C02D1910, v24, 0);
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
          v26 = ((__int64)WPP_MAIN_CB.Reserved & 0x200000010000000LL) == 0;
          *(LARGE_INTEGER *)(v22 + 8) = PerformanceCounter;
          if ( !v26
            && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
            && (qword_1C02C4050 & 0x200000010000000LL) != 0
            && (qword_1C02C4058 & 0x200000010000000LL) == qword_1C02C4058
            && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
          {
            McTemplateK0xqx_EtwWriteTransfer(
              gullUserCritAcquireToken,
              (unsigned int)&AcquiredExclusiveUserCritEvent,
              v25,
              v24,
              1000000 * v24 / gliQpcFreq.QuadPart,
              gullUserCritAcquireToken);
          }
          if ( v24 >= *(__int64 *)&WPP_MAIN_CB.SectorSize
            && (signed __int64)(PerformanceCounter.QuadPart
                              - (unsigned __int64)WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink) >= W32KEtwUserCritTelemetryThrottleQPC )
          {
            if ( (Microsoft_Windows_Win32kEnableBits & 0x1000000000LL) != 0 )
              McTemplateK0xqx_EtwWriteTransfer(
                gullUserCritAcquireToken,
                (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
                v25,
                v24,
                1000 * v24 / gliQpcFreq.QuadPart,
                gullUserCritAcquireToken);
            WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink = (struct _LIST_ENTRY *)PerformanceCounter.QuadPart;
          }
          *(_QWORD *)(v22 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
        }
      }
      v27 = *v17;
      if ( !IsThreadCrossSessionAttached() )
      {
        gptiCurrent = v27;
        if ( v27 )
        {
          *((_DWORD *)v27 + 387) = 1;
          CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v28);
          if ( CurrentProcessWin32Process )
          {
            if ( *(_QWORD *)CurrentProcessWin32Process
              && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0
              && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
              && (*((_DWORD *)gptiCurrent + 318) & 0x80u) == 0 )
            {
              while ( 1 )
              {
                v30 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
                if ( !gpSharedUserCritDeferredUnlockListHead )
                  break;
                gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                             + 2);
                v33 = *v30;
                v30[2] = 0LL;
                if ( !*(_DWORD *)(v33 + 8) )
                {
                  LODWORD(v37) = 0x20000;
                  MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4237LL);
                }
                HMUnlockObject(*v30);
              }
            }
          }
        }
        goto LABEL_28;
      }
    }
    else
    {
      EtwTraceAcquiredExclusiveUserCrit();
    }
    gptiCurrent = 0LL;
  }
LABEL_28:
  v31 = *((_QWORD *)this + 364);
  if ( v31 )
  {
    ProtectHandle(v31, v4, 0LL, 0LL);
    ObCloseHandle(*((HANDLE *)this + 364), 1);
    *((_QWORD *)this + 364) = 0LL;
  }
  ZwClose(*((HANDLE *)this + 363));
  *((_QWORD *)this + 363) = 0LL;
}
