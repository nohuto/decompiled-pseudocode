/*
 * XREFs of ?SimulateDevicePowerRequiredForS0@FxPowerPolicyMachine@@QEAAXXZ @ 0x1C001CC0C
 * Callers:
 *     ?PowerPolSystemWakeDeviceToD0CompletePowerUp@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C0010BC0 (-PowerPolSystemWakeDeviceToD0CompletePowerUp@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEA.c)
 * Callees:
 *     ?SimulateDevicePowerRequired@FxPoxInterface@@QEAAXXZ @ 0x1C0010394 (-SimulateDevicePowerRequired@FxPoxInterface@@QEAAXXZ.c)
 */

void __fastcall FxPowerPolicyMachine::SimulateDevicePowerRequiredForS0(FxPowerPolicyMachine *this)
{
  FxPoxInterface::SimulateDevicePowerRequired(&this->m_Owner->m_PoxInterface);
}
