/*
 * XREFs of rimQueueCompleteFrame @ 0x1C01D2F84
 * Callers:
 *     rimProcessCompleteFrame @ 0x1C00F0D94 (rimProcessCompleteFrame.c)
 * Callees:
 *     isChildPartition @ 0x1C0078FF0 (isChildPartition.c)
 *     RawInputManagerDeviceObjectReference @ 0x1C0088EF0 (RawInputManagerDeviceObjectReference.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?QueueFrame@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBURIMCOMPLETEFRAME@@@Z @ 0x1C01D2130 (-QueueFrame@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBURIMCOMPLETEFRAME@@@Z.c)
 *     ?QueueFrame@RIM@TelemetryDebug@InputTraceLogging@@SAXAEBUTELEMETRY_POINTER_FRAME_TIMES@@@Z @ 0x1C01D2214 (-QueueFrame@RIM@TelemetryDebug@InputTraceLogging@@SAXAEBUTELEMETRY_POINTER_FRAME_TIMES@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qi @ 0x1C01D2494 (WPP_RECORDER_AND_TRACE_SF_qi.c)
 */

void __fastcall rimQueueCompleteFrame(__int64 a1, __int64 a2, __int64 a3)
{
  LARGE_INTEGER PerformanceCounter; // rbx
  int v7; // edx
  __int64 v8; // r9
  _QWORD *v9; // rdx
  _QWORD *v10; // rax

  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  *(LARGE_INTEGER *)((isChildPartition() ? 0x48 : 0) + a3 + 56) = PerformanceCounter;
  if ( (int)RawInputManagerDeviceObjectReference(*(void **)(a2 + 32)) < 0 )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 505);
    if ( a3 )
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)a3);
  }
  else
  {
    InputTraceLogging::RIM::QueueFrame((const struct RIMDEV *)a2, (const struct RIMCOMPLETEFRAME *)a3);
    InputTraceLogging::TelemetryDebug::RIM::QueueFrame((const struct TELEMETRY_POINTER_FRAME_TIMES *)(a3 + 48));
    v8 = *(_QWORD *)(a2 + 192) + 1LL;
    *(_QWORD *)(a2 + 192) = v8;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (LOBYTE(v7) = 1, (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0)
      || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
    {
      LOBYTE(v7) = 0;
    }
    if ( (_BYTE)v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_qi(
        WPP_GLOBAL_Control->AttachedDevice,
        v7,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        v8);
    v9 = *(_QWORD **)(a1 + 752);
    v10 = (_QWORD *)(a3 + 8);
    if ( *v9 != a1 + 744 )
      __fastfail(3u);
    *v10 = a1 + 744;
    *(_QWORD *)(a3 + 16) = v9;
    *v9 = v10;
    *(_QWORD *)(a1 + 752) = v10;
    *(_QWORD *)(a3 + 40) = *(_QWORD *)(a2 + 32);
  }
}
