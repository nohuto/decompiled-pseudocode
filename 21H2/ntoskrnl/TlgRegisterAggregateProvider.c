/*
 * XREFs of TlgRegisterAggregateProvider @ 0x1407A4BD0
 * Callers:
 *     FsRtlInitSystem2 @ 0x1403F08EC (FsRtlInitSystem2.c)
 *     CmFcInitSystem3 @ 0x140A38454 (CmFcInitSystem3.c)
 *     EtwpInitialize @ 0x140A42414 (EtwpInitialize.c)
 *     PnpTraceInitialize @ 0x140A532C8 (PnpTraceInitialize.c)
 * Callees:
 *     TlgRegisterAggregateProviderEx @ 0x1407A4BEC (TlgRegisterAggregateProviderEx.c)
 */

__int64 __fastcall TlgRegisterAggregateProvider(void *a1)
{
  return TlgRegisterAggregateProviderEx(a1);
}
