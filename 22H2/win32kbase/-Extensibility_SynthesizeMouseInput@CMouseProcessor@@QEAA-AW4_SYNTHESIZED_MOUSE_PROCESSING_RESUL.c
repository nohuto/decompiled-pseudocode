/*
 * XREFs of ?Extensibility_SynthesizeMouseInput@CMouseProcessor@@QEAA?AW4_SYNTHESIZED_MOUSE_PROCESSING_RESULT@@PEAU_ExtensibilityMouseInputData@@W4_MOUSEPROCESSOR_PROCESSING_OPTIONS@@PEAU_SYNTHESIZE_MOUSE_EXTRA_PAYLOAD@@@Z @ 0x1C01BF960
 * Callers:
 *     NtMITSynthesizeMouseInput @ 0x1C012C170 (NtMITSynthesizeMouseInput.c)
 * Callees:
 *     HMUnlockObject @ 0x1C002EA10 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0030200 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0031470 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0031520 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0037600 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C003B070 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     ?SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAU_MOUSE_INPUT_DATA@@PEAU_PTPMouseLatencyTracker@@@Z @ 0x1C0042CA4 (-SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAU_MOUSE_INPUT_DATA@@PEAU_PTPMou.c)
 *     ?_CalledOnInputThread@CInputThread@@AEBA_NXZ @ 0x1C0043670 (-_CalledOnInputThread@CInputThread@@AEBA_NXZ.c)
 *     _tlgKeywordOn @ 0x1C004BCA0 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00902C8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ??0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@UEventTime@1@W4MouseInputDataProcessingOptions@@U_InputDeviceHandle@@PEBU_SYNTHESIZE_MOUSE_EXTRA_PAYLOAD@@@Z @ 0x1C0090D40 (--0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@UEventTime@1@W4MouseInputDataPr.c)
 *     ?TestCommitMouseAndCursorPositionResult@MouseInputDataEx@CMouseProcessor@@QEBA_NW4_CommitMousePosAndMoveResult@@@Z @ 0x1C009D844 (-TestCommitMouseAndCursorPositionResult@MouseInputDataEx@CMouseProcessor@@QEBA_NW4_CommitMousePo.c)
 *     UpconvertTime @ 0x1C00A7750 (UpconvertTime.c)
 *     __security_check_cookie @ 0x1C00C5400 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall CMouseProcessor::Extensibility_SynthesizeMouseInput(
        CMouseProcessor *a1,
        __int64 a2,
        char a3,
        _QWORD *a4)
{
  CInputThread *v4; // rdi
  bool v9; // bl
  int v10; // ecx
  int v11; // edx
  __int16 v12; // ax
  __int16 v13; // ax
  __int16 v14; // cx
  bool v15; // zf
  __int16 v16; // ax
  int v17; // ecx
  int v18; // edx
  int v19; // ecx
  int v20; // edx
  unsigned int v21; // edi
  unsigned int v22; // ecx
  __int64 v23; // rbx
  __int64 v24; // rcx
  __int64 v25; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v27; // rax
  struct tagTHREADINFO *v28; // rbx
  struct tagTHREADINFO **v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  PVOID CurrentProcess; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  unsigned int v35; // r8d
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v42; // rbx
  __int64 v43; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  PVOID *DomainLockRef; // rbx
  __int64 *v47; // rsi
  __int64 v48; // rax
  PVOID *v49; // rdi
  __int64 result; // rax
  int v51; // [rsp+38h] [rbp-D0h] BYREF
  int v52; // [rsp+3Ch] [rbp-CCh] BYREF
  PVOID *v53; // [rsp+40h] [rbp-C8h] BYREF
  __int128 v54; // [rsp+48h] [rbp-C0h]
  __int64 v55; // [rsp+58h] [rbp-B0h]
  __int128 v56; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD v57[5]; // [rsp+70h] [rbp-98h] BYREF
  __int128 v58; // [rsp+98h] [rbp-70h] BYREF
  __int64 v59; // [rsp+A8h] [rbp-60h]
  __int64 v60; // [rsp+B8h] [rbp-50h]
  unsigned __int8 v61; // [rsp+C0h] [rbp-48h]
  GUID ActivityId; // [rsp+C4h] [rbp-44h] BYREF
  struct tagPOINT v63; // [rsp+D8h] [rbp-30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v64; // [rsp+138h] [rbp+30h] BYREF
  int *v65; // [rsp+158h] [rbp+50h]
  __int64 v66; // [rsp+160h] [rbp+58h]
  struct _EVENT_DATA_DESCRIPTOR v67; // [rsp+168h] [rbp+60h] BYREF
  int *v68; // [rsp+188h] [rbp+80h]
  __int64 v69; // [rsp+190h] [rbp+88h]
  struct _EVENT_DATA_DESCRIPTOR v70; // [rsp+198h] [rbp+90h] BYREF
  PVOID **v71; // [rsp+1B8h] [rbp+B0h]
  __int64 v72; // [rsp+1C0h] [rbp+B8h]

  v4 = gpInputThread;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v4, 0LL);
  v9 = CInputThread::_CalledOnInputThread(v4);
  ExReleasePushLockSharedEx(v4, 0LL);
  KeLeaveCriticalRegion();
  if ( !v9 )
  {
    v51 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 1850);
  }
  if ( (dword_1C02586B4 & 1) == 0 )
    dword_1C02586B4 |= 1u;
  v10 = *(_DWORD *)(a2 + 32);
  v57[0] = 0LL;
  v11 = 256;
  v56 = 0LL;
  if ( v10 || *(_DWORD *)(a2 + 36) )
  {
    v12 = *(_WORD *)(a2 + 24) & 3;
    HIDWORD(v56) = v10;
    WORD1(v56) = v12;
    LODWORD(v57[0]) = *(_DWORD *)(a2 + 36);
    if ( (a3 & 4) != 0 )
      v11 = 258;
  }
  else
  {
    v11 = 264;
  }
  v13 = *(_WORD *)(a2 + 26) & 0xFFF;
  v14 = *(_WORD *)(a2 + 28);
  WORD2(v56) = v13;
  if ( v14 )
  {
    v15 = (v13 & 0xC00) == 0;
    v16 = WORD3(v56);
    if ( !v15 )
      v16 = v14;
    WORD3(v56) = v16;
  }
  v17 = v11 | 0x800;
  if ( (a3 & 2) == 0 )
    v17 = v11;
  v18 = v17 | 0x200;
  if ( (a3 & 8) != 0 )
    v18 = v17;
  v19 = v18 | 0x400;
  if ( (a3 & 1) == 0 )
    v19 = v18;
  v20 = v19 | 0x2000;
  if ( (a3 & 0x20) == 0 )
    v20 = v19;
  v21 = v20 | 0x10000;
  if ( (a3 & 0x80) == 0 )
    v21 = v20;
  if ( (a3 & 0x10) != 0 )
    v21 = v21 & 0xFFFFFFF3 | 4;
  v22 = *(_DWORD *)(a2 + 8);
  v23 = *(_QWORD *)(a2 + 16);
  *((_QWORD *)&v54 + 1) = *(_QWORD *)a2;
  *(_QWORD *)&v54 = 1LL;
  *(_OWORD *)&v57[1] = v54;
  v57[3] = 0LL;
  *(_QWORD *)&v54 = UpconvertTime(v22);
  *((_QWORD *)&v54 + 1) = v23;
  v55 = v23;
  v58 = v54;
  v59 = v23;
  CMouseProcessor::MouseInputDataEx::MouseInputDataEx(
    (__int64)&v63,
    (__int64)&v56,
    &v58,
    v21 | 0x40,
    (__int64)&v57[1],
    a4);
  if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
  UserSessionSwitchLeaveCrit();
  CMouseProcessor::SynthesizeMouse(a1, (struct tagPOINT)&v63, 0LL, 0LL);
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v24);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v61 = 1;
    v27 = PsGetCurrentThreadWin32Thread(v25);
    v60 = v27;
    if ( v27 && (*(int *)(v27 + 24) > 0 || *(_DWORD *)(v60 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C024AA90 > 6 && tlgKeywordOn((__int64)&dword_1C024AA90, 0x2000LL) )
      {
        v52 = v61;
        v66 = 4LL;
        v65 = &v52;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C024AA90,
          (unsigned __int8 *)dword_1C0217FD7,
          &ActivityId,
          0LL,
          3u,
          &v64);
      }
    }
  }
  else
  {
    v60 = 0LL;
  }
  v28 = 0LL;
  while ( 1 )
  {
    v29 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
    if ( v29 )
      v28 = *v29;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v31, v30);
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( (PVOID)PsGetCurrentProcess(v34, v33) == gpepCSRSS && v28 != (struct tagTHREADINFO *)gptiTSRequest
      || gbDITInHitTest != 1
      || v28 == gptiRit )
    {
      break;
    }
    ++gcDITHitTestWaiters;
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
  }
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v60 && (*(_DWORD *)(v60 + 48) || *(int *)(v60 + 24) > 0) )
  {
    *(_DWORD *)(v60 + 44) = 1;
    *(GUID *)(v60 + 28) = ActivityId;
    if ( (unsigned int)dword_1C024AA90 > 6 )
    {
      if ( tlgKeywordOn((__int64)&dword_1C024AA90, 0x2000LL) )
      {
        v51 = v61;
        v69 = 4LL;
        v68 = &v51;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C024AA90,
          (unsigned __int8 *)dword_1C0217F80,
          &ActivityId,
          0LL,
          3u,
          &v67);
        v35 = dword_1C024AA90;
      }
      if ( v35 > 6 && tlgKeywordOn((__int64)&dword_1C024AA90, 0x2000LL) )
      {
        LODWORD(v53) = v61;
        v72 = 4LL;
        v71 = &v53;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C024AA90,
          (unsigned __int8 *)dword_1C0217FAD,
          &ActivityId,
          0LL,
          3u,
          &v70);
      }
    }
  }
  EtwTraceAcquiredExclusiveUserCrit();
  gptiCurrent = v28;
  gbValidateHandleForIL = 1;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (v38 = PsGetCurrentProcess(v37, v36),
        ProcessSessionId = PsGetProcessSessionIdEx(v38),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    CurrentThread = KeGetCurrentThread();
    v42 = 0LL;
    if ( !IsThreadCrossSessionAttached() )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v42 = *ThreadWin32Thread;
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v43);
    if ( v42
      && CurrentProcessWin32Process
      && (*(_DWORD *)(v42 + 488) & 0x1000000) != 0
      && (*(_DWORD *)(v42 + 1232) & 0x80u) == 0
      && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
    {
      DomainLockRef = (PVOID *)GetDomainLockRef(12);
      v53 = DomainLockRef;
      if ( DomainLockRef == gDomainDummyLock )
      {
        v51 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 408);
      }
      if ( ExIsResourceAcquiredExclusiveLite((PERESOURCE)*DomainLockRef) == 1 )
      {
        v51 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 1293);
      }
      ExEnterCriticalRegionAndAcquireResourceExclusive((PERESOURCE)*DomainLockRef);
      v47 = (__int64 *)gpducstulHead;
      if ( gpducstulHead )
      {
        do
        {
          gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v47[2];
          v48 = *v47;
          v47[2] = 0LL;
          if ( !*(_DWORD *)(v48 + 8) )
          {
            v51 = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 4307);
          }
          v49 = (PVOID *)GetDomainLockRef(12);
          if ( v49 == gDomainDummyLock )
          {
            v52 = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 490);
          }
          ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)*v49);
          HMUnlockObject(*v47);
          tagDomLock::LockExclusive((PERESOURCE *)v49);
          v47 = (__int64 *)gpducstulHead;
        }
        while ( gpducstulHead );
        DomainLockRef = v53;
      }
      ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)*DomainLockRef);
    }
  }
  if ( CMouseProcessor::MouseInputDataEx::TestCommitMouseAndCursorPositionResult((__int64)&v63, 4) )
    return 2LL;
  v15 = !CMouseProcessor::MouseInputDataEx::TestCommitMouseAndCursorPositionResult((__int64)&v63, 2);
  result = 1LL;
  if ( !v15 )
    return 2LL;
  return result;
}
