/*
 * XREFs of EnableUserkTraceLogging @ 0x1C0118980
 * Callers:
 *     <none>
 * Callees:
 *     TlgRegisterAggregateProviderEx @ 0x1C03776E4 (TlgRegisterAggregateProviderEx.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1C03777C8 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 */

__int64 EnableUserkTraceLogging()
{
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_1C03263F8);
  TlgRegisterAggregateProviderEx();
  return TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_1C032BE20);
}
