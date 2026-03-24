/*
 * XREFs of rimAbCreateGlobalPenDeadzone @ 0x1C0158890
 * Callers:
 *     rimAbUpdateDeadzonesAndResurrectContacts @ 0x1C0159C24 (rimAbUpdateDeadzonesAndResurrectContacts.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     WPP_RECORDER_SF_Dd @ 0x1C013732C (WPP_RECORDER_SF_Dd.c)
 */

_UNKNOWN **__fastcall rimAbCreateGlobalPenDeadzone(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rsi
  _UNKNOWN **result; // rax

  v4 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  if ( !gDeviceArbitrationType )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 112);
  *(_QWORD *)(a1 + 496) = a2;
  *(_DWORD *)(a1 + 492) = 1;
  *(_DWORD *)(a1 + 504) = v4 + 250;
  result = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    return (_UNKNOWN **)WPP_RECORDER_SF_Dd(
                          (__int64)gRimLog,
                          4u,
                          1u,
                          0xAu,
                          (__int64)&WPP_1df71edf843731ddcb2b607f62e3e01f_Traceguids,
                          a2,
                          *(_DWORD *)(a1 + 500));
  return result;
}
