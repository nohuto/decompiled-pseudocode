/*
 * XREFs of ?PowerWakingPostHardwareEnabledNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C001C730
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerWakingPostHardwareEnabledCommon@FxPkgPnp@@IEAA?AW4_WDF_DEVICE_POWER_STATE@@E@Z @ 0x1C001C528 (-PowerWakingPostHardwareEnabledCommon@FxPkgPnp@@IEAA-AW4_WDF_DEVICE_POWER_STATE@@E@Z.c)
 */

__int64 __fastcall FxPkgPnp::PowerWakingPostHardwareEnabledNP(FxPkgPnp *This)
{
  return FxPkgPnp::PowerWakingPostHardwareEnabledCommon(This, 1u);
}
