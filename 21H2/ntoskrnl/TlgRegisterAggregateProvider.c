/*
 * XREFs of TlgRegisterAggregateProvider @ 0x1407A4DD0
 * Callers:
 *     FsRtlInitSystem2 @ 0x1403F0A5C (FsRtlInitSystem2.c)
 *     CmFcInitSystem3 @ 0x140A39454 (CmFcInitSystem3.c)
 *     EtwpInitialize @ 0x140A43414 (EtwpInitialize.c)
 *     PnpTraceInitialize @ 0x140A542C8 (PnpTraceInitialize.c)
 * Callees:
 *     TlgRegisterAggregateProviderEx @ 0x1407A4DEC (TlgRegisterAggregateProviderEx.c)
 */

__int64 __fastcall TlgRegisterAggregateProvider(void *a1)
{
  return TlgRegisterAggregateProviderEx(a1);
}
