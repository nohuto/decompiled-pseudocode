/*
 * XREFs of ?SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAUPTPMouseInputData@@@Z @ 0x1C007A4DC
 * Callers:
 *     ?ExecuteMoveMouseWindowManagement@CMouseProcessor@@QEAAXXZ @ 0x1C007A39C (-ExecuteMoveMouseWindowManagement@CMouseProcessor@@QEAAXXZ.c)
 *     SynthesizePTPMouseInput @ 0x1C00F4270 (SynthesizePTPMouseInput.c)
 *     SynthesizeMouseInput @ 0x1C0218A60 (SynthesizeMouseInput.c)
 *     ?AccessibilityMouseButtonAction@CMouseProcessor@@QEAAXW4MouseKeyButton@@W4MouseKeyButtonState@@@Z @ 0x1C022AC34 (-AccessibilityMouseButtonAction@CMouseProcessor@@QEAAXW4MouseKeyButton@@W4MouseKeyButtonState@@@.c)
 *     ?AccessibilityMouseMove@CMouseProcessor@@QEAAXJJ@Z @ 0x1C022ADA8 (-AccessibilityMouseMove@CMouseProcessor@@QEAAXJJ@Z.c)
 *     ?AccessibilityReleaseMouseButton@CMouseProcessor@@QEAAXW4MouseKeyButton@@@Z @ 0x1C022AE68 (-AccessibilityReleaseMouseButton@CMouseProcessor@@QEAAXW4MouseKeyButton@@@Z.c)
 *     ?Extensibility_SynthesizeMouseInput@CMouseProcessor@@QEAA?AW4_SYNTHESIZED_MOUSE_PROCESSING_RESULT@@PEAU_ExtensibilityMouseInputData@@W4_MOUSEPROCESSOR_PROCESSING_OPTIONS@@PEAU_SYNTHESIZE_MOUSE_EXTRA_PAYLOAD@@@Z @ 0x1C022C888 (-Extensibility_SynthesizeMouseInput@CMouseProcessor@@QEAA-AW4_SYNTHESIZED_MOUSE_PROCESSING_RESUL.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C00399D0 (RIMLockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     isChildPartition @ 0x1C0078FF0 (isChildPartition.c)
 *     ?ProcessMouseInputData@CMouseProcessor@@AEAA?AUtagPOINT@@PEAVMouseInputDataEx@1@U2@AEAU_MousePacketPerf@@PEBU_MOUSE_INPUT_DATA@@PEBUtagUIPI_INFO_INT@@@Z @ 0x1C007A654 (-ProcessMouseInputData@CMouseProcessor@@AEAA-AUtagPOINT@@PEAVMouseInputDataEx@1@U2@AEAU_MousePac.c)
 *     IsMouseIVEnabled @ 0x1C007AFD0 (IsMouseIVEnabled.c)
 *     ?TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@@@Z @ 0x1C007B668 (-TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@.c)
 *     ?ProcessInput@Mouse@InputTraceLogging@@SAXPEBURIMDEV@@PEBVMouseInputDataEx@CMouseProcessor@@_N@Z @ 0x1C007B820 (-ProcessInput@Mouse@InputTraceLogging@@SAXPEBURIMDEV@@PEBVMouseInputDataEx@CMouseProcessor@@_N@Z.c)
 *     ?CollectMousePerfTelemetry@MousePerfSummary@@QEAAXAEBU_MousePerf@@@Z @ 0x1C007B958 (-CollectMousePerfTelemetry@MousePerfSummary@@QEAAXAEBU_MousePerf@@@Z.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     memset @ 0x1C00E1980 (memset.c)
 *     ?HandleMouseInterceptWorker@CMouseProcessor@@AEAA?AW4_MOUSE_INTERCEPTION_RESULT@@PEAVMouseInputDataEx@1@@Z @ 0x1C022E0C8 (-HandleMouseInterceptWorker@CMouseProcessor@@AEAA-AW4_MOUSE_INTERCEPTION_RESULT@@PEAVMouseInputD.c)
 *     ?SynchronizeCursorPosition@RootCursorAsync@CMouseProcessor@@QEAAXXZ @ 0x1C02316A8 (-SynchronizeCursorPosition@RootCursorAsync@CMouseProcessor@@QEAAXXZ.c)
 */

