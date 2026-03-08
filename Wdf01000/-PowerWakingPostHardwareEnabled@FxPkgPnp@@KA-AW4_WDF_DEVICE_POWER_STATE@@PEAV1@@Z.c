/*
 * XREFs of ?PowerWakingPostHardwareEnabled@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0070630
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerWakingPostHardwareEnabledCommon@FxPkgPnp@@IEAA?AW4_WDF_DEVICE_POWER_STATE@@E@Z @ 0x1C0070648 (-PowerWakingPostHardwareEnabledCommon@FxPkgPnp@@IEAA-AW4_WDF_DEVICE_POWER_STATE@@E@Z.c)
 */

_WDF_DEVICE_POWER_STATE __fastcall FxPkgPnp::PowerWakingPostHardwareEnabled(FxPkgPnp *This)
{
  return FxPkgPnp::PowerWakingPostHardwareEnabledCommon(This, 0);
}
