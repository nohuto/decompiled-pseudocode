/*
 * XREFs of ?SetDropTarget@CompositionInputObject@@QEAAJAEBUCOMPOSITION_INPUT_QUEUE@@@Z @ 0x1C00AB2C4
 * Callers:
 *     NtCompositionSetDropTarget @ 0x1C00AB160 (NtCompositionSetDropTarget.c)
 * Callees:
 *     IsThreadCrossSessionAttached @ 0x1C004B600 (IsThreadCrossSessionAttached.c)
 *     IsEtwUserCritEnabled @ 0x1C004DF60 (IsEtwUserCritEnabled.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004E000 (UserSessionSwitchLeaveCrit.c)
 *     ?UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z @ 0x1C004E1A8 (-UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z.c)
 *     ?SendUserCritSummary@UserCritTelemetry@@QEAAXXZ @ 0x1C004E418 (-SendUserCritSummary@UserCritTelemetry@@QEAAXXZ.c)
 *     _tlgKeywordOn @ 0x1C004E7C0 (_tlgKeywordOn.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C004F99C (EtwTraceAcquiredExclusiveUserCrit.c)
 *     ?UnlockAndRelease@CInputSink@@QEBA_NXZ @ 0x1C006AE20 (-UnlockAndRelease@CInputSink@@QEBA_NXZ.c)
 *     HMUnlockObject @ 0x1C0072980 (HMUnlockObject.c)
 *     ?SetDropTarget@CInputSink@@QEAAJAEBUCOMPOSITION_INPUT_QUEUE@@@Z @ 0x1C00AB4C4 (-SetDropTarget@CInputSink@@QEAAJAEBUCOMPOSITION_INPUT_QUEUE@@@Z.c)
 *     ?LockForWrite@CompositionInputObject@@QEAAJPEAPEAVCInputSink@@@Z @ 0x1C00AB580 (-LockForWrite@CompositionInputObject@@QEAAJPEAPEAVCInputSink@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x1C00E1980 (memset.c)
 *     McTemplateK0xqx_EtwWriteTransfer @ 0x1C0167CA4 (McTemplateK0xqx_EtwWriteTransfer.c)
 */

__int64 __fastcall CompositionInputObject::SetDropTarget(PVOID Object, const struct COMPOSITION_INPUT_QUEUE *a2)
{
  __int64 v4; // r8
  PVOID Reserved; // rdx
  unsigned __int64 v6; // r9
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v8; // rax
  struct tagTHREADINFO **v9; // r14
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdi
  LARGE_INTEGER PerformanceCounter; // rsi
  __int64 v16; // rbx
  int v17; // r8d
  struct tagTHREADINFO *v18; // rbx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  int v22; // ebx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 CurrentProcessWin32Process; // rax
  __int64 v27; // rax
  __int64 *v28; // rbx
  __int64 v29; // [rsp+20h] [rbp-48h]
  CInputSink *v30; // [rsp+88h] [rbp+20h] BYREF

  v30 = 0LL;
  v4 = 0x200000010000000LL;
  if ( dword_1C02C93D8 && tlgKeywordOn((__int64)&dword_1C02C93D8, 0x400000000000LL)
    || (Reserved = WPP_MAIN_CB.Reserved,
        v6 = 0x8000002010000000uLL,
        ((unsigned __int64)WPP_MAIN_CB.Reserved & 0x8000002010000000uLL) != 0)
    && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
    && (qword_1C02C4050 & 0x8000002010000000uLL) != 0
    && (qword_1C02C4058 & 0x8000002010000000uLL) == qword_1C02C4058
    || ((__int64)WPP_MAIN_CB.Reserved & v4) != 0
    && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
    && (v4 & qword_1C02C4050) != 0
    && (v4 & qword_1C02C4058) == qword_1C02C4058 )
  {
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(Object, Reserved, v4, v6, v29);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  }
  v8 = SGDGetUserSessionState(Object, Reserved, v4, v6);
  v9 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(*(PERESOURCE *)(v8 + 8));
  if ( !v9 )
  {
    EtwTraceAcquiredExclusiveUserCrit();
LABEL_20:
    gptiCurrent = 0LL;
    goto LABEL_17;
  }
  if ( IsEtwUserCritEnabled() )
  {
    v14 = PsGetCurrentThreadWin32Thread(v11, v10, v12, v13, v29);
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
      *(LARGE_INTEGER *)(v14 + 8) = PerformanceCounter;
      if ( ((__int64)WPP_MAIN_CB.Reserved & 0x200000010000000LL) != 0
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
  v18 = *v9;
  if ( IsThreadCrossSessionAttached() )
    goto LABEL_20;
  gptiCurrent = v18;
  if ( v18 )
  {
    *((_DWORD *)v18 + 387) = 1;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v19);
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
          gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                       + 2);
          v27 = *v28;
          v28[2] = 0LL;
          if ( !*(_DWORD *)(v27 + 8) )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4237LL);
          HMUnlockObject(*v28);
        }
      }
    }
  }
LABEL_17:
  v22 = CompositionInputObject::LockForWrite(Object, &v30);
  if ( v22 >= 0 )
  {
    v22 = CInputSink::SetDropTarget(v30, a2);
    CInputSink::UnlockAndRelease(v30);
  }
  UserSessionSwitchLeaveCrit(v21, v20, v23, v24);
  return (unsigned int)v22;
}
