/*
 * XREFs of CmpRegisterTraceLoggingProvider @ 0x140812368
 * Callers:
 *     CmInitSystem2 @ 0x140B3CD68 (CmInitSystem2.c)
 * Callees:
 *     TlgRegisterAggregateProviderEx @ 0x140803380 (TlgRegisterAggregateProviderEx.c)
 */

__int64 CmpRegisterTraceLoggingProvider()
{
  return TlgRegisterAggregateProviderEx(&dword_140C04390, 0LL, 0LL);
}
