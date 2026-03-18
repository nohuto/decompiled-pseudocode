/*
 * XREFs of TraceLoggingRegister_EtwRegister_EtwSetInformation @ 0x140908C90
 * Callers:
 *     sub_14082E638 @ 0x14082E638 (sub_14082E638.c)
 *     CcInitializeTelemetry @ 0x140AF2E9C (CcInitializeTelemetry.c)
 *     EtwpInitialize @ 0x140B0433C (EtwpInitialize.c)
 * Callees:
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1406D2264 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 */

__int64 __fastcall TraceLoggingRegister_EtwRegister_EtwSetInformation(char *a1)
{
  return TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(a1, 0LL, 0LL);
}
