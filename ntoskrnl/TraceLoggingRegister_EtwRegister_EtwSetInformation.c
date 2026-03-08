/*
 * XREFs of TraceLoggingRegister_EtwRegister_EtwSetInformation @ 0x140930904
 * Callers:
 *     sub_14081B380 @ 0x14081B380 (sub_14081B380.c)
 *     CcInitializeTelemetry @ 0x140B31E14 (CcInitializeTelemetry.c)
 * Callees:
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x14080F6BC (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 */

__int64 __fastcall TraceLoggingRegister_EtwRegister_EtwSetInformation(char *a1)
{
  return TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(a1, 0LL, 0LL);
}
