/*
 * XREFs of ?ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ @ 0x18006E0E0
 * Callers:
 *     <none>
 * Callees:
 *     ?TimeoutOverdueScenarios@CTelemetryTouchLatencyAnalysis@@QEAAX_K@Z @ 0x18001A460 (-TimeoutOverdueScenarios@CTelemetryTouchLatencyAnalysis@@QEAAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UpdateFrameIndices@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x18006CC28 (-UpdateFrameIndices@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?FindFirstOutstandingFrameIndex@CPartitionVerticalBlankScheduler@@AEAAIXZ @ 0x18006DB98 (-FindFirstOutstandingFrameIndex@CPartitionVerticalBlankScheduler@@AEAAIXZ.c)
 *     ?UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ @ 0x18006DC30 (-UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ.c)
 *     ?TelemetryFillFrameInfo@CPartitionVerticalBlankScheduler@@AEAAXPEAUTelFrameInfo@CAnimationTracking@@PEAVCFrameInfo@@@Z @ 0x18006F05C (-TelemetryFillFrameInfo@CPartitionVerticalBlankScheduler@@AEAAXPEAUTelFrameInfo@CAnimationTracki.c)
 *     ?WaitForNextFrameStart@CPartitionVerticalBlankScheduler@@AEAAJ_N@Z @ 0x18006FAB0 (-WaitForNextFrameStart@CPartitionVerticalBlankScheduler@@AEAAJ_N@Z.c)
 *     ?WaitForWork@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x18006FEAC (-WaitForWork@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAXXZ @ 0x180070200 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAXXZ.c)
 *     ?TryDebouncingParallelMode@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x180071D30 (-TryDebouncingParallelMode@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?FrameEnded@CTelemetryFrames@@SAX_N0_K@Z @ 0x180071D98 (-FrameEnded@CTelemetryFrames@@SAX_N0_K@Z.c)
 *     ?TimeoutOverdueScenarios@CAnimationTracking@@QEAAXAEBUTelFrameInfo@1@@Z @ 0x1800B0980 (-TimeoutOverdueScenarios@CAnimationTracking@@QEAAXAEBUTelFrameInfo@1@@Z.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x1800B284C (McGenEventWrite_EventWriteTransfer.c)
 *     ?ScheduleCompositionPass@CPartitionVerticalBlankScheduler@@UEAAXKW4CompositionReason@@@Z @ 0x1800C2E10 (-ScheduleCompositionPass@CPartitionVerticalBlankScheduler@@UEAAXKW4CompositionReason@@@Z.c)
 *     __security_check_cookie @ 0x1800E6B40 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E7F5C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0q_EventWriteTransfer @ 0x180152674 (McTemplateU0q_EventWriteTransfer.c)
 *     ?GetStackCaptureRootFailureAddress@@YAPEAXJ@Z @ 0x1802164B4 (-GetStackCaptureRootFailureAddress@@YAPEAXJ@Z.c)
 *     ?IsKernelDebuggerPresent@@YAHXZ @ 0x18021669C (-IsKernelDebuggerPresent@@YAHXZ.c)
 *     ?MilUnexpectedError@@YAXJPEBG@Z @ 0x180216710 (-MilUnexpectedError@@YAXJPEBG@Z.c)
 */

