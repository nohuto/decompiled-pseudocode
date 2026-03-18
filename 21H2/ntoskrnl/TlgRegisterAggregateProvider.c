/*
 * XREFs of TlgRegisterAggregateProvider @ 0x140827FE8
 * Callers:
 *     FsRtlInitSystem2 @ 0x1404173C8 (FsRtlInitSystem2.c)
 *     IopInitializePlugPlayServices @ 0x140B0046C (IopInitializePlugPlayServices.c)
 *     CmFcInitSystem3 @ 0x140B0183C (CmFcInitSystem3.c)
 *     EtwpInitialize @ 0x140B0433C (EtwpInitialize.c)
 * Callees:
 *     TlgRegisterAggregateProviderEx @ 0x140828004 (TlgRegisterAggregateProviderEx.c)
 */

__int64 __fastcall TlgRegisterAggregateProvider(void *a1)
{
  return TlgRegisterAggregateProviderEx(a1);
}
