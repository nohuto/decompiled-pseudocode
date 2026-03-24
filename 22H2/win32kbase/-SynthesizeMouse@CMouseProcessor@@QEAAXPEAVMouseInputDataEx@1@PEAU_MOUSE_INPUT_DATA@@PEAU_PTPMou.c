/*
 * XREFs of ?SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAU_MOUSE_INPUT_DATA@@PEAU_PTPMouseLatencyTracker@@@Z @ 0x1C0042CA4
 * Callers:
 *     ?MoveMouseWindowManagement@CMouseProcessor@@QEAAXW4_GenerateMoveOptions@@@Z @ 0x1C0043F84 (-MoveMouseWindowManagement@CMouseProcessor@@QEAAXW4_GenerateMoveOptions@@@Z.c)
 *     SynthesizeMouseInput @ 0x1C00A0090 (SynthesizeMouseInput.c)
 *     SynthesizeMouseInputForPTP @ 0x1C01AF120 (SynthesizeMouseInputForPTP.c)
 *     SynthesizeMouseInputWithNextPreview @ 0x1C01AF280 (SynthesizeMouseInputWithNextPreview.c)
 *     ?AccessibilityMouseButtonAction@CMouseProcessor@@QEAAXW4MouseKeyButton@@W4MouseKeyButtonState@@@Z @ 0x1C01BE79C (-AccessibilityMouseButtonAction@CMouseProcessor@@QEAAXW4MouseKeyButton@@W4MouseKeyButtonState@@@.c)
 *     ?AccessibilityMouseMove@CMouseProcessor@@QEAAXJJ@Z @ 0x1C01BE910 (-AccessibilityMouseMove@CMouseProcessor@@QEAAXJJ@Z.c)
 *     ?AccessibilityReleaseMouseButton@CMouseProcessor@@QEAAXW4MouseKeyButton@@@Z @ 0x1C01BE9D0 (-AccessibilityReleaseMouseButton@CMouseProcessor@@QEAAXW4MouseKeyButton@@@Z.c)
 *     ?Extensibility_SynthesizeMouseInput@CMouseProcessor@@QEAA?AW4_SYNTHESIZED_MOUSE_PROCESSING_RESULT@@PEAU_ExtensibilityMouseInputData@@W4_MOUSEPROCESSOR_PROCESSING_OPTIONS@@PEAU_SYNTHESIZE_MOUSE_EXTRA_PAYLOAD@@@Z @ 0x1C01BF960 (-Extensibility_SynthesizeMouseInput@CMouseProcessor@@QEAA-AW4_SYNTHESIZED_MOUSE_PROCESSING_RESUL.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003E058 (WPP_RECORDER_SF_.c)
 *     ?ProcessMouseInputData@CMouseProcessor@@AEAA?AUtagPOINT@@PEAVMouseInputDataEx@1@U2@AEAU_MousePacketPerf@@PEBU_MOUSE_INPUT_DATA@@PEBUtagUIPI_INFO_INT@@@Z @ 0x1C0041A14 (-ProcessMouseInputData@CMouseProcessor@@AEAA-AUtagPOINT@@PEAVMouseInputDataEx@1@U2@AEAU_MousePac.c)
 *     ?TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@@@Z @ 0x1C00420AC (-TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@.c)
 *     RIMLockExclusive @ 0x1C0042360 (RIMLockExclusive.c)
 *     isChildPartition @ 0x1C00423A0 (isChildPartition.c)
 *     IsMouseIVEnabled @ 0x1C0042988 (IsMouseIVEnabled.c)
 *     ?CollectMousePerfTelemetry@MousePerfSummary@@QEAAXAEBU_MousePerf@@@Z @ 0x1C0042DE8 (-CollectMousePerfTelemetry@MousePerfSummary@@QEAAXAEBU_MousePerf@@@Z.c)
 *     ?ProcessInput@Mouse@InputTraceLogging@@SAXPEBURIMDEV@@PEBVMouseInputDataEx@CMouseProcessor@@_N@Z @ 0x1C0043140 (-ProcessInput@Mouse@InputTraceLogging@@SAXPEBURIMDEV@@PEBVMouseInputDataEx@CMouseProcessor@@_N@Z.c)
 *     __security_check_cookie @ 0x1C00C5400 (__security_check_cookie.c)
 *     memset @ 0x1C00CF8C0 (memset.c)
 *     ?HandleMouseInterceptWorker@CMouseProcessor@@AEAA?AW4_MOUSE_INTERCEPTION_RESULT@@PEAVMouseInputDataEx@1@@Z @ 0x1C01C05F0 (-HandleMouseInterceptWorker@CMouseProcessor@@AEAA-AW4_MOUSE_INTERCEPTION_RESULT@@PEAVMouseInputD.c)
 *     ?SynchronizeCursorPosition@RootCursorAsync@CMouseProcessor@@QEAAXXZ @ 0x1C01C2224 (-SynchronizeCursorPosition@RootCursorAsync@CMouseProcessor@@QEAAXXZ.c)
 */

