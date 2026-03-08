/*
 * XREFs of ?PowerD0DisarmingWakeAtBusNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C006E1C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     ?PowerCompletePendedWakeIrp@FxPkgPnp@@IEAAXXZ @ 0x1C006DF68 (-PowerCompletePendedWakeIrp@FxPkgPnp@@IEAAXXZ.c)
 */

__int64 __fastcall FxPkgPnp::PowerD0DisarmingWakeAtBusNP(FxPkgPnp *This)
{
  This->PowerDisableWakeAtBusOverload(This);
  FxPkgPnp::PowerCompletePendedWakeIrp(This);
  return 33546LL;
}
