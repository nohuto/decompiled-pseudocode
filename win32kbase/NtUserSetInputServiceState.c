/*
 * XREFs of NtUserSetInputServiceState @ 0x1C00BD570
 * Callers:
 *     <none>
 * Callees:
 *     HandleDeferredInput @ 0x1C0006160 (HandleDeferredInput.c)
 *     IsThreadCrossSessionAttached @ 0x1C004B600 (IsThreadCrossSessionAttached.c)
 *     IsEtwUserCritEnabled @ 0x1C004DF60 (IsEtwUserCritEnabled.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004E000 (UserSessionSwitchLeaveCrit.c)
 *     ?UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z @ 0x1C004E1A8 (-UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z.c)
 *     ?SendUserCritSummary@UserCritTelemetry@@QEAAXXZ @ 0x1C004E418 (-SendUserCritSummary@UserCritTelemetry@@QEAAXXZ.c)
 *     _tlgKeywordOn @ 0x1C004E7C0 (_tlgKeywordOn.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C004F99C (EtwTraceAcquiredExclusiveUserCrit.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C004FE50 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     HMUnlockObject @ 0x1C0072980 (HMUnlockObject.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x1C00E1980 (memset.c)
 *     McTemplateK0xqx_EtwWriteTransfer @ 0x1C0167CA4 (McTemplateK0xqx_EtwWriteTransfer.c)
 */

__int64 __fastcall NtUserSetInputServiceState(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbx
  unsigned int v4; // r14d
  __int64 v5; // r8
  PVOID Reserved; // rdx
  unsigned __int64 v7; // r9
  LARGE_INTEGER *CurrentThreadWin32Thread; // rdi
  __int64 v9; // rax
  struct tagTHREADINFO **v10; // r15
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rsi
  LARGE_INTEGER PerformanceCounter; // rbp
  __int64 v17; // rdi
  int v18; // r8d
  struct tagTHREADINFO *v19; // rdi
  __int64 v20; // rdx
  struct tagTHREADINFO *v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 CurrentProcessWin32Process; // rax
  __int64 *v25; // rdi
  struct tagTHREADINFO *v26; // rax
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rdx
  __int64 v32; // rax
  __int64 v33; // [rsp+20h] [rbp-38h]

  v2 = 0LL;
  v4 = a1;
  v5 = 0x200000010000000LL;
  if ( dword_1C02C93D8 && tlgKeywordOn((__int64)&dword_1C02C93D8, 0x400000000000LL)
    || (Reserved = WPP_MAIN_CB.Reserved,
        v7 = 0x8000002010000000uLL,
        ((unsigned __int64)WPP_MAIN_CB.Reserved & 0x8000002010000000uLL) != 0)
    && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
    && (qword_1C02C4050 & 0x8000002010000000uLL) != 0
    && (qword_1C02C4058 & 0x8000002010000000uLL) == qword_1C02C4058
    || ((__int64)WPP_MAIN_CB.Reserved & v5) != 0
    && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
    && (v5 & qword_1C02C4050) != 0
    && (v5 & qword_1C02C4058) == qword_1C02C4058 )
  {
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, Reserved, v5, v7, v33);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  }
  v9 = SGDGetUserSessionState(a1, Reserved, v5, v7);
  v10 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(*(PERESOURCE *)(v9 + 8));
  if ( !v10 )
  {
    EtwTraceAcquiredExclusiveUserCrit();
LABEL_44:
    gptiCurrent = 0LL;
    goto LABEL_23;
  }
  if ( IsEtwUserCritEnabled() )
  {
    v15 = PsGetCurrentThreadWin32Thread(v12, v11, v13, v14, v33);
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
      *(LARGE_INTEGER *)(v15 + 8) = PerformanceCounter;
      if ( ((__int64)WPP_MAIN_CB.Reserved & 0x200000010000000LL) != 0
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
  v19 = *v10;
  if ( IsThreadCrossSessionAttached() )
    goto LABEL_44;
  gptiCurrent = v19;
  if ( v19 )
  {
    *((_DWORD *)v19 + 387) = 1;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v21);
    if ( CurrentProcessWin32Process )
    {
      if ( *(_QWORD *)CurrentProcessWin32Process )
      {
        if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
        {
          v21 = gptiCurrent;
          if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0 && (*((_DWORD *)gptiCurrent + 318) & 0x80u) == 0 )
          {
            while ( 1 )
            {
              v25 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
              if ( !gpSharedUserCritDeferredUnlockListHead )
                break;
              gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                           + 2);
              v32 = *v25;
              v25[2] = 0LL;
              if ( !*(_DWORD *)(v32 + 8) )
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4237LL);
              HMUnlockObject(*v25);
            }
          }
        }
      }
    }
  }
LABEL_23:
  v26 = PtiCurrentShared((__int64)v21, v20, v22, v23);
  v30 = v4;
  if ( !v4 )
  {
    *((_DWORD *)v26 + 318) &= ~0x10000000u;
    goto LABEL_28;
  }
  v30 = v4 - 1;
  if ( v4 == 1 )
  {
    *((_DWORD *)v26 + 318) |= 0x10000000u;
LABEL_28:
    v2 = 1LL;
    goto LABEL_29;
  }
  v30 = v4 - 2;
  if ( v4 == 2 || (v30 = v4 - 3, v4 == 3) || (v30 = v4 - 4, v4 == 4) || (v30 = v4 - 5, (unsigned int)v30 <= 1) )
  {
    if ( (*((_DWORD *)v26 + 318) & 0x10000000) != 0 )
      HandleDeferredInput((__int64)v26, v4, a2, v29);
    goto LABEL_28;
  }
LABEL_29:
  UserSessionSwitchLeaveCrit(v27, v30, v28, v29);
  return v2;
}
