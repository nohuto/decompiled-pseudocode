/*
 * XREFs of TlgRegisterAggregateProvider @ 0x140803364
 * Callers:
 *     FsRtlInitSystem2 @ 0x14053C8E0 (FsRtlInitSystem2.c)
 *     CmFcInitSystem3 @ 0x140B38984 (CmFcInitSystem3.c)
 *     IopInitializePlugPlayServices @ 0x140B42004 (IopInitializePlugPlayServices.c)
 *     EtwpInitialize @ 0x140B4B150 (EtwpInitialize.c)
 *     IoInitSystemPreDrivers @ 0x140B4F014 (IoInitSystemPreDrivers.c)
 * Callees:
 *     TlgRegisterAggregateProviderEx @ 0x140803380 (TlgRegisterAggregateProviderEx.c)
 */

__int64 __fastcall TlgRegisterAggregateProvider(void *a1)
{
  return TlgRegisterAggregateProviderEx(a1);
}
