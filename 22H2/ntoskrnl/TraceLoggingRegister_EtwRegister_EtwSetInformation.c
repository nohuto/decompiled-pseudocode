/*
 * XREFs of TraceLoggingRegister_EtwRegister_EtwSetInformation @ 0x140933834
 * Callers:
 *     sub_140812CB4 @ 0x140812CB4 (sub_140812CB4.c)
 *     CcInitializeTelemetry @ 0x140B35E14 (CcInitializeTelemetry.c)
 * Callees:
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1408034B4 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 */

__int64 __fastcall TraceLoggingRegister_EtwRegister_EtwSetInformation(char *a1)
{
  return TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(a1, 0LL, 0LL);
}
