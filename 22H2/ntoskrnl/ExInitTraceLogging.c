/*
 * XREFs of ExInitTraceLogging @ 0x140B98E74
 * Callers:
 *     Phase1InitializationIoReady @ 0x140B532AC (Phase1InitializationIoReady.c)
 * Callees:
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1408034B4 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 */

__int64 ExInitTraceLogging()
{
  return TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((char *)&dword_140C06790, 0LL, 0LL);
}
