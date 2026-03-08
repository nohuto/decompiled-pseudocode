/*
 * XREFs of HalpMiscInitializeTelemetry @ 0x140851B78
 * Callers:
 *     HalpMiscInitSystem @ 0x140A8E290 (HalpMiscInitSystem.c)
 * Callees:
 *     EtwRegister @ 0x140690D20 (EtwRegister.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x14080F6BC (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 */

__int64 HalpMiscInitializeTelemetry()
{
  if ( EtwRegister(&HAL_ETW_PROVIDER, 0LL, 0LL, &HalpDiagnosticEventHandle) >= 0 )
    HalpDiagnosticEventsRegistered = 1;
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((char *)&dword_140C04B50, 0LL, 0LL);
  return 0LL;
}
