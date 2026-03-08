/*
 * XREFs of ?PnpEventInitSurpriseRemoved@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C006AAE0
 * Callers:
 *     <none>
 * Callees:
 *     ?PnpFinishProcessingIrp@FxPkgPnp@@IEAAXE@Z @ 0x1C006B6BC (-PnpFinishProcessingIrp@FxPkgPnp@@IEAAXE@Z.c)
 */

__int64 __fastcall FxPkgPnp::PnpEventInitSurpriseRemoved(FxPkgPnp *This, unsigned __int8 a2)
{
  FxPkgPnp::PnpFinishProcessingIrp(This, a2);
  return 261LL;
}
