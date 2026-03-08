/*
 * XREFs of ?Extensibility_SynthesizeMouseInput@CMouseProcessor@@QEAA?AW4_SYNTHESIZED_MOUSE_PROCESSING_RESULT@@PEAU_ExtensibilityMouseInputData@@W4_MOUSEPROCESSOR_PROCESSING_OPTIONS@@PEAU_SYNTHESIZE_MOUSE_EXTRA_PAYLOAD@@@Z @ 0x1C022C888
 * Callers:
 *     NtMITSynthesizeMouseInput @ 0x1C016BFB0 (NtMITSynthesizeMouseInput.c)
 * Callees:
 *     IsThreadCrossSessionAttached @ 0x1C004B600 (IsThreadCrossSessionAttached.c)
 *     IsEtwUserCritEnabled @ 0x1C004DF60 (IsEtwUserCritEnabled.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004E000 (UserSessionSwitchLeaveCrit.c)
 *     ?UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z @ 0x1C004E1A8 (-UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z.c)
 *     ?SendUserCritSummary@UserCritTelemetry@@QEAAXXZ @ 0x1C004E418 (-SendUserCritSummary@UserCritTelemetry@@QEAAXXZ.c)
 *     _tlgKeywordOn @ 0x1C004E7C0 (_tlgKeywordOn.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C004F99C (EtwTraceAcquiredExclusiveUserCrit.c)
 *     HMUnlockObject @ 0x1C0072980 (HMUnlockObject.c)
 *     ??0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@UEventTime@1@W4MouseInputDataProcessingOptions@@U_InputDeviceHandle@@PEBU_SYNTHESIZE_MOUSE_EXTRA_PAYLOAD@@@Z @ 0x1C007A458 (--0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@UEventTime@1@W4MouseInputDataPr.c)
 *     ?SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAUPTPMouseInputData@@@Z @ 0x1C007A4DC (-SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAUPTPMouseInputData@@@Z.c)
 *     ?IsInputThread@CInputThreadBase@@QEBA_NXZ @ 0x1C007CCB8 (-IsInputThread@CInputThreadBase@@QEBA_NXZ.c)
 *     UpconvertTime @ 0x1C00CF4A0 (UpconvertTime.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x1C00E1980 (memset.c)
 *     McTemplateK0xqx_EtwWriteTransfer @ 0x1C0167CA4 (McTemplateK0xqx_EtwWriteTransfer.c)
 *     ?TestCommitMouseAndCursorPositionResult@MouseInputDataEx@CMouseProcessor@@QEBA_NW4_CommitMousePosAndMoveResult@@@Z @ 0x1C02316E0 (-TestCommitMouseAndCursorPositionResult@MouseInputDataEx@CMouseProcessor@@QEBA_NW4_CommitMousePo.c)
 */

