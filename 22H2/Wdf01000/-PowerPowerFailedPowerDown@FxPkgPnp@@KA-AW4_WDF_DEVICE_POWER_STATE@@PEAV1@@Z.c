/*
 * XREFs of ?PowerPowerFailedPowerDown@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C007E2A0
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerSendPowerDownEvents@FxPkgPnp@@IEAAXW4FxPowerDownType@@@Z @ 0x1C00047E4 (-PowerSendPowerDownEvents@FxPkgPnp@@IEAAXW4FxPowerDownType@@@Z.c)
 *     ?PowerSetDevicePowerState@FxPkgPnp@@IEAAXW4_WDF_POWER_DEVICE_STATE@@@Z @ 0x1C0011174 (-PowerSetDevicePowerState@FxPkgPnp@@IEAAXW4_WDF_POWER_DEVICE_STATE@@@Z.c)
 */

__int64 __fastcall FxPkgPnp::PowerPowerFailedPowerDown(FxPkgPnp *This)
{
  unsigned __int8 v2; // r8

  FxPkgPnp::PowerSetDevicePowerState(This, 5);
  FxPkgPnp::PowerSendPowerDownEvents(This, FxPowerDownTypeImplicit, v2);
  return 789LL;
}
