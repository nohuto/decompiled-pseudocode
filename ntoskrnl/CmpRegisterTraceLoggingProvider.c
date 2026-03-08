/*
 * XREFs of CmpRegisterTraceLoggingProvider @ 0x14081AB58
 * Callers:
 *     CmInitSystem2 @ 0x140B54728 (CmInitSystem2.c)
 * Callees:
 *     TlgRegisterAggregateProviderEx @ 0x14080F588 (TlgRegisterAggregateProviderEx.c)
 */

__int64 CmpRegisterTraceLoggingProvider()
{
  return TlgRegisterAggregateProviderEx(&dword_140C04328, 0LL, 0LL);
}
