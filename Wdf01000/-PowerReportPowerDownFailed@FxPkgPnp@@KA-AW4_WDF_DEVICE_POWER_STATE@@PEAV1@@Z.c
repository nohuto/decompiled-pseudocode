/*
 * XREFs of ?PowerReportPowerDownFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C006FA80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     ?PowerSendPowerDownFailureEvent@FxPkgPnp@@IEAAXW4FxPowerDownType@@@Z @ 0x1C006FB94 (-PowerSendPowerDownFailureEvent@FxPkgPnp@@IEAAXW4FxPowerDownType@@@Z.c)
 */

__int64 __fastcall FxPkgPnp::PowerReportPowerDownFailed(FxPkgPnp *This, __int64 a2)
{
  LOBYTE(a2) = 1;
  This->PowerReleasePendingDeviceIrp(This, a2);
  FxPkgPnp::PowerSendPowerDownFailureEvent(This, FxPowerDownTypeExplicit);
  return 873LL;
}
