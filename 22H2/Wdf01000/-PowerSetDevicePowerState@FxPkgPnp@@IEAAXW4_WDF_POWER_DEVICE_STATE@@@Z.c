/*
 * XREFs of ?PowerSetDevicePowerState@FxPkgPnp@@IEAAXW4_WDF_POWER_DEVICE_STATE@@@Z @ 0x1C0011174
 * Callers:
 *     ?PowerStartSelfManagedIoNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C000E0B0 (-PowerStartSelfManagedIoNP@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerStartSelfManagedIo@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C00111E0 (-PowerStartSelfManagedIo@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerGotoDxIoStoppedCommon@FxPkgPnp@@IEAAEE@Z @ 0x1C001C28C (-PowerGotoDxIoStoppedCommon@FxPkgPnp@@IEAAEE@Z.c)
 *     ?PowerConnectInterruptFailed@FxPkgPnp@@IEAAXXZ @ 0x1C007D5CC (-PowerConnectInterruptFailed@FxPkgPnp@@IEAAXXZ.c)
 *     ?PowerD0StartingStartSelfManagedIo@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C007D8A0 (-PowerD0StartingStartSelfManagedIo@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerGotoD3Stopped@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C007DBE0 (-PowerGotoD3Stopped@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerPowerFailedPowerDown@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C007E2A0 (-PowerPowerFailedPowerDown@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FxPkgPnp::PowerSetDevicePowerState(FxPkgPnp *this, int State)
{
  POWER_STATE v2; // r8d

  this->m_DevicePowerStateOld = this->m_DevicePowerState;
  this->m_DevicePowerState = State;
  if ( State == 1 )
  {
    this->m_SystemPowerAction = 0;
LABEL_3:
    v2.SystemState = State;
    goto LABEL_4;
  }
  v2.SystemState = PowerSystemSleeping3;
  if ( State <= 4 || State > 6 )
    goto LABEL_3;
LABEL_4:
  PoSetPowerState(this->m_DeviceBase->m_DeviceObject.m_DeviceObject, DevicePowerState, v2);
}