void __fastcall CMouseProcessor::SynthesizeMouse(
        CMouseProcessor *this,
        struct CMouseProcessor::MouseInputDataEx *a2,
        struct PTPMouseInputData *a3)
{
  char v5; // di
  struct _MousePacketPerf *v7; // rbx
  const struct tagUIPI_INFO_INT *v8; // r12
  struct tagPOINT v9; // rdi
  int v10; // r8d
  int v11; // edx
  LARGE_INTEGER PerformanceCounter; // rax
  _QWORD *v13; // rcx
  _BYTE v14[16]; // [rsp+40h] [rbp-79h] BYREF
  _QWORD v15[10]; // [rsp+50h] [rbp-69h] BYREF
  struct _MOUSE_INPUT_DATA v16[2]; // [rsp+A0h] [rbp-19h] BYREF
  __int64 v17; // [rsp+D0h] [rbp+17h]

  v5 = 1;
  InputTraceLogging::Mouse::ProcessInput(0LL, a2, 1);
  v7 = (struct _MousePacketPerf *)gptCursorAsync;
  v8 = 0LL;
  if ( a3 )
  {
    v8 = (const struct tagUIPI_INFO_INT *)*((_QWORD *)a3 + 2);
    v7 = *(struct _MousePacketPerf **)a3;
  }
  if ( (unsigned __int8)CMouseProcessor::MouseInputDataEx::TestProcessingOption(a2, 512LL)
    && !(unsigned __int8)CMouseProcessor::MouseInputDataEx::TestProcessingOption(a2, 4LL)
    && !(unsigned __int8)CMouseProcessor::MouseInputDataEx::TestProcessingOption(a2, 0x8000LL)
    && *((_DWORD *)this + 12) == (unsigned int)PsGetCurrentThreadId()
    && (unsigned int)CMouseProcessor::HandleMouseInterceptWorker(this, a2) == 1 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
    {
      v5 = 0;
    }
    if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v11 = 16;
      LOBYTE(v11) = v5;
      LOBYTE(v10) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v11,
        v10,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        4,
        6,
        16,
        (__int64)&WPP_2101e6ada08e3422177879c6f3be7480_Traceguids);
    }
  }
  else
  {
    if ( (unsigned __int8)IsMouseIVEnabled() && isChildPartition() )
      CMouseProcessor::RootCursorAsync::SynchronizeCursorPosition((CMouseProcessor *)((char *)this + 3872));
    memset(v15, 0, sizeof(v15));
    LODWORD(v15[9]) = 3;
    v17 = 3LL;
    HIDWORD(v17) = *((unsigned __int16 *)a2 + 2);
    memset(v16, 0, sizeof(v16));
    if ( a3 && *((_QWORD *)a3 + 1) )
    {
      LODWORD(v15[9]) = 1;
      LODWORD(v17) = 1;
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      v13 = (_QWORD *)*((_QWORD *)a3 + 1);
      v15[7] = PerformanceCounter.QuadPart;
      v15[0] = *v13;
      v15[1] = v13[1];
      v15[2] = v13[2];
      v15[3] = v13[3];
      v15[4] = v13[4];
      v15[5] = v13[5];
      v15[6] = v13[6];
    }
    v9 = **(struct tagPOINT **)&CMouseProcessor::ProcessMouseInputData(
                                  this,
                                  (struct CMouseProcessor::MouseInputDataEx *)v14,
                                  (struct tagPOINT)a2,
                                  v7,
                                  v16,
                                  v8);
    v15[8] = KeQueryPerformanceCounter(0LL).QuadPart;
    RIMLockExclusive((__int64)this + 3416);
    MousePerfSummary::CollectMousePerfTelemetry(
      (CMouseProcessor *)((char *)this + 2792),
      (const struct _MousePerf *)v15);
    *((_QWORD *)this + 428) = 0LL;
    ExReleasePushLockExclusiveEx((char *)this + 3416, 0LL);
    KeLeaveCriticalRegion();
    if ( a3 )
      *(struct tagPOINT *)a3 = v9;
  }
}
