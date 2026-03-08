/*
 * XREFs of ?ivHandleKeyboardAsyncKeyStatePacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C021E280
 * Callers:
 *     <none>
 * Callees:
 *     IsThreadCrossSessionAttached @ 0x1C004B600 (IsThreadCrossSessionAttached.c)
 *     IsEtwUserCritEnabled @ 0x1C004DF60 (IsEtwUserCritEnabled.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004E000 (UserSessionSwitchLeaveCrit.c)
 *     ?UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z @ 0x1C004E1A8 (-UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z.c)
 *     ?SendUserCritSummary@UserCritTelemetry@@QEAAXXZ @ 0x1C004E418 (-SendUserCritSummary@UserCritTelemetry@@QEAAXXZ.c)
 *     _tlgKeywordOn @ 0x1C004E7C0 (_tlgKeywordOn.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C004F99C (EtwTraceAcquiredExclusiveUserCrit.c)
 *     HMUnlockObject @ 0x1C0072980 (HMUnlockObject.c)
 *     ?HandleLeftRightVKs@CKeyboardProcessor@@SAEE@Z @ 0x1C0080360 (-HandleLeftRightVKs@CKeyboardProcessor@@SAEE@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x1C00E1980 (memset.c)
 *     WPP_RECORDER_AND_TRACE_SF_s @ 0x1C00EF582 (WPP_RECORDER_AND_TRACE_SF_s.c)
 *     McTemplateK0xqx_EtwWriteTransfer @ 0x1C0167CA4 (McTemplateK0xqx_EtwWriteTransfer.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x1C017A884 (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     ?ApplyKeyStateUpdate@@YAXE_N@Z @ 0x1C021D024 (-ApplyKeyStateUpdate@@YAXE_N@Z.c)
 */

__int64 __fastcall CBaseInput::ivHandleKeyboardAsyncKeyStatePacket(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  PVOID Reserved; // rdx
  unsigned __int64 v6; // r8
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v8; // rax
  struct tagTHREADINFO **v9; // r14
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rsi
  LARGE_INTEGER PerformanceCounter; // rbp
  __int64 v19; // rbx
  __int64 v20; // r8
  bool v21; // zf
  struct tagTHREADINFO *v22; // rbx
  __int64 v23; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v25; // rax
  __int64 *v26; // rbx
  PDEVICE_OBJECT v27; // rcx
  unsigned __int8 v28; // al
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rcx
  __int64 v34; // [rsp+20h] [rbp-58h]
  __int64 v35; // [rsp+20h] [rbp-58h]

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
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, Reserved, v6, a4, v34);
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
    v17 = PsGetCurrentThreadWin32Thread(v14, v13, v15, v16, v34);
    if ( v17 )
    {
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      v19 = PerformanceCounter.QuadPart - *(_QWORD *)(v17 + 8);
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
      UserCritTelemetry::UpdateUserCritInfo((__int64)stru_1C02D1910, v19, 0);
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
      v21 = ((__int64)WPP_MAIN_CB.Reserved & 0x200000010000000LL) == 0;
      *(LARGE_INTEGER *)(v17 + 8) = PerformanceCounter;
      if ( !v21
        && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
        && (qword_1C02C4050 & 0x200000010000000LL) != 0
        && (qword_1C02C4058 & 0x200000010000000LL) == qword_1C02C4058
        && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
      {
        LODWORD(v35) = 1000000 * v19 / gliQpcFreq.QuadPart;
        McTemplateK0xqx_EtwWriteTransfer(
          gullUserCritAcquireToken,
          &AcquiredExclusiveUserCritEvent,
          v20,
          v19,
          v35,
          gullUserCritAcquireToken);
      }
      if ( v19 >= *(__int64 *)&WPP_MAIN_CB.SectorSize
        && (signed __int64)(PerformanceCounter.QuadPart
                          - (unsigned __int64)WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink) >= W32KEtwUserCritTelemetryThrottleQPC )
      {
        if ( (Microsoft_Windows_Win32kEnableBits & 0x1000000000LL) != 0 )
        {
          LODWORD(v35) = 1000 * v19 / gliQpcFreq.QuadPart;
          McTemplateK0xqx_EtwWriteTransfer(
            gullUserCritAcquireToken,
            &AcquiredExclusiveUserCritTelemetryEvent,
            v20,
            v19,
            v35,
            gullUserCritAcquireToken);
        }
        WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink = (struct _LIST_ENTRY *)PerformanceCounter.QuadPart;
      }
      *(_QWORD *)(v17 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
    }
  }
  v22 = *v9;
  if ( IsThreadCrossSessionAttached() )
    goto LABEL_15;
  gptiCurrent = v22;
  if ( v22 )
  {
    *((_DWORD *)v22 + 387) = 1;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v23);
    if ( CurrentProcessWin32Process )
    {
      if ( *(_QWORD *)CurrentProcessWin32Process
        && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0
        && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
        && (*((_DWORD *)gptiCurrent + 318) & 0x80u) == 0 )
      {
        while ( 1 )
        {
          v26 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
          if ( !gpSharedUserCritDeferredUnlockListHead )
            break;
          gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                       + 2);
          v25 = *v26;
          v26[2] = 0LL;
          if ( !*(_DWORD *)(v25 + 8) )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4237);
          HMUnlockObject(*v26);
        }
      }
    }
  }
LABEL_46:
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xBu)
    || (LOBYTE(v10) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(v10) = 0;
  }
  if ( (_BYTE)v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_s(
      WPP_GLOBAL_Control->AttachedDevice,
      v10,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      WPP_MAIN_CB.Queue.ListEntry.Flink);
  v27 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xBu)
    || (LOBYTE(v10) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(v10) = 0;
  }
  LOBYTE(v11) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_Dd(
      WPP_GLOBAL_Control->AttachedDevice,
      v10,
      v11,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      12,
      45,
      (__int64)&WPP_6faef5775b8438fac85e142323c35be9_Traceguids,
      *(_WORD *)a2,
      *(_DWORD *)(a2 + 4));
  LOBYTE(v27) = *(_BYTE *)a2;
  LOBYTE(v10) = *(_DWORD *)(a2 + 4) != 0;
  ApplyKeyStateUpdate((__int64)v27, v10, v11, v12);
  v28 = CKeyboardProcessor::HandleLeftRightVKs(*(_BYTE *)a2);
  v32 = v28;
  if ( v28 != *(_WORD *)a2 )
  {
    LOBYTE(v32) = v28;
    LOBYTE(v29) = *(_DWORD *)(a2 + 4) != 0;
    ApplyKeyStateUpdate(v32, v29, v30, v31);
  }
  UserSessionSwitchLeaveCrit(v32, v29, v30, v31);
  return 1LL;
}
