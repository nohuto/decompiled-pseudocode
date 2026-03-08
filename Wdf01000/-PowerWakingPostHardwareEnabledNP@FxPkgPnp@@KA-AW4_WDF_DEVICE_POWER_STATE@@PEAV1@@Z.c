/*
 * XREFs of ?PowerWakingPostHardwareEnabledNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0070850
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerWakingPostHardwareEnabledCommon@FxPkgPnp@@IEAA?AW4_WDF_DEVICE_POWER_STATE@@E@Z @ 0x1C0070648 (-PowerWakingPostHardwareEnabledCommon@FxPkgPnp@@IEAA-AW4_WDF_DEVICE_POWER_STATE@@E@Z.c)
 */

__int64 __fastcall FxPkgPnp::PowerWakingPostHardwareEnabledNP(FxPkgPnp *This)
{
  return FxPkgPnp::PowerWakingPostHardwareEnabledCommon(This, 1u);
}
