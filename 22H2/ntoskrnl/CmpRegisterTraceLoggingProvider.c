/*
 * XREFs of CmpRegisterTraceLoggingProvider @ 0x14079E49C
 * Callers:
 *     CmInitSystem2 @ 0x140A4B3D4 (CmInitSystem2.c)
 * Callees:
 *     TlgRegisterAggregateProviderEx @ 0x1407A501C (TlgRegisterAggregateProviderEx.c)
 */

__int64 CmpRegisterTraceLoggingProvider()
{
  return TlgRegisterAggregateProviderEx(&dword_140C02130);
}
