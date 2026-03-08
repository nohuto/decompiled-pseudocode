/*
 * XREFs of ?CurIndexName@InputTraceLogging@@CAPEBDI@Z @ 0x1C01A991C
 * Callers:
 *     ?zzzInternalSetSystemCursor@@YAXPEAUtagCURSOR@@IPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCursorReason@@@Z @ 0x1C01084CC (-zzzInternalSetSystemCursor@@YAXPEAUtagCURSOR@@IPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCur.c)
 *     ?CursorToString@InputTraceLogging@@CAPEBDPEAUtagCURSOR@@@Z @ 0x1C01A9968 (-CursorToString@InputTraceLogging@@CAPEBDPEAUtagCURSOR@@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C0130974 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

const char *__fastcall InputTraceLogging::CurIndexName(unsigned int a1)
{
  if ( a1 < 0x13 )
    return `InputTraceLogging::CurIndexName'::`2'::typenames[a1];
  MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 4569);
  return "ERROR BAD INDEX";
}
