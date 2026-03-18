/*
 * XREFs of rimAbRemoveGlobalPenDeadzoneIfExpired @ 0x1C0187468
 * Callers:
 *     RIMAbArbitratePointerDeviceFrame @ 0x1C0188460 (RIMAbArbitratePointerDeviceFrame.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     rimAbRemoveGlobalPenDeadzone @ 0x1C01873D8 (rimAbRemoveGlobalPenDeadzone.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

_UNKNOWN **__fastcall rimAbRemoveGlobalPenDeadzoneIfExpired(__int64 a1, __int64 a2, __int64 a3)
{
  _UNKNOWN **result; // rax
  int v5; // edx
  int v6; // r8d

  if ( !gDeviceArbitrationType )
    result = (_UNKNOWN **)MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  if ( *(_DWORD *)(a1 + 516) )
  {
    result = (_UNKNOWN **)MEMORY[0xFFFFF78000000320];
    if ( (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) >= *(_DWORD *)(a1 + 728) )
    {
      rimAbRemoveGlobalPenDeadzone(a1, a2, a3);
      LOBYTE(v5) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      result = &WPP_RECORDER_INITIALIZED;
      if ( (_BYTE)v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v6) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        return (_UNKNOWN **)WPP_RECORDER_AND_TRACE_SF_(
                              WPP_GLOBAL_Control->AttachedDevice,
                              v5,
                              v6,
                              (_DWORD)gRimLog,
                              4,
                              1,
                              11,
                              (__int64)&WPP_3a0f0d76a8e8385ab6cfb42384993437_Traceguids);
      }
    }
  }
  return result;
}
