/*
 * XREFs of NtSetCursorInputSpace @ 0x1C016C8F0
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
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x1C00E1980 (memset.c)
 *     McTemplateK0xqx_EtwWriteTransfer @ 0x1C0167CA4 (McTemplateK0xqx_EtwWriteTransfer.c)
 *     ?BindMouse@CInputConfig@@QEAAJU_LUID@@@Z @ 0x1C02133C0 (-BindMouse@CInputConfig@@QEAAJU_LUID@@@Z.c)
 *     CheckCapability @ 0x1C0217620 (CheckCapability.c)
 */

__int64 __fastcall NtSetCursorInputSpace(struct _LUID a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  PVOID Reserved; // rdx
  unsigned __int64 v7; // r8
  LARGE_INTEGER *CurrentThreadWin32Thread; // rsi
  __int64 v9; // rax
  struct tagTHREADINFO **v10; // r15
  __int64 v11; // rdx
  struct tagTHREADINFO *v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rbp
  LARGE_INTEGER PerformanceCounter; // r14
  __int64 v17; // rsi
  bool v18; // zf
  struct tagTHREADINFO *v19; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v21; // rax
  __int64 *v22; // rsi
  __int64 CurrentProcess; // rax
  CInputConfig *v24; // rcx
  NTSTATUS v25; // eax
  __int64 v26; // rcx
  ULONG v27; // ecx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rax
  __int64 v34; // [rsp+20h] [rbp-38h]
  __int64 v35; // [rsp+20h] [rbp-38h]

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
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, Reserved, v7, a4, v34);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  }
  v9 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))SGDGetUserSessionState)(a1, Reserved, v7, a4);
  v10 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(*(PERESOURCE *)(v9 + 8));
  if ( v10 )
  {
    if ( IsEtwUserCritEnabled() )
    {
      v15 = PsGetCurrentThreadWin32Thread(v12, v11, v13, v14, v34);
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
        v18 = ((__int64)WPP_MAIN_CB.Reserved & 0x200000010000000LL) == 0;
        *(LARGE_INTEGER *)(v15 + 8) = PerformanceCounter;
        if ( !v18
          && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
          && (qword_1C02C4050 & 0x200000010000000LL) != 0
          && (qword_1C02C4058 & 0x200000010000000LL) == qword_1C02C4058
          && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
        {
          LODWORD(v35) = 1000000 * v17 / gliQpcFreq.QuadPart;
          McTemplateK0xqx_EtwWriteTransfer(
            gullUserCritAcquireToken,
            &AcquiredExclusiveUserCritEvent,
            v13,
            v17,
            v35,
            gullUserCritAcquireToken);
        }
        if ( v17 >= *(__int64 *)&WPP_MAIN_CB.SectorSize
          && (signed __int64)(PerformanceCounter.QuadPart
                            - (unsigned __int64)WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink) >= W32KEtwUserCritTelemetryThrottleQPC )
        {
          if ( (Microsoft_Windows_Win32kEnableBits & 0x1000000000LL) != 0 )
          {
            LODWORD(v35) = 1000 * v17 / gliQpcFreq.QuadPart;
            McTemplateK0xqx_EtwWriteTransfer(
              gullUserCritAcquireToken,
              &AcquiredExclusiveUserCritTelemetryEvent,
              v13,
              v17,
              v35,
              gullUserCritAcquireToken);
          }
          WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink = (struct _LIST_ENTRY *)PerformanceCounter.QuadPart;
        }
        *(_QWORD *)(v15 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
      }
    }
    v19 = *v10;
    gptiCurrent = v19;
    if ( v19 )
    {
      *((_DWORD *)v19 + 387) = 1;
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v12);
      if ( CurrentProcessWin32Process )
      {
        if ( *(_QWORD *)CurrentProcessWin32Process )
        {
          if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
          {
            v12 = gptiCurrent;
            if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0 && (*((_DWORD *)gptiCurrent + 318) & 0x80u) == 0 )
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
                  MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4237);
                HMUnlockObject(*v22);
              }
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
  CurrentProcess = PsGetCurrentProcess(v12, v11, v13, v14);
  if ( CurrentProcess && CurrentProcess == *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels )
  {
LABEL_53:
    v25 = CInputConfig::BindMouse(v24, a1);
    if ( v25 >= 0 )
    {
      v4 = 1LL;
      goto LABEL_55;
    }
    goto LABEL_47;
  }
  v25 = CheckCapability(L"shellExperienceComposer");
  if ( v25 >= 0 )
  {
    v32 = PsGetCurrentProcessWin32Process(v26);
    if ( v32 )
    {
      v24 = (CInputConfig *)-*(_QWORD *)v32;
      v32 &= -(__int64)(*(_QWORD *)v32 != 0LL);
    }
    if ( (*(_DWORD *)(v32 + 812) & 0x30) == 0 )
    {
      v27 = 5;
      goto LABEL_48;
    }
    goto LABEL_53;
  }
LABEL_47:
  v27 = RtlNtStatusToDosError(v25);
LABEL_48:
  UserSetLastError(v27);
LABEL_55:
  UserSessionSwitchLeaveCrit(v29, v28, v30, v31);
  return v4;
}
