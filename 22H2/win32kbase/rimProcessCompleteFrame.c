/*
 * XREFs of rimProcessCompleteFrame @ 0x1C00E28C0
 * Callers:
 *     RIMCompletePointerDeviceFrame @ 0x1C019F844 (RIMCompletePointerDeviceFrame.c)
 *     ?ivHandleTouchInputPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01EE140 (-ivHandleTouchInputPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?DispatchFrame@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBURIMCOMPLETEFRAME@@W4DispatchType@12@@Z @ 0x1C00E1E78 (-DispatchFrame@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBURIMCOMPLETEFRAME@@W4DispatchType@12@@Z.c)
 *     rimDispatchCompleteFrames @ 0x1C00E1F9C (rimDispatchCompleteFrames.c)
 *     rimQueueCompleteFrame @ 0x1C01A4E88 (rimQueueCompleteFrame.c)
 */

NTSTATUS __fastcall rimProcessCompleteFrame(HANDLE *a1, LARGE_INTEGER *a2, LARGE_INTEGER *a3)
{
  DWORD LowPart; // eax
  NTSTATUS result; // eax

  if ( (a2[23].LowPart & 0x200) != 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 962);
  if ( (a1[104] || *((_DWORD *)a1 + 264))
    && (LowPart = a2[23].LowPart, (LowPart & 0x2000) != 0)
    && (LowPart & 0x80000) != 0
    && (LowPart & 0x1000000) == 0 )
  {
    rimQueueCompleteFrame(a1, a2, a3);
    result = a2[23].LowPart;
    if ( (result & 0x400000) == 0 )
    {
      a2[23].LowPart = result | 0x400000;
      return ZwSetEvent(a1[43], 0LL);
    }
  }
  else if ( *((_BYTE *)a1 + 776) )
  {
    *((_BYTE *)a1 + 776) = 0;
    InputTraceLogging::RIM::DispatchFrame((__int64)a2);
    return rimDispatchCompleteFrames((struct RawInputManagerObject *)a1, a2, (__int64)a3, a3, a3->LowPart).LowPart;
  }
  else
  {
    return rimQueueCompleteFrame(a1, a2, a3);
  }
  return result;
}
