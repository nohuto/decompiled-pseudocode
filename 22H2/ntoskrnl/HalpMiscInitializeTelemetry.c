/*
 * XREFs of HalpMiscInitializeTelemetry @ 0x1408559A8
 * Callers:
 *     HalpMiscInitSystem @ 0x140A91720 (HalpMiscInitSystem.c)
 * Callees:
 *     EtwRegister @ 0x14078DD90 (EtwRegister.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1408034B4 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 */

__int64 HalpMiscInitializeTelemetry()
{
  if ( EtwRegister(&HAL_ETW_PROVIDER, 0LL, 0LL, &HalpDiagnosticEventHandle) >= 0 )
    HalpDiagnosticEventsRegistered = 1;
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((char *)&dword_140C04BB0, 0LL, 0LL);
  return 0LL;
}
