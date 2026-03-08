/*
 * XREFs of ?PnpEventFailedStarted@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C006A790
 * Callers:
 *     <none>
 * Callees:
 *     ?PnpFinishProcessingIrp@FxPkgPnp@@IEAAXE@Z @ 0x1C006B6BC (-PnpFinishProcessingIrp@FxPkgPnp@@IEAAXE@Z.c)
 */

__int64 __fastcall FxPkgPnp::PnpEventFailedStarted(FxPkgPnp *This, unsigned __int8 a2)
{
  This->m_PendingPnPIrp->IoStatus.Status = -1073741436;
  FxPkgPnp::PnpFinishProcessingIrp(This, a2);
  return 302LL;
}