__int64 __fastcall CPartitionVerticalBlankScheduler::ScheduleAndProcessFrame(unsigned __int64 **this)
{
  unsigned __int64 *v2; // r13
  int FrameStart; // eax
  __int64 v4; // rcx
  int v5; // edi
  HANDLE CurrentThread; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  int updated; // eax
  __int64 v10; // rcx
  unsigned __int64 *v11; // rcx
  __int64 v12; // rcx
  char v13; // r15
  int v14; // eax
  __int64 v15; // rcx
  int v16; // esi
  __int64 v17; // r8
  unsigned __int64 *v18; // rcx
  signed __int32 v19; // eax
  __int64 v20; // rcx
  signed __int32 v21; // ett
  int v23; // eax
  int v24; // esi
  BOOL v25; // eax
  CHAR v26; // cl
  HANDLE v27; // rax
  HANDLE CurrentProcess; // rax
  CHAR Response[8]; // [rsp+68h] [rbp-A0h] BYREF
  LARGE_INTEGER DueTime; // [rsp+70h] [rbp-98h] BYREF
  struct _EXCEPTION_RECORD pExceptionRecord; // [rsp+78h] [rbp-90h] BYREF
  _BYTE v32[24]; // [rsp+118h] [rbp+10h] BYREF
  _BYTE v33[16]; // [rsp+130h] [rbp+28h] BYREF
  _BYTE v34[16]; // [rsp+140h] [rbp+38h] BYREF

  v2 = 0LL;
  CPartitionVerticalBlankScheduler::WaitForWork((CPartitionVerticalBlankScheduler *)this);
  FrameStart = CPartitionVerticalBlankScheduler::WaitForNextFrameStart((CPartitionVerticalBlankScheduler *)this, 0);
  v5 = FrameStart;
  if ( FrameStart < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, FrameStart, 0x207u, 0LL);
  }
  else
  {
    CurrentThread = GetCurrentThread();
    if ( QueryThreadCycleTime(CurrentThread, &CycleTime) )
    {
      qword_180347128 = CycleTime;
    }
    else
    {
      qword_180347128 = 0LL;
      CycleTime = 0LL;
    }
    v2 = this[629];
    updated = CPartitionVerticalBlankScheduler::UpdateTimes((CPartitionVerticalBlankScheduler *)this, v7, v8);
    v5 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, updated, 0x20Cu, 0LL);
    }
    else
    {
      CPartitionVerticalBlankScheduler::TryDebouncingParallelMode((CPartitionVerticalBlankScheduler *)this);
      CPartitionVerticalBlankScheduler::ProcessFrame((CPartitionVerticalBlankScheduler *)this);
      v11 = this[629];
      if ( *((_BYTE *)v11 + 137) || *((_BYTE *)v11 + 139) )
        CPartitionVerticalBlankScheduler::UpdateFrameIndices((CPartitionVerticalBlankScheduler *)this);
      else
        *((_DWORD *)v11 + 65) = *((_DWORD *)v11 + 11);
    }
  }
  v12 = *((_QWORD *)g_pComposition + 11);
  if ( !*(_BYTE *)(v12 + 132) || *(_BYTE *)(v12 + 133) )
  {
    v13 = 0;
  }
  else
  {
    dword_1803472A0 |= 0x200u;
    v13 = 1;
  }
  if ( *((_DWORD *)this + 1350) )
  {
    CPartitionVerticalBlankScheduler::TelemetryFillFrameInfo(
      (CPartitionVerticalBlankScheduler *)this,
      (struct CAnimationTracking::TelFrameInfo *)v32,
      0LL);
    CAnimationTracking::TimeoutOverdueScenarios(
      (CAnimationTracking *)(this + 672),
      (const struct CAnimationTracking::TelFrameInfo *)v32);
  }
  if ( *((_DWORD *)this + 1488) )
    CTelemetryTouchLatencyAnalysis::TimeoutOverdueScenarios((CTelemetryTouchLatencyAnalysis *)(this + 744), *this[629]);
  v14 = (*(__int64 (__fastcall **)(unsigned __int64 *, __int64))(*this[18] + 24))(this[18], 4LL);
  v16 = v14;
  if ( v14 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x23Cu, 0LL);
  if ( !v5 || v5 >= 0 && v16 < 0 )
    v5 = v16;
  if ( !v13 && (*((_DWORD *)this + 1350) || *((_DWORD *)this + 1488)) )
    CPartitionVerticalBlankScheduler::ScheduleCompositionPass(this, 1000LL, 0x40000LL);
  if ( (unsigned int)CPartitionVerticalBlankScheduler::FindFirstOutstandingFrameIndex((CPartitionVerticalBlankScheduler *)this) == -1 )
    goto LABEL_28;
  if ( !*((_DWORD *)this + 2799) )
    goto LABEL_24;
  v18 = this[3];
  DueTime.QuadPart = 0LL;
  if ( SetWaitableTimerEx(v18, &DueTime, 0, 0LL, 0LL, 0LL, 0) )
    goto LABEL_23;
  while ( 1 )
  {
    while ( 1 )
    {
      v23 = IsKernelDebuggerPresent();
      strcpy(Response, "?");
      v24 = v23;
      if ( !v23 )
      {
        v25 = IsDebuggerPresent();
        v26 = Response[0];
        if ( v25 )
          v26 = 103;
        Response[0] = v26;
      }
      DbgPrintEx(
        0x65u,
        0,
        "\n*** Assertion failed: %ls%ls%ls\n***   %s%ls%sSource: `%ls:%ld`\n\n",
        word_1802CE8C0,
        word_1802CE8C0,
        L"false",
        "Function: ",
        L"CPartitionVerticalBlankScheduler::ScheduleCompositionPass",
        ", ",
        L"onecoreuap\\windows\\dwm\\dwmcore\\engine\\partitionverticalblankscheduler.cpp",
        1974);
      if ( v24 )
      {
        DbgPrompt("Break, Go (continue), terminate Process, or terminate Thread (bgpt)? ", Response, 2u);
      }
      else
      {
        DbgPrintEx(
          0x65u,
          0,
          "(No kernel debugger is present.) Respond with:\n"
          "  g                    -- Go (continue)\n"
          "  eb 0x%p 'p';g  -- terminate Process\n"
          "  eb 0x%p 't';g  -- terminate Thread\n"
          " or regular debugging.\n",
          Response,
          Response);
        __debugbreak();
      }
      if ( Response[0] <= 98 )
        break;
      if ( Response[0] == 103 )
        goto LABEL_73;
      if ( Response[0] == 105 )
        goto LABEL_71;
      if ( Response[0] != 112 )
      {
        if ( Response[0] != 116 )
          goto LABEL_70;
        goto LABEL_68;
      }
LABEL_69:
      CurrentProcess = GetCurrentProcess();
      TerminateProcess(CurrentProcess, 0xC0000001);
LABEL_70:
      DbgPrintEx(0x65u, 0, "Unrecognized response.\n");
    }
    if ( Response[0] == 98 || Response[0] == 66 )
      break;
    if ( Response[0] == 71 )
      goto LABEL_73;
    if ( Response[0] != 73 )
    {
      if ( Response[0] != 80 )
      {
        if ( Response[0] != 84 )
          goto LABEL_70;
LABEL_68:
        v27 = GetCurrentThread();
        TerminateThread(v27, 0xC0000001);
        goto LABEL_70;
      }
      goto LABEL_69;
    }
LABEL_71:
    DbgPrintEx(0x65u, 0, "'i' is only supported with debug builds.\n");
  }
  __debugbreak();
