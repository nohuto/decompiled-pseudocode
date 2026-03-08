/*
 * XREFs of UserEnterUserCritSec @ 0x1C00D3ED0
 * Callers:
 *     <none>
 * Callees:
 *     IsThreadCrossSessionAttached @ 0x1C004B600 (IsThreadCrossSessionAttached.c)
 *     IsEtwUserCritEnabled @ 0x1C004DF60 (IsEtwUserCritEnabled.c)
 *     ?UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z @ 0x1C004E1A8 (-UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z.c)
 *     ?SendUserCritSummary@UserCritTelemetry@@QEAAXXZ @ 0x1C004E418 (-SendUserCritSummary@UserCritTelemetry@@QEAAXXZ.c)
 *     _tlgKeywordOn @ 0x1C004E7C0 (_tlgKeywordOn.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C004F99C (EtwTraceAcquiredExclusiveUserCrit.c)
 *     HMUnlockObject @ 0x1C0072980 (HMUnlockObject.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x1C00E1980 (memset.c)
 *     McTemplateK0xqx_EtwWriteTransfer @ 0x1C0167CA4 (McTemplateK0xqx_EtwWriteTransfer.c)
 */

__int64 __fastcall UserEnterUserCritSec(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  PVOID Reserved; // rdx
  unsigned __int64 v5; // r8
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v7; // rax
  struct tagTHREADINFO **v8; // r14
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdi
  LARGE_INTEGER PerformanceCounter; // rsi
  __int64 v15; // rbx
  int v16; // r8d
  bool v17; // zf
  struct tagTHREADINFO *v18; // rbx
  __int64 result; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 *v22; // rbx
  __int64 v23; // [rsp+20h] [rbp-38h]

  if ( dword_1C02C93D8 && tlgKeywordOn((__int64)&dword_1C02C93D8, 0x400000000000LL)
    || (Reserved = WPP_MAIN_CB.Reserved,
        v5 = 0x8000002010000000uLL,
        ((unsigned __int64)WPP_MAIN_CB.Reserved & 0x8000002010000000uLL) != 0)
    && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
    && (qword_1C02C4050 & 0x8000002010000000uLL) != 0
    && (qword_1C02C4058 & 0x8000002010000000uLL) == qword_1C02C4058
    || ((__int64)WPP_MAIN_CB.Reserved & 0x200000010000000LL) != 0
    && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
    && (qword_1C02C4050 & 0x200000010000000LL) != 0
    && (qword_1C02C4058 & 0x200000010000000LL) == qword_1C02C4058 )
  {
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, Reserved, v5, a4, v23);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  }
  v7 = SGDGetUserSessionState(a1, Reserved, v5, a4);
  v8 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(*(PERESOURCE *)(v7 + 8));
  if ( !v8 )
  {
    result = EtwTraceAcquiredExclusiveUserCrit();
LABEL_17:
    gptiCurrent = 0LL;
    return result;
  }
  if ( IsEtwUserCritEnabled() )
  {
    v13 = PsGetCurrentThreadWin32Thread(v10, v9, v11, v12, v23);
    if ( v13 )
    {
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      v15 = PerformanceCounter.QuadPart - *(_QWORD *)(v13 + 8);
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
      UserCritTelemetry::UpdateUserCritInfo((__int64)stru_1C02D1910, v15, 0);
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
      v17 = ((__int64)WPP_MAIN_CB.Reserved & 0x200000010000000LL) == 0;
      *(LARGE_INTEGER *)(v13 + 8) = PerformanceCounter;
      if ( !v17
        && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
        && (qword_1C02C4050 & 0x200000010000000LL) != 0
        && (qword_1C02C4058 & 0x200000010000000LL) == qword_1C02C4058
        && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
      {
        McTemplateK0xqx_EtwWriteTransfer(
          gullUserCritAcquireToken,
          (unsigned int)&AcquiredExclusiveUserCritEvent,
          v16,
          v15,
          1000000 * v15 / gliQpcFreq.QuadPart,
          gullUserCritAcquireToken);
      }
      if ( v15 >= *(__int64 *)&WPP_MAIN_CB.SectorSize
        && (signed __int64)(PerformanceCounter.QuadPart
                          - (unsigned __int64)WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink) >= W32KEtwUserCritTelemetryThrottleQPC )
      {
        if ( (Microsoft_Windows_Win32kEnableBits & 0x1000000000LL) != 0 )
          McTemplateK0xqx_EtwWriteTransfer(
            gullUserCritAcquireToken,
            (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
            v16,
            v15,
            1000 * v15 / gliQpcFreq.QuadPart,
            gullUserCritAcquireToken);
        WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink = (struct _LIST_ENTRY *)PerformanceCounter.QuadPart;
      }
      *(_QWORD *)(v13 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
    }
  }
  v18 = *v8;
  result = IsThreadCrossSessionAttached();
  if ( (_DWORD)result )
    goto LABEL_17;
  gptiCurrent = v18;
  if ( v18 )
  {
    *((_DWORD *)v18 + 387) = 1;
    result = PsGetCurrentProcessWin32Process(v20);
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
              v22 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
              if ( !gpSharedUserCritDeferredUnlockListHead )
                break;
              gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                           + 2);
              v21 = *v22;
              v22[2] = 0LL;
              if ( !*(_DWORD *)(v21 + 8) )
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4237LL);
              result = HMUnlockObject(*v22);
            }
          }
        }
      }
    }
  }
  return result;
}
