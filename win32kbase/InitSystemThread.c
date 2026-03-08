/*
 * XREFs of InitSystemThread @ 0x1C00C2CB0
 * Callers:
 *     VideoPortCalloutThread @ 0x1C00D93A8 (VideoPortCalloutThread.c)
 * Callees:
 *     IsThreadCrossSessionAttached @ 0x1C004B600 (IsThreadCrossSessionAttached.c)
 *     IsEtwUserCritEnabled @ 0x1C004DF60 (IsEtwUserCritEnabled.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004E000 (UserSessionSwitchLeaveCrit.c)
 *     ?UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z @ 0x1C004E1A8 (-UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z.c)
 *     ?SendUserCritSummary@UserCritTelemetry@@QEAAXXZ @ 0x1C004E418 (-SendUserCritSummary@UserCritTelemetry@@QEAAXXZ.c)
 *     _tlgKeywordOn @ 0x1C004E7C0 (_tlgKeywordOn.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C004F99C (EtwTraceAcquiredExclusiveUserCrit.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C004FE50 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?AllocateQuotaZInit@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C0068568 (-AllocateQuotaZInit@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     HMUnlockObject @ 0x1C0072980 (HMUnlockObject.c)
 *     InitClientInfo @ 0x1C0079034 (InitClientInfo.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x1C00E1980 (memset.c)
 *     memmove @ 0x1C00E1EC0 (memmove.c)
 *     McTemplateK0xqx_EtwWriteTransfer @ 0x1C0167CA4 (McTemplateK0xqx_EtwWriteTransfer.c)
 */

__int64 __fastcall InitSystemThread(const void **a1)
{
  __int64 v2; // rcx
  __int64 v3; // r9
  unsigned int v4; // ebx
  PVOID Reserved; // rdx
  unsigned __int64 v6; // r8
  LARGE_INTEGER *CurrentThreadWin32Thread; // rdi
  __int64 v8; // rax
  struct tagTHREADINFO **v9; // r15
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rbp
  LARGE_INTEGER PerformanceCounter; // r14
  __int64 v16; // rdi
  int v17; // r8d
  bool v18; // zf
  struct tagTHREADINFO *v19; // rdi
  __int64 v20; // rdx
  struct tagTHREADINFO *v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 CurrentProcessWin32Process; // rax
  __int64 *v25; // rdi
  struct tagTHREADINFO *v26; // rdi
  unsigned __int64 v27; // rdx
  NSInstrumentation::CLeakTrackingAllocator *v28; // rcx
  __int64 QuotaZInit; // rax
  unsigned __int64 v30; // rdx
  NSInstrumentation::CLeakTrackingAllocator *v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  char *v34; // rdx
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v38; // rax
  __int64 v39; // [rsp+20h] [rbp-38h]

  PsGetThreadProcess(KeGetCurrentThread());
  v4 = 0;
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
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v2, Reserved, v6, v3, v39);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  }
  v8 = SGDGetUserSessionState(v2, Reserved, v6, v3);
  v9 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(*(PERESOURCE *)(v8 + 8));
  if ( !v9 )
  {
    EtwTraceAcquiredExclusiveUserCrit();
LABEL_46:
    gptiCurrent = 0LL;
    goto LABEL_23;
  }
  if ( IsEtwUserCritEnabled() )
  {
    v14 = PsGetCurrentThreadWin32Thread(v11, v10, v12, v13, v39);
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
    goto LABEL_46;
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
              v38 = *v25;
              v25[2] = 0LL;
              if ( !*(_DWORD *)(v38 + 8) )
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
  QuotaZInit = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(v28, v27, 0x118uLL, 0x69637355u);
  *((_QWORD *)v26 + 60) = QuotaZInit;
  if ( QuotaZInit )
  {
    *((_DWORD *)v26 + 122) = *((_DWORD *)v26 + 122) & 0xFFFFFFF3 | 4;
    if ( (unsigned int)InitClientInfo((__int64)v26, v30, v32, v33) )
    {
      if ( a1 )
      {
        v34 = (char *)*((_QWORD *)v26 + 62);
        if ( v34 )
          NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v34);
        v35 = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                v31,
                (unsigned __int64)v34,
                *(unsigned __int16 *)a1 + 18LL,
                0x78747355u);
        *((_QWORD *)v26 + 62) = v35;
        if ( v35 )
        {
          *(_QWORD *)(v35 + 8) = v35 + 16;
          memmove(*(void **)(*((_QWORD *)v26 + 62) + 8LL), a1[1], *(unsigned __int16 *)a1);
          v30 = (unsigned __int64)*(unsigned __int16 *)a1 >> 1;
          *(_WORD *)(*(_QWORD *)(*((_QWORD *)v26 + 62) + 8LL) + 2 * v30) = 0;
          *(_WORD *)(*((_QWORD *)v26 + 62) + 2LL) = *(_WORD *)a1 + 2;
          v31 = (NSInstrumentation::CLeakTrackingAllocator *)*((_QWORD *)v26 + 62);
          *(_WORD *)v31 = *(_WORD *)a1;
        }
      }
      v36 = *((_QWORD *)v26 + 53);
      if ( v36 && (*(_DWORD *)(v36 + 12) & 0x40) != 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 205LL);
    }
    else
    {
      v4 = -1073741823;
    }
  }
  else
  {
    v4 = -1073741801;
  }
  UserSessionSwitchLeaveCrit((__int64)v31, v30, v32, v33);
  return v4;
}
