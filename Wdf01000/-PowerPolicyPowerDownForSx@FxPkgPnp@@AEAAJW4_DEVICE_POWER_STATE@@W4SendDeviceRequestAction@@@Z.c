/*
 * XREFs of ?PowerPolicyPowerDownForSx@FxPkgPnp@@AEAAJW4_DEVICE_POWER_STATE@@W4SendDeviceRequestAction@@@Z @ 0x1C007D624
 * Callers:
 *     ?PowerPolSleepingNoWakePowerDown@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C007AFF0 (-PowerPolSleepingNoWakePowerDown@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolSleepingWakePowerDown@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C007B160 (-PowerPolSleepingWakePowerDown@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 * Callees:
 *     ?PowerPolicyBlockChildrenPowerUp@FxPkgPnp@@AEAAXXZ @ 0x1C007CEF4 (-PowerPolicyBlockChildrenPowerUp@FxPkgPnp@@AEAAXXZ.c)
 *     ?PowerPolicySendDevicePowerRequest@FxPkgPnp@@IEAAJW4_DEVICE_POWER_STATE@@W4SendDeviceRequestAction@@W4RequestDIrpReason@@@Z @ 0x1C007DCA0 (-PowerPolicySendDevicePowerRequest@FxPkgPnp@@IEAAJW4_DEVICE_POWER_STATE@@W4SendDeviceRequestActi.c)
 */

int __fastcall FxPkgPnp::PowerPolicyPowerDownForSx(
        FxPkgPnp *this,
        _FX_DRIVER_GLOBALS *DxState,
        SendDeviceRequestAction Action)
{
  _DEVICE_POWER_STATE v4; // edi

  v4 = (int)DxState;
  FxPkgPnp::PowerPolicyBlockChildrenPowerUp(this, DxState);
  return FxPkgPnp::PowerPolicySendDevicePowerRequest(this, v4, Action, RequestDxForSx);
}
