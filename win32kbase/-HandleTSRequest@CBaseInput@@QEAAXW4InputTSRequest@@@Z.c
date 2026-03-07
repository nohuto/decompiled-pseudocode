char __fastcall CBaseInput::HandleTSRequest(CBaseInput *a1, unsigned int a2)
{
  __int64 v2; // rbp
  _UNKNOWN **v4; // rax
  int v5; // r8d
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rcx
  __int64 v11; // r8
  PVOID Reserved; // rdx
  unsigned __int64 v13; // r9
  LARGE_INTEGER *CurrentThreadWin32Thread; // rdi
  __int64 v15; // rax
  struct tagTHREADINFO **v16; // r13
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // r15
  LARGE_INTEGER PerformanceCounter; // r12
  __int64 v23; // rdi
  int v24; // r8d
  struct tagTHREADINFO *v25; // rdi
  __int64 v26; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 *v28; // rdi
  bool v29; // bl
  int v30; // edx
  __int64 v31; // rax
  __int64 v33; // [rsp+20h] [rbp-48h]

  v2 = a2;
  LOBYTE(v4) = isChildPartition();
  if ( !(_BYTE)v4 )
  {
    if ( *((_DWORD *)a1 + 350) )
    {
      if ( (unsigned int)v2 < 4 )
      {
        if ( *((_DWORD *)&unk_1C0279450 + 6 * v2) != (_DWORD)v2 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1086LL);
        if ( *((_DWORD *)&unk_1C0279450 + 6 * v2 + 4) >= 0x12u || CBaseInput::ExecutingOnSensorHostingThread(a1) )
        {
          (*((void (__fastcall **)(CBaseInput *))&unk_1C0279450 + 3 * v2 + 1))(a1);
        }
        else
        {
          UserSessionSwitchLeaveCrit(v7, v6, v8, v9);
          CRIMBase::SensorDoWorkAndWait(a1, *((unsigned int *)&unk_1C0279450 + 6 * v2 + 4));
          v11 = 0x200000010000000LL;
          if ( dword_1C02C93D8 && tlgKeywordOn((__int64)&dword_1C02C93D8, 0x400000000000LL)
            || (Reserved = WPP_MAIN_CB.Reserved,
                v13 = 0x8000002010000000uLL,
                ((unsigned __int64)WPP_MAIN_CB.Reserved & 0x8000002010000000uLL) != 0)
            && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
            && (qword_1C02C4050 & 0x8000002010000000uLL) != 0
            && (qword_1C02C4058 & 0x8000002010000000uLL) == qword_1C02C4058
            || ((__int64)WPP_MAIN_CB.Reserved & v11) != 0
            && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
            && (v11 & qword_1C02C4050) != 0
            && (v11 & qword_1C02C4058) == qword_1C02C4058 )
          {
            CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v10, Reserved, v11, v13, v33);
            if ( CurrentThreadWin32Thread )
              CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
          }
          v15 = SGDGetUserSessionState(v10, Reserved, v11, v13);
          v16 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(*(PERESOURCE *)(v15 + 8));
          if ( v16 )
          {
            if ( IsEtwUserCritEnabled() )
            {
              v21 = PsGetCurrentThreadWin32Thread(v18, v17, v19, v20, v33);
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
                  xmmword_1C02D2BA8 = 0LL;
                  qword_1C02D2BD0 = 0LL;
                  xmmword_1C02D2BC0 = 0LL;
                  qword_1C02D2BE8 = 0LL;
                  xmmword_1C02D2BD8 = 0LL;
                  xmmword_1C02D2BF0 = 0uLL;
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
                  xmmword_1C02D2BA8 = 0LL;
                  qword_1C02D2BD0 = 0LL;
                  xmmword_1C02D2BC0 = 0LL;
                  qword_1C02D2BE8 = 0LL;
                  xmmword_1C02D2BD8 = 0LL;
                  xmmword_1C02D2BF0 = 0uLL;
                }
                UserCritTelemetry::SendUserCritSummary(stru_1C02D1910);
                *(LARGE_INTEGER *)(v21 + 8) = PerformanceCounter;
                if ( ((__int64)WPP_MAIN_CB.Reserved & 0x200000010000000LL) != 0
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
            v25 = *v16;
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
                      v28 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
                      if ( !gpSharedUserCritDeferredUnlockListHead )
                        break;
                      gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2);
                      v31 = *v28;
                      v28[2] = 0LL;
                      if ( !*(_DWORD *)(v31 + 8) )
                        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4237LL);
                      HMUnlockObject(*v28);
                    }
                  }
                }
              }
              goto LABEL_30;
            }
          }
          else
          {
            EtwTraceAcquiredExclusiveUserCrit();
          }
          gptiCurrent = 0LL;
        }
      }
LABEL_30:
      LOBYTE(v4) = (*(__int64 (__fastcall **)(CBaseInput *, _QWORD))(*(_QWORD *)a1 + 128LL))(a1, (unsigned int)v2);
      return (char)v4;
    }
    if ( (((_DWORD)v2 - 1) & 0xFFFFFFFD) != 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1018LL);
    v29 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000000) != 0
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
    v4 = &WPP_RECORDER_INITIALIZED;
    if ( v29 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v30 = 11;
      LOBYTE(v30) = v29;
      LOBYTE(v5) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      LOBYTE(v4) = WPP_RECORDER_AND_TRACE_SF_(
                     WPP_GLOBAL_Control->AttachedDevice,
                     v30,
                     v5,
                     WPP_MAIN_CB.Queue.ListEntry.Flink,
                     3,
                     25,
                     11,
                     (__int64)&WPP_b9fda6c6f15d3af104d8d89ad615ee8c_Traceguids);
    }
  }
  return (char)v4;
}
