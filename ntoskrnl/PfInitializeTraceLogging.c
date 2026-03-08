/*
 * XREFs of PfInitializeTraceLogging @ 0x140B93160
 * Callers:
 *     Phase1InitializationIoReady @ 0x140B42D0C (Phase1InitializationIoReady.c)
 * Callees:
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x14080F6BC (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 */

__int64 PfInitializeTraceLogging()
{
  return TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((char *)&dword_140C02FD0, 0LL, 0LL);
}
