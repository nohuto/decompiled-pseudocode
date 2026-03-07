__int64 __fastcall PowerResumeSuspendEvent(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // bl
  char v5; // di
  unsigned int *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rcx
  __int64 v12; // rax
  struct tagTHREADINFO **v13; // r14
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  PVOID Reserved; // rdx
  unsigned __int64 v19; // r8
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 *v21; // rbx
  __int64 v22; // rax
  __int64 CurrentProcessWin32Process; // rax
  unsigned int v24; // ebp
  __int64 v25; // rcx
  __int64 v26; // r9
  __int64 v27; // rdi
  LARGE_INTEGER PerformanceCounter; // rsi
  __int64 v29; // rbx
  int v30; // r8d
  bool v31; // zf
  struct tagTHREADINFO *v32; // rbx
  __int64 v33; // rcx
  __int64 OutputBufferLength; // [rsp+20h] [rbp-68h]
  __int64 InputBuffer; // [rsp+38h] [rbp-50h] BYREF
  int v36; // [rsp+40h] [rbp-48h]
  int v37; // [rsp+44h] [rbp-44h]
  int v38; // [rsp+48h] [rbp-40h]

  v4 = a3;
  v5 = a1;
  if ( !gbNonServiceSession && (_BYTE)a2 )
    return *(_BYTE *)(SGDGetUserSessionState(a1, a2, a3, a4) + 712) != 0 ? 0x103 : 0;
  InputBuffer = 90LL;
  v36 = 0;
  v7 = (unsigned int *)SGDGetUserSessionState(a1, a2, a3, a4);
  v11 = *v7;
  v38 = *v7;
  if ( v5 )
    v37 = 0;
  else
    v37 = (v4 != 0) + 1;
  UserSessionSwitchLeaveCrit(v11, v8, v9, v10);
  v24 = ZwPowerInformation(SystemPowerStateLogging|0x40, &InputBuffer, 0x14u, 0LL, 0);
  if ( v24 && v24 != 259 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2078LL);
  if ( dword_1C02C93D8 && tlgKeywordOn((__int64)&dword_1C02C93D8, 0x400000000000LL)
    || (Reserved = WPP_MAIN_CB.Reserved,
        v19 = 0x8000002010000000uLL,
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
                                                  v25,
                                                  Reserved,
                                                  v19,
                                                  v26,
                                                  OutputBufferLength);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  }
  v12 = SGDGetUserSessionState(v25, Reserved, v19, v26);
  v13 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(*(PERESOURCE *)(v12 + 8));
  if ( v13 )
  {
    if ( IsEtwUserCritEnabled() )
    {
      v27 = PsGetCurrentThreadWin32Thread(v15, v14, v16, v17, OutputBufferLength);
      if ( v27 )
      {
        PerformanceCounter = KeQueryPerformanceCounter(0LL);
        v29 = PerformanceCounter.QuadPart - *(_QWORD *)(v27 + 8);
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
        UserCritTelemetry::UpdateUserCritInfo((__int64)stru_1C02D1910, v29, 0);
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
        v31 = ((__int64)WPP_MAIN_CB.Reserved & 0x200000010000000LL) == 0;
        *(LARGE_INTEGER *)(v27 + 8) = PerformanceCounter;
        if ( !v31
          && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
          && (qword_1C02C4050 & 0x200000010000000LL) != 0
          && (qword_1C02C4058 & 0x200000010000000LL) == qword_1C02C4058
          && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
        {
          McTemplateK0xqx_EtwWriteTransfer(
            gullUserCritAcquireToken,
            (unsigned int)&AcquiredExclusiveUserCritEvent,
            v30,
            v29,
            1000000 * v29 / gliQpcFreq.QuadPart,
            gullUserCritAcquireToken);
        }
        if ( v29 >= *(__int64 *)&WPP_MAIN_CB.SectorSize
          && (signed __int64)(PerformanceCounter.QuadPart
                            - (unsigned __int64)WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink) >= W32KEtwUserCritTelemetryThrottleQPC )
        {
          if ( (Microsoft_Windows_Win32kEnableBits & 0x1000000000LL) != 0 )
            McTemplateK0xqx_EtwWriteTransfer(
              gullUserCritAcquireToken,
              (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
              v30,
              v29,
              1000 * v29 / gliQpcFreq.QuadPart,
              gullUserCritAcquireToken);
          WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink = (struct _LIST_ENTRY *)PerformanceCounter.QuadPart;
        }
        *(_QWORD *)(v27 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
      }
    }
    v32 = *v13;
    if ( !IsThreadCrossSessionAttached() )
    {
      gptiCurrent = v32;
      if ( v32 )
      {
        *((_DWORD *)v32 + 387) = 1;
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v33);
        if ( CurrentProcessWin32Process )
        {
          if ( *(_QWORD *)CurrentProcessWin32Process
            && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0
            && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
            && (*((_DWORD *)gptiCurrent + 318) & 0x80u) == 0 )
          {
            while ( 1 )
            {
              v21 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
              if ( !gpSharedUserCritDeferredUnlockListHead )
                break;
              gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                           + 2);
              v22 = *v21;
              v21[2] = 0LL;
              if ( !*(_DWORD *)(v22 + 8) )
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4237LL);
              HMUnlockObject(*v21);
            }
          }
        }
      }
      return v24;
    }
  }
  else
  {
    EtwTraceAcquiredExclusiveUserCrit();
  }
  gptiCurrent = 0LL;
  return v24;
}
