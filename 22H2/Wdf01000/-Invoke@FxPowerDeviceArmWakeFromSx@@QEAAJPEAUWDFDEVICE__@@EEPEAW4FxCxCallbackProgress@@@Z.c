/*
 * XREFs of ?Invoke@FxPowerDeviceArmWakeFromSx@@QEAAJPEAUWDFDEVICE__@@EEPEAW4FxCxCallbackProgress@@@Z @ 0x1C001BB28
 * Callers:
 *     ?PowerPolSleepingWakeWakeArrived@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C0087000 (-PowerPolSleepingWakeWakeArrived@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolSleepingWakeWakeArrivedNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C0087130 (-PowerPolSleepingWakeWakeArrivedNP@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 * Callees:
 *     ?InvokeStateful@FxPrePostCallback@@QEAAJPEAW4FxCxCallbackProgress@@W4FxCxCallbackCleanupAction@@@Z @ 0x1C0016E78 (-InvokeStateful@FxPrePostCallback@@QEAAJPEAW4FxCxCallbackProgress@@W4FxCxCallbackCleanupAction@@.c)
 */

__int64 __fastcall FxPowerDeviceArmWakeFromSx::Invoke(
        FxPowerDeviceArmWakeFromSx *this,
        WDFDEVICE__ *Device,
        unsigned __int8 DeviceWakeEnabled,
        unsigned __int8 ChildrenArmedForWake,
        FxCxCallbackProgress *Progress)
{
  this->m_Device = Device;
  this->m_DeviceWakeEnabled = DeviceWakeEnabled;
  this->m_ChildrenArmedForWake = ChildrenArmedForWake;
  return FxPrePostCallback::InvokeStateful(this, Progress, FxCxCleanupAfterPreFailure);
}
