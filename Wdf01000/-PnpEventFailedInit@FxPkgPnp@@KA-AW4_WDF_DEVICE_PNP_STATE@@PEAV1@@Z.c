/*
 * XREFs of ?PnpEventFailedInit@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C006A640
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     ?PnpFinishProcessingIrp@FxPkgPnp@@IEAAXE@Z @ 0x1C006B6BC (-PnpFinishProcessingIrp@FxPkgPnp@@IEAAXE@Z.c)
 *     ?ReleasePowerThread@FxPkgPnp@@AEAAXXZ @ 0x1C0075650 (-ReleasePowerThread@FxPkgPnp@@AEAAXXZ.c)
 */

__int64 __fastcall FxPkgPnp::PnpEventFailedInit(FxPkgPnp *This)
{
  unsigned __int8 v2; // dl

  FxPkgPnp::ReleasePowerThread(This);
  This->ReleaseReenumerationInterface(This);
  FxPkgPnp::PnpFinishProcessingIrp(This, v2);
  return 261LL;
}
