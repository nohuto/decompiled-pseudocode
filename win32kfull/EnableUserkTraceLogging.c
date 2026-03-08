/*
 * XREFs of EnableUserkTraceLogging @ 0x1C00EC650
 * Callers:
 *     <none>
 * Callees:
 *     TlgRegisterAggregateProviderEx @ 0x1C039C844 (TlgRegisterAggregateProviderEx.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1C039C928 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 */

__int64 EnableUserkTraceLogging()
{
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_1C0357098);
  TlgRegisterAggregateProviderEx();
  return TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_1C035C080);
}
