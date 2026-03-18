/*
 * XREFs of ?PowerPolDisarmingWakeForSystemSleepCompletePowerUp@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C0086AC0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsPdo@FxDevice@@QEAAEXZ @ 0x1C00019B8 (-IsPdo@FxDevice@@QEAAEXZ.c)
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@E@Z @ 0x1C0011530 (-PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@E@Z.c)
 *     ?Invoke@FxPowerDeviceDisarmWakeFromS0@@QEAAJPEAUWDFDEVICE__@@@Z @ 0x1C001BB54 (-Invoke@FxPowerDeviceDisarmWakeFromS0@@QEAAJPEAUWDFDEVICE__@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D510 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolDisarmingWakeForSystemSleepCompletePowerUp(FxPkgPnp *This)
{
  FxDeviceBase *m_DeviceBase; // r8
  WDFDEVICE__ *ObjectHandleUnchecked; // rax

  if ( FxDevice::IsPdo(This->m_Device) )
  {
    This->PowerDisableWakeAtBusOverload(This);
    m_DeviceBase = This->m_DeviceBase;
  }
  ObjectHandleUnchecked = (WDFDEVICE__ *)FxObject::GetObjectHandleUnchecked(m_DeviceBase);
  FxPowerDeviceDisarmWakeFromS0::Invoke(
    (FxPowerDeviceWakeFromSxTriggered *)&This->m_PowerPolicyMachine.m_Owner->m_DeviceDisarmWakeFromS0,
    ObjectHandleUnchecked);
  FxPkgPnp::PowerProcessEvent(This, 0x800u, 0);
  return 1472LL;
}
