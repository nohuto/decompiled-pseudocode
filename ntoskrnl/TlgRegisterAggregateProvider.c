/*
 * XREFs of TlgRegisterAggregateProvider @ 0x14080F56C
 * Callers:
 *     FsRtlInitSystem2 @ 0x14053A440 (FsRtlInitSystem2.c)
 *     EtwpInitialize @ 0x140B3CA40 (EtwpInitialize.c)
 *     IoInitSystemPreDrivers @ 0x140B409E8 (IoInitSystemPreDrivers.c)
 *     CmFcInitSystem3 @ 0x140B44130 (CmFcInitSystem3.c)
 *     IopInitializePlugPlayServices @ 0x140B599CC (IopInitializePlugPlayServices.c)
 * Callees:
 *     TlgRegisterAggregateProviderEx @ 0x14080F588 (TlgRegisterAggregateProviderEx.c)
 */

__int64 __fastcall TlgRegisterAggregateProvider(void *a1)
{
  return TlgRegisterAggregateProviderEx(a1);
}
