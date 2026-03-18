/*
 * XREFs of PfInitializeTraceLogging @ 0x140B97370
 * Callers:
 *     Phase1InitializationIoReady @ 0x140B532AC (Phase1InitializationIoReady.c)
 * Callees:
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1408034B4 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 */

__int64 PfInitializeTraceLogging()
{
  return TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((char *)&dword_140C03008, 0LL, 0LL);
}
