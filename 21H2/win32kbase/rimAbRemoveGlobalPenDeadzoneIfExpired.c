/*
 * XREFs of rimAbRemoveGlobalPenDeadzoneIfExpired @ 0x1C01593D4
 * Callers:
 *     RIMAbArbitratePointerDeviceFrame @ 0x1C015A14C (RIMAbArbitratePointerDeviceFrame.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003CBE8 (WPP_RECORDER_SF_.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     rimAbRemoveGlobalPenDeadzone @ 0x1C0159378 (rimAbRemoveGlobalPenDeadzone.c)
 */

_UNKNOWN **__fastcall rimAbRemoveGlobalPenDeadzoneIfExpired(__int64 a1)
{
  _UNKNOWN **result; // rax
  int v3; // edx

  if ( !gDeviceArbitrationType )
    result = (_UNKNOWN **)MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 141);
  if ( *(_DWORD *)(a1 + 492) )
  {
    result = (_UNKNOWN **)MEMORY[0xFFFFF78000000320];
    if ( (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) >= *(_DWORD *)(a1 + 504) )
    {
      rimAbRemoveGlobalPenDeadzone(a1);
      result = &WPP_RECORDER_INITIALIZED;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v3) = 4;
        return (_UNKNOWN **)WPP_RECORDER_SF_(
                              (_DWORD)gRimLog,
                              v3,
                              1,
                              11,
                              (__int64)&WPP_1df71edf843731ddcb2b607f62e3e01f_Traceguids);
      }
    }
  }
  return result;
}