LABEL_73:
  RaiseFailFastException(0LL, 0LL, 0);
LABEL_23:
  *((_DWORD *)this + 2799) = 0;
LABEL_24:
  _m_prefetchw(&dword_180347620);
  v19 = dword_180347620;
  do
  {
    v20 = v19 | 1u;
    v21 = v19;
    v19 = _InterlockedCompareExchange(&dword_180347620, v20, v19);
  }
  while ( v21 != v19 );
  if ( (((unsigned __int8)Microsoft_Windows_Dwm_CoreEnableBits >> 1) & ((v19 & 1) == 0)) != 0 )
  {
    LOBYTE(v20) = ((unsigned __int8)Microsoft_Windows_Dwm_CoreEnableBits >> 1) & ((v19 & 1) == 0);
    McTemplateU0q_EventWriteTransfer(v20, &EVTDESC_SCHEDULED_COMPOSITION_REASON, 1LL);
  }
LABEL_28:
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_SCHEDULE_VBLANK_LOOP_Stop,
      v17,
      1LL,
      v33);
  if ( v2 )
    CTelemetryFrames::FrameEnded(*((_BYTE *)v2 + 137), *((_BYTE *)v2 + 256), v2[10]);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_SCHEDULE_VBLANK_LOOP_Start,
      v17,
      1LL,
      v34);
  if ( v5 < 0 )
  {
    memset_0(&pExceptionRecord, 0, sizeof(pExceptionRecord));
    MilUnexpectedError(v5, L"The render thread failed unexpectedly.");
    pExceptionRecord.ExceptionCode = v5;
    pExceptionRecord.ExceptionAddress = GetStackCaptureRootFailureAddress(v5);
    RaiseFailFastException(&pExceptionRecord, 0LL, 0);
  }
  return (unsigned int)v5;
}
