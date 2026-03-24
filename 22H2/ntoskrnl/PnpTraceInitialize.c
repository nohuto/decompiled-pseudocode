/*
 * XREFs of PnpTraceInitialize @ 0x140A532C8
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140A52280 (IopInitializePlugPlayServices.c)
 * Callees:
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x14078CF94 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     TlgRegisterAggregateProvider @ 0x1407A5000 (TlgRegisterAggregateProvider.c)
 */

__int64 PnpTraceInitialize()
{
  TlgRegisterAggregateProvider(&dword_140C02DC8);
  TlgRegisterAggregateProvider(&dword_140C02E00);
  return TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((ULONGLONG *)&dword_140C02D90, 0LL, 0LL);
}
