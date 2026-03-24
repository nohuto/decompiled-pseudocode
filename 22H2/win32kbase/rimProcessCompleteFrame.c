/*
 * XREFs of rimProcessCompleteFrame @ 0x1C0174F58
 * Callers:
 *     RIMCompletePointerDeviceFrame @ 0x1C0171424 (RIMCompletePointerDeviceFrame.c)
 *     ?ivHandleTouchInputPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01B93B0 (-ivHandleTouchInputPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?DispatchFrame@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBURIMCOMPLETEFRAME@@W4DispatchType@12@@Z @ 0x1C01738E4 (-DispatchFrame@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBURIMCOMPLETEFRAME@@W4DispatchType@12@@Z.c)
 *     rimDispatchCompleteFrame @ 0x1C0174394 (rimDispatchCompleteFrame.c)
 *     rimQueueCompleteFrame @ 0x1C0175DAC (rimQueueCompleteFrame.c)
 */

void __fastcall rimProcessCompleteFrame(HANDLE *a1, struct RIMDEV *a2, LARGE_INTEGER *a3)
{
  int v6; // eax
  int v7; // eax

  if ( (*((_DWORD *)a2 + 46) & 0x200) != 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 916);
  if ( (a1[80] || *((_DWORD *)a1 + 216))
    && (v6 = *((_DWORD *)a2 + 46), (v6 & 0x2000) != 0)
    && (v6 & 0x20000) != 0
    && (v6 & 0x400000) == 0 )
  {
    rimQueueCompleteFrame(a1, a2, a3);
    v7 = *((_DWORD *)a2 + 46);
    if ( (v7 & 0x100000) == 0 )
    {
      *((_DWORD *)a2 + 46) = v7 | 0x100000;
      ZwSetEvent(a1[48], 0LL);
    }
  }
  else if ( *((_BYTE *)a1 + 584) )
  {
    *((_BYTE *)a1 + 584) = 0;
    InputTraceLogging::RIM::DispatchFrame((__int64)a2, (__int64)a3, 0);
    rimDispatchCompleteFrame((struct RawInputManagerObject *)a1, a2, a3);
  }
  else
  {
    rimQueueCompleteFrame(a1, a2, a3);
  }
}
