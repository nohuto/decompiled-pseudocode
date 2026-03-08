/*
 * XREFs of NtUserRegisterSessionPort @ 0x1C00907E0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C003E180 (UserSetLastError.c)
 *     IsEtwUserCritEnabled @ 0x1C004DF60 (IsEtwUserCritEnabled.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004E000 (UserSessionSwitchLeaveCrit.c)
 *     ?UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z @ 0x1C004E1A8 (-UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z.c)
 *     ?SendUserCritSummary@UserCritTelemetry@@QEAAXXZ @ 0x1C004E418 (-SendUserCritSummary@UserCritTelemetry@@QEAAXXZ.c)
 *     _tlgKeywordOn @ 0x1C004E7C0 (_tlgKeywordOn.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C004F99C (EtwTraceAcquiredExclusiveUserCrit.c)
 *     HMUnlockObject @ 0x1C0072980 (HMUnlockObject.c)
 *     ?xxxDwmProcessStartup@@YAJPEAX@Z @ 0x1C00909F4 (-xxxDwmProcessStartup@@YAJPEAX@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x1C00E1980 (memset.c)
 *     McTemplateK0xqx_EtwWriteTransfer @ 0x1C0167CA4 (McTemplateK0xqx_EtwWriteTransfer.c)
 */

__int64 __fastcall NtUserRegisterSessionPort(HANDLE Handle, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  PVOID Reserved; // rdx
  unsigned __int64 v7; // r8
  LARGE_INTEGER *CurrentThreadWin32Thread; // rdi
  __int64 v9; // rax
  struct tagTHREADINFO **v10; // r14
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rsi
  LARGE_INTEGER PerformanceCounter; // rbp
  __int64 v17; // rdi
  int v18; // r8d
  bool v19; // zf
  struct tagTHREADINFO *v20; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 *v22; // rdi
  NTSTATUS v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v29; // rax
  ULONG v30; // eax
  __int64 v31; // [rsp+20h] [rbp-38h]

  v4 = 0LL;
  if ( dword_1C02C93D8 && tlgKeywordOn((__int64)&dword_1C02C93D8, 0x400000000000LL)
    || (Reserved = WPP_MAIN_CB.Reserved,
        v7 = 0x8000002010000000uLL,
        ((unsigned __int64)WPP_MAIN_CB.Reserved & 0x8000002010000000uLL) != 0)
    && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
    && (qword_1C02C4050 & 0x8000002010000000uLL) != 0
    && (qword_1C02C4058 & 0x8000002010000000uLL) == qword_1C02C4058
    || ((__int64)WPP_MAIN_CB.Reserved & 0x200000010000000LL) != 0
    && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
    && (qword_1C02C4050 & 0x200000010000000LL) != 0
    && (qword_1C02C4058 & 0x200000010000000LL) == qword_1C02C4058 )
  {
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(Handle, Reserved, v7, a4, v31);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  }
  v9 = SGDGetUserSessionState(Handle, Reserved, v7, a4);
  v10 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(*(PERESOURCE *)(v9 + 8));
  if ( v10 )
  {
    if ( IsEtwUserCritEnabled() )
    {
      v15 = PsGetCurrentThreadWin32Thread(v12, v11, v13, v14, v31);
      if ( v15 )
      {
        PerformanceCounter = KeQueryPerformanceCounter(0LL);
        v17 = PerformanceCounter.QuadPart - *(_QWORD *)(v15 + 8);
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
        UserCritTelemetry::UpdateUserCritInfo((__int64)stru_1C02D1910, v17, 0);
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
        v19 = ((__int64)WPP_MAIN_CB.Reserved & 0x200000010000000LL) == 0;
        *(LARGE_INTEGER *)(v15 + 8) = PerformanceCounter;
        if ( !v19
          && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
          && (qword_1C02C4050 & 0x200000010000000LL) != 0
          && (qword_1C02C4058 & 0x200000010000000LL) == qword_1C02C4058
          && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
        {
          McTemplateK0xqx_EtwWriteTransfer(
            gullUserCritAcquireToken,
            (unsigned int)&AcquiredExclusiveUserCritEvent,
            v18,
            v17,
            1000000 * v17 / gliQpcFreq.QuadPart,
            gullUserCritAcquireToken);
        }
        if ( v17 >= *(__int64 *)&WPP_MAIN_CB.SectorSize
          && (signed __int64)(PerformanceCounter.QuadPart
                            - (unsigned __int64)WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink) >= W32KEtwUserCritTelemetryThrottleQPC )
        {
          if ( (Microsoft_Windows_Win32kEnableBits & 0x1000000000LL) != 0 )
            McTemplateK0xqx_EtwWriteTransfer(
              gullUserCritAcquireToken,
              (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
              v18,
              v17,
              1000 * v17 / gliQpcFreq.QuadPart,
              gullUserCritAcquireToken);
          WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink = (struct _LIST_ENTRY *)PerformanceCounter.QuadPart;
        }
        *(_QWORD *)(v15 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
      }
    }
    v20 = *v10;
    gptiCurrent = v20;
    if ( v20 )
    {
      *((_DWORD *)v20 + 387) = 1;
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v12);
      if ( CurrentProcessWin32Process )
      {
        if ( *(_QWORD *)CurrentProcessWin32Process
          && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0
          && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
          && (*((_DWORD *)gptiCurrent + 318) & 0x80u) == 0 )
        {
          while ( 1 )
          {
            v22 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
            if ( !gpSharedUserCritDeferredUnlockListHead )
              break;
            gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                         + 2);
            v29 = *v22;
            v22[2] = 0LL;
            if ( !*(_DWORD *)(v29 + 8) )
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4237LL);
            HMUnlockObject(*v22);
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
  v23 = xxxDwmProcessStartup(Handle);
  if ( v23 < 0 )
  {
    v30 = RtlNtStatusToDosError(v23);
    UserSetLastError(v30);
  }
  else
  {
    v4 = 1LL;
  }
  UserSessionSwitchLeaveCrit(v25, v24, v26, v27);
  return v4;
}
