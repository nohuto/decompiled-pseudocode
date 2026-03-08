/*
 * XREFs of UserProcessTimerDelayCallout @ 0x1C015456C
 * Callers:
 *     W32CalloutDispatch @ 0x1C00ED390 (W32CalloutDispatch.c)
 * Callees:
 *     IsThreadCrossSessionAttached @ 0x1C004B600 (IsThreadCrossSessionAttached.c)
 *     IsEtwUserCritEnabled @ 0x1C004DF60 (IsEtwUserCritEnabled.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004E000 (UserSessionSwitchLeaveCrit.c)
 *     ?UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z @ 0x1C004E1A8 (-UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z.c)
 *     ?SendUserCritSummary@UserCritTelemetry@@QEAAXXZ @ 0x1C004E418 (-SendUserCritSummary@UserCritTelemetry@@QEAAXXZ.c)
 *     _tlgKeywordOn @ 0x1C004E7C0 (_tlgKeywordOn.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C004F99C (EtwTraceAcquiredExclusiveUserCrit.c)
 *     HMUnlockObject @ 0x1C0072980 (HMUnlockObject.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00E1980 (memset.c)
 *     McTemplateK0xqx_EtwWriteTransfer @ 0x1C0167CA4 (McTemplateK0xqx_EtwWriteTransfer.c)
 */

__int64 __fastcall UserProcessTimerDelayCallout(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  PVOID Reserved; // rdx
  unsigned __int64 v6; // r8
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v8; // rax
  struct tagTHREADINFO **v9; // r15
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdi
  LARGE_INTEGER PerformanceCounter; // rsi
  __int64 v16; // rbx
  int v17; // r8d
  bool v18; // zf
  struct tagTHREADINFO *v19; // rbx
  __int64 v20; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v22; // rax
  __int64 *v23; // rbx
  _QWORD *ProcessWin32Process; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  unsigned int v29; // ebx
  __int64 v31; // [rsp+20h] [rbp-38h]

  if ( dword_1C02C93D8 && tlgKeywordOn((__int64)&dword_1C02C93D8, 0x400000000000LL)
    || (Reserved = WPP_MAIN_CB.Reserved,
        v6 = 0x8000002010000000uLL,
        ((unsigned __int64)WPP_MAIN_CB.Reserved & 0x8000002010000000uLL) != 0)
    && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
    && (qword_1C02C4050 & 0x8000002010000000uLL) != 0
    && (qword_1C02C4058 & 0x8000002010000000uLL) == qword_1C02C4058
    || ((__int64)WPP_MAIN_CB.Reserved & 0x200000010000000LL) != 0
    && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
    && (qword_1C02C4050 & 0x200000010000000LL) != 0
    && (qword_1C02C4058 & 0x200000010000000LL) == qword_1C02C4058 )
  {
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, Reserved, v6, a4, v31);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  }
  v8 = SGDGetUserSessionState(a1, Reserved, v6, a4);
  v9 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(*(PERESOURCE *)(v8 + 8));
  if ( !v9 )
  {
    EtwTraceAcquiredExclusiveUserCrit();
LABEL_15:
    gptiCurrent = 0LL;
    goto LABEL_46;
  }
  if ( IsEtwUserCritEnabled() )
  {
    v14 = PsGetCurrentThreadWin32Thread(v11, v10, v12, v13, v31);
    if ( v14 )
    {
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      v16 = PerformanceCounter.QuadPart - *(_QWORD *)(v14 + 8);
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
      UserCritTelemetry::UpdateUserCritInfo((__int64)stru_1C02D1910, v16, 0);
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
      v18 = ((__int64)WPP_MAIN_CB.Reserved & 0x200000010000000LL) == 0;
      *(LARGE_INTEGER *)(v14 + 8) = PerformanceCounter;
      if ( !v18
        && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
        && (qword_1C02C4050 & 0x200000010000000LL) != 0
        && (qword_1C02C4058 & 0x200000010000000LL) == qword_1C02C4058
        && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
      {
        McTemplateK0xqx_EtwWriteTransfer(
          gullUserCritAcquireToken,
          (unsigned int)&AcquiredExclusiveUserCritEvent,
          v17,
          v16,
          1000000 * v16 / gliQpcFreq.QuadPart,
          gullUserCritAcquireToken);
      }
      if ( v16 >= *(__int64 *)&WPP_MAIN_CB.SectorSize
        && (signed __int64)(PerformanceCounter.QuadPart
                          - (unsigned __int64)WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink) >= W32KEtwUserCritTelemetryThrottleQPC )
      {
        if ( (Microsoft_Windows_Win32kEnableBits & 0x1000000000LL) != 0 )
          McTemplateK0xqx_EtwWriteTransfer(
            gullUserCritAcquireToken,
            (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
            v17,
            v16,
            1000 * v16 / gliQpcFreq.QuadPart,
            gullUserCritAcquireToken);
        WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink = (struct _LIST_ENTRY *)PerformanceCounter.QuadPart;
      }
      *(_QWORD *)(v14 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
    }
  }
  v19 = *v9;
  if ( IsThreadCrossSessionAttached() )
    goto LABEL_15;
  gptiCurrent = v19;
  if ( v19 )
  {
    *((_DWORD *)v19 + 387) = 1;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v20);
    if ( CurrentProcessWin32Process )
    {
      if ( *(_QWORD *)CurrentProcessWin32Process
        && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0
        && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
        && (*((_DWORD *)gptiCurrent + 318) & 0x80u) == 0 )
      {
        while ( 1 )
        {
          v23 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
          if ( !gpSharedUserCritDeferredUnlockListHead )
            break;
          gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                       + 2);
          v22 = *v23;
          v23[2] = 0LL;
          if ( !*(_DWORD *)(v22 + 8) )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4237);
          HMUnlockObject(*v23);
        }
      }
    }
  }
LABEL_46:
  ProcessWin32Process = (_QWORD *)PsGetProcessWin32Process(*(_QWORD *)a1);
  if ( ProcessWin32Process && *ProcessWin32Process )
  {
    v28 = qword_1C02D6680;
    v27 = *(unsigned int *)(a1 + 12);
    v25 = *(unsigned int *)(a1 + 8);
    if ( qword_1C02D6680 )
      v29 = ((__int64 (__fastcall *)(_QWORD *, __int64, __int64))qword_1C02D6680)(ProcessWin32Process, v25, v27);
    else
      v29 = -1073741637;
  }
  else
  {
    v29 = -1073741558;
  }
  UserSessionSwitchLeaveCrit(v26, v25, v27, v28);
  return v29;
}