__int64 __fastcall CMouseProcessor::Extensibility_SynthesizeMouseInput(
        CMouseProcessor *a1,
        __int64 a2,
        char a3,
        _QWORD *a4)
{
  int v8; // ecx
  int v9; // edx
  __int16 v10; // ax
  __int16 v11; // cx
  __int16 v12; // ax
  bool v13; // zf
  __int16 v14; // ax
  int v15; // ecx
  int v16; // edx
  int v17; // ecx
  int v18; // edx
  unsigned int v19; // edi
  unsigned int v20; // ecx
  __int64 v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rcx
  __int64 v27; // r8
  PVOID Reserved; // rdx
  unsigned __int64 v29; // r9
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v31; // rax
  struct tagTHREADINFO **v32; // r14
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rdi
  LARGE_INTEGER PerformanceCounter; // rsi
  __int64 v39; // rbx
  __int64 v40; // r8
  struct tagTHREADINFO *v41; // rbx
  __int64 v42; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v44; // rax
  __int64 *v45; // rbx
  __int64 v47; // [rsp+28h] [rbp-E0h]
  __int64 v48; // [rsp+28h] [rbp-E0h]
  __int128 v49; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v50; // [rsp+50h] [rbp-B8h]
  __int128 v51; // [rsp+58h] [rbp-B0h]
  __int64 v52; // [rsp+68h] [rbp-A0h]
  __int128 v53; // [rsp+70h] [rbp-98h]
  __int64 v54; // [rsp+80h] [rbp-88h]
  __int128 v55; // [rsp+88h] [rbp-80h] BYREF
  __int64 v56; // [rsp+98h] [rbp-70h]
  __int128 v57; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v58; // [rsp+B8h] [rbp-50h]
  _BYTE v59[96]; // [rsp+C8h] [rbp-40h] BYREF

  if ( !CInputThreadBase::IsInputThread((CInputThreadBase *)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1945);
  v8 = *(_DWORD *)(a2 + 32);
  v50 = 0LL;
  v9 = 256;
  v49 = 0LL;
  if ( v8 || *(_DWORD *)(a2 + 36) )
  {
    v10 = *(_WORD *)(a2 + 24) & 3;
    HIDWORD(v49) = v8;
    WORD1(v49) = v10;
    LODWORD(v50) = *(_DWORD *)(a2 + 36);
    if ( (a3 & 4) != 0 )
      v9 = 258;
  }
  else
  {
    v9 = 264;
  }
  v11 = *(_WORD *)(a2 + 28);
  v12 = *(_WORD *)(a2 + 26) & 0xFFF;
  WORD2(v49) = v12;
  if ( v11 )
  {
    v13 = (v12 & 0xC00) == 0;
    v14 = WORD3(v49);
    if ( !v13 )
      v14 = v11;
    WORD3(v49) = v14;
  }
  v15 = v9 | 0x800;
  if ( (a3 & 2) == 0 )
    v15 = v9;
  v16 = v15 | 0x200;
  if ( (a3 & 8) != 0 )
    v16 = v15;
  v17 = v16 | 0x400;
  if ( (a3 & 1) == 0 )
    v17 = v16;
  v18 = v17 | 0x2000;
  if ( (a3 & 0x20) == 0 )
    v18 = v17;
  v19 = v18 | 0x10000;
  if ( a3 >= 0 )
    v19 = v18;
  if ( (a3 & 0x10) != 0 )
    v19 = v19 & 0xFFFFFFF3 | 4;
  v20 = *(_DWORD *)(a2 + 8);
  v21 = *(_QWORD *)(a2 + 16);
  *((_QWORD *)&v51 + 1) = *(_QWORD *)a2;
  *(_QWORD *)&v51 = 1LL;
  v52 = 0LL;
  *(_QWORD *)&v53 = UpconvertTime(v20);
  v55 = v51;
  v56 = 0LL;
  *((_QWORD *)&v53 + 1) = v21;
  v54 = v21;
  v57 = v53;
  v58 = v21;
  CMouseProcessor::MouseInputDataEx::MouseInputDataEx((__int64)v59, (__int64)&v49, &v57, v19 | 0x40, (__int64)&v55, a4);
  UserSessionSwitchLeaveCrit(v23, v22, v24, v25);
  CMouseProcessor::SynthesizeMouse(a1, (struct CMouseProcessor::MouseInputDataEx *)v59, 0LL);
  v27 = 0x200000010000000LL;
  if ( dword_1C02C93D8 && tlgKeywordOn((__int64)&dword_1C02C93D8, 0x400000000000LL)
    || (Reserved = WPP_MAIN_CB.Reserved,
        v29 = 0x8000002010000000uLL,
        ((unsigned __int64)WPP_MAIN_CB.Reserved & 0x8000002010000000uLL) != 0)
    && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
    && (qword_1C02C4050 & 0x8000002010000000uLL) != 0
    && (qword_1C02C4058 & 0x8000002010000000uLL) == qword_1C02C4058
    || ((__int64)WPP_MAIN_CB.Reserved & v27) != 0
    && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
    && (v27 & qword_1C02C4050) != 0
    && (v27 & qword_1C02C4058) == qword_1C02C4058 )
  {
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v26, Reserved, v27, v29, v47);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  }
  v31 = SGDGetUserSessionState(v26, Reserved, v27, v29);
  v32 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(*(PERESOURCE *)(v31 + 8));
  if ( !v32 )
  {
    EtwTraceAcquiredExclusiveUserCrit();
LABEL_38:
    gptiCurrent = 0LL;
    goto LABEL_69;
  }
  if ( IsEtwUserCritEnabled() )
  {
    v37 = PsGetCurrentThreadWin32Thread(v34, v33, v35, v36, v47);
    if ( v37 )
    {
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      v39 = PerformanceCounter.QuadPart - *(_QWORD *)(v37 + 8);
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
      UserCritTelemetry::UpdateUserCritInfo((__int64)stru_1C02D1910, v39, 0);
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
      *(LARGE_INTEGER *)(v37 + 8) = PerformanceCounter;
      if ( ((__int64)WPP_MAIN_CB.Reserved & 0x200000010000000LL) != 0
        && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
        && (qword_1C02C4050 & 0x200000010000000LL) != 0
        && (qword_1C02C4058 & 0x200000010000000LL) == qword_1C02C4058
        && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
      {
        LODWORD(v48) = 1000000 * v39 / gliQpcFreq.QuadPart;
        McTemplateK0xqx_EtwWriteTransfer(
          gullUserCritAcquireToken,
          &AcquiredExclusiveUserCritEvent,
          v40,
          v39,
          v48,
          gullUserCritAcquireToken);
      }
      if ( v39 >= *(__int64 *)&WPP_MAIN_CB.SectorSize
        && (signed __int64)(PerformanceCounter.QuadPart
                          - (unsigned __int64)WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink) >= W32KEtwUserCritTelemetryThrottleQPC )
      {
        if ( (Microsoft_Windows_Win32kEnableBits & 0x1000000000LL) != 0 )
        {
          LODWORD(v48) = 1000 * v39 / gliQpcFreq.QuadPart;
          McTemplateK0xqx_EtwWriteTransfer(
            gullUserCritAcquireToken,
            &AcquiredExclusiveUserCritTelemetryEvent,
            v40,
            v39,
            v48,
            gullUserCritAcquireToken);
        }
        WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink = (struct _LIST_ENTRY *)PerformanceCounter.QuadPart;
      }
      *(_QWORD *)(v37 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
    }
  }
  v41 = *v32;
  if ( IsThreadCrossSessionAttached() )
    goto LABEL_38;
  gptiCurrent = v41;
  if ( v41 )
  {
    *((_DWORD *)v41 + 387) = 1;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v42);
    if ( CurrentProcessWin32Process )
    {
      if ( *(_QWORD *)CurrentProcessWin32Process
        && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0
        && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
        && (*((_DWORD *)gptiCurrent + 318) & 0x80u) == 0 )
      {
        while ( 1 )
        {
          v45 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
          if ( !gpSharedUserCritDeferredUnlockListHead )
            break;
          gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                       + 2);
          v44 = *v45;
          v45[2] = 0LL;
          if ( !*(_DWORD *)(v44 + 8) )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4237);
          HMUnlockObject(*v45);
        }
      }
    }
  }
LABEL_69:
  if ( (unsigned __int8)CMouseProcessor::MouseInputDataEx::TestCommitMouseAndCursorPositionResult(v59, 4LL) )
    return 2LL;
  else
    return (unsigned int)((unsigned __int8)CMouseProcessor::MouseInputDataEx::TestCommitMouseAndCursorPositionResult(
                                             v59,
                                             2LL) != 0)
         + 1;
}