void __fastcall CMouseProcessor::SynthesizeMouse(
        CMouseProcessor *this,
        struct tagPOINT a2,
        struct _MOUSE_INPUT_DATA *a3,
        struct _PTPMouseLatencyTracker *a4)
{
  char v8; // al
  int v9; // edx
  struct tagPOINT v10; // [rsp+40h] [rbp-69h] BYREF
  _QWORD v11[10]; // [rsp+50h] [rbp-59h] BYREF
  _MOUSE_INPUT_DATA v12[2]; // [rsp+A0h] [rbp-9h] BYREF
  __int64 v13; // [rsp+D0h] [rbp+27h]

  InputTraceLogging::Mouse::ProcessInput(0LL, *(const struct CMouseProcessor::MouseInputDataEx **)&a2, 1);
  if ( CMouseProcessor::MouseInputDataEx::TestProcessingOption(*(_QWORD *)&a2, 512)
    && !CMouseProcessor::MouseInputDataEx::TestProcessingOption(*(_QWORD *)&a2, 4)
    && !CMouseProcessor::MouseInputDataEx::TestProcessingOption(*(_QWORD *)&a2, 0x8000)
    && *((_DWORD *)this + 14) == (unsigned int)PsGetCurrentThreadId()
    && (unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD))CMouseProcessor::HandleMouseInterceptWorker)(this, a2) == 1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = 4;
      WPP_RECORDER_SF_(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v9,
        6,
        16,
        (__int64)&WPP_bc237edca6b43ca924b1688b2fc88a86_Traceguids);
    }
  }
  else
  {
    if ( IsMouseIVEnabled() && isChildPartition() )
      CMouseProcessor::RootCursorAsync::SynchronizeCursorPosition((CMouseProcessor *)((char *)this + 3864));
    memset(v11, 0, sizeof(v11));
    LODWORD(v11[9]) = 3;
    v13 = 3LL;
    HIDWORD(v13) = *(unsigned __int16 *)(*(_QWORD *)&a2 + 4LL);
    v8 = *(_BYTE *)(*(_QWORD *)&a2 + 2LL);
    memset(v12, 0, sizeof(v12));
    if ( v8 < 0 )
    {
      if ( a4 )
      {
        LODWORD(v11[9]) = 1;
        LODWORD(v13) = 1;
        v11[7] = KeQueryPerformanceCounter(0LL).QuadPart;
        v11[0] = *(_QWORD *)a4;
        v11[1] = *((_QWORD *)a4 + 1);
        v11[2] = *((_QWORD *)a4 + 2);
        v11[3] = *((_QWORD *)a4 + 3);
        v11[4] = *((_QWORD *)a4 + 4);
        v11[5] = *((_QWORD *)a4 + 5);
        v11[6] = *((_QWORD *)a4 + 6);
      }
    }
    CMouseProcessor::ProcessMouseInputData(
      this,
      &v10,
      a2,
      *(struct _MousePacketPerf **)&gptCursorAsync,
      v12,
      (const struct tagUIPI_INFO_INT *)a3,
      0LL);
    v11[8] = KeQueryPerformanceCounter(0LL).QuadPart;
    RIMLockExclusive((__int64)this + 3416);
    MousePerfSummary::CollectMousePerfTelemetry(
      (CMouseProcessor *)((char *)this + 2800),
      (const struct _MousePerf *)v11);
    *((_QWORD *)this + 428) = 0LL;
    ExReleasePushLockExclusiveEx((char *)this + 3416, 0LL);
    KeLeaveCriticalRegion();
  }
}
