/*
 * XREFs of ?PowerDxDisablingWakeAtBusNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C006E600
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall FxPkgPnp::PowerDxDisablingWakeAtBusNP(FxPkgPnp *This)
{
  This->PowerDisableWakeAtBusOverload(This);
  return 33588LL;
}
