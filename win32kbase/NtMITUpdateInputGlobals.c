/*
 * XREFs of NtMITUpdateInputGlobals @ 0x1C00CF240
 * Callers:
 *     <none>
 * Callees:
 *     IsEtwUserCritEnabled @ 0x1C004DF60 (IsEtwUserCritEnabled.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004E000 (UserSessionSwitchLeaveCrit.c)
 *     ?UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z @ 0x1C004E1A8 (-UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z.c)
 *     ?SendUserCritSummary@UserCritTelemetry@@QEAAXXZ @ 0x1C004E418 (-SendUserCritSummary@UserCritTelemetry@@QEAAXXZ.c)
 *     _tlgKeywordOn @ 0x1C004E7C0 (_tlgKeywordOn.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C004F99C (EtwTraceAcquiredExclusiveUserCrit.c)
 *     HMUnlockObject @ 0x1C0072980 (HMUnlockObject.c)
 *     ?IsInputThread@CInputThreadBase@@QEBA_NXZ @ 0x1C007CCB8 (-IsInputThread@CInputThreadBase@@QEBA_NXZ.c)
 *     ?UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z @ 0x1C0080790 (-UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z.c)
 *     UpconvertTime @ 0x1C00CF4A0 (UpconvertTime.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x1C00E1980 (memset.c)
 *     McTemplateK0xqx_EtwWriteTransfer @ 0x1C0167CA4 (McTemplateK0xqx_EtwWriteTransfer.c)
 */

__int64 __fastcall NtMITUpdateInputGlobals(
        __int64 a1,
        unsigned int a2,
        unsigned __int16 a3,
        unsigned int a4,
        unsigned int a5)
{
  __int64 v5; // rbx
  unsigned int v9; // esi
  __int64 v10; // r8
  unsigned __int8 v11; // r10
  PVOID Reserved; // rdx
  unsigned __int64 v13; // r9
  LARGE_INTEGER *CurrentThreadWin32Thread; // rdi
  __int64 v15; // rax
  struct tagTHREADINFO **v16; // r14
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rsi
  LARGE_INTEGER PerformanceCounter; // rbp
  __int64 v23; // rdi
  int v24; // r8d
  struct tagTHREADINFO *v25; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 *v27; // rdi
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rax
  __int64 v34; // rax
  __int64 v35; // [rsp+20h] [rbp-48h]
  unsigned int v36; // [rsp+70h] [rbp+8h]

  v36 = a1;
  v5 = 0LL;
  v9 = a1;
  v10 = 0x200000010000000LL;
  v11 = 2;
  if ( dword_1C02C93D8 && tlgKeywordOn((__int64)&dword_1C02C93D8, 0x400000000000LL)
    || (Reserved = WPP_MAIN_CB.Reserved,
        v13 = 0x8000002010000000uLL,
        ((unsigned __int64)WPP_MAIN_CB.Reserved & 0x8000002010000000uLL) != 0)
    && (unsigned __int8)(byte_1C02C4068 - 1) > v11
    && (qword_1C02C4050 & 0x8000002010000000uLL) != 0
    && (qword_1C02C4058 & 0x8000002010000000uLL) == qword_1C02C4058
    || ((__int64)WPP_MAIN_CB.Reserved & v10) != 0
    && (unsigned __int8)(byte_1C02C4068 - 1) > v11
    && (v10 & qword_1C02C4050) != 0
    && (v10 & qword_1C02C4058) == qword_1C02C4058 )
  {
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, Reserved, v10, v13, v35);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  }
  v15 = SGDGetUserSessionState(a1, Reserved, v10, v13);
  v16 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(*(PERESOURCE *)(v15 + 8));
  if ( v16 )
  {
    if ( IsEtwUserCritEnabled() )
    {
      v21 = PsGetCurrentThreadWin32Thread(v18, v17, v19, v20, v35);
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
          qword_1C02D2BD0 = 0LL;
          xmmword_1C02D2BA8 = 0LL;
          qword_1C02D2BE8 = 0LL;
          xmmword_1C02D2BC0 = 0LL;
          xmmword_1C02D2BF0 = 0uLL;
          xmmword_1C02D2BD8 = 0LL;
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
          qword_1C02D2BD0 = 0LL;
          xmmword_1C02D2BA8 = 0LL;
          qword_1C02D2BE8 = 0LL;
          xmmword_1C02D2BC0 = 0LL;
          xmmword_1C02D2BF0 = 0uLL;
          xmmword_1C02D2BD8 = 0LL;
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
      v9 = v36;
    }
    v25 = *v16;
    gptiCurrent = v25;
    if ( v25 )
    {
      *((_DWORD *)v25 + 387) = 1;
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v18);
      if ( CurrentProcessWin32Process )
      {
        if ( *(_QWORD *)CurrentProcessWin32Process )
        {
          if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0
            && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
            && (*((_DWORD *)gptiCurrent + 318) & 0x80u) == 0 )
          {
            v27 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
            if ( gpSharedUserCritDeferredUnlockListHead )
            {
              do
              {
                gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)v27[2];
                v34 = *v27;
                v27[2] = 0LL;
                if ( !*(_DWORD *)(v34 + 8) )
                  MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4237LL);
                HMUnlockObject(*v27);
                v27 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
              }
              while ( gpSharedUserCritDeferredUnlockListHead );
              v9 = v36;
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
  if ( CInputThreadBase::IsInputThread((CInputThreadBase *)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) )
  {
    v32 = UpconvertTime(v9);
    CInputGlobals::UpdateInputGlobals((__int64)gpInputGlobals, v32, a2, a3, a4, a5);
    v5 = 1LL;
  }
  UserSessionSwitchLeaveCrit(v29, v28, v30, v31);
  return v5;
}
