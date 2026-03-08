/*
 * XREFs of ?RegisterPowerPolicyCallbacks@FxPkgPnp@@QEAAXPEAU_WDF_POWER_POLICY_EVENT_CALLBACKS@@@Z @ 0x1C00754E0
 * Callers:
 *     ?Initialize@FxPkgPnp@@UEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C0073160 (-Initialize@FxPkgPnp@@UEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FxPkgPnp::RegisterPowerPolicyCallbacks(FxPkgPnp *this, _WDF_POWER_POLICY_EVENT_CALLBACKS *Callbacks)
{
  FxPowerPolicyOwnerSettings *m_Owner; // r9
  int (__fastcall *EvtDeviceArmWakeFromSxWithReason)(WDFDEVICE__ *, unsigned __int8, unsigned __int8); // r8

  m_Owner = this->m_PowerPolicyMachine.m_Owner;
  m_Owner->m_DeviceArmWakeFromS0.m_Method = Callbacks->EvtDeviceArmWakeFromS0;
  m_Owner->m_DeviceArmWakeFromS0.m_PkgPnp = this;
  m_Owner->m_DeviceArmWakeFromS0.m_CallbackType = FxCxCallbackArmWakeFromS0;
  EvtDeviceArmWakeFromSxWithReason = Callbacks->EvtDeviceArmWakeFromSxWithReason;
  m_Owner->m_DeviceArmWakeFromSx.m_Method = Callbacks->EvtDeviceArmWakeFromSx;
  m_Owner->m_DeviceArmWakeFromSx.m_MethodWithReason = EvtDeviceArmWakeFromSxWithReason;
  m_Owner->m_DeviceArmWakeFromSx.m_PkgPnp = this;
  m_Owner->m_DeviceArmWakeFromSx.m_CallbackType = FxCxCallbackArmWakeFromSxWithReason;
  m_Owner->m_DeviceDisarmWakeFromS0.m_Method = Callbacks->EvtDeviceDisarmWakeFromS0;
  m_Owner->m_DeviceDisarmWakeFromS0.m_PkgPnp = this;
  m_Owner->m_DeviceDisarmWakeFromS0.m_CallbackType = FxCxCallbackDisarmWakeFromS0;
  m_Owner->m_DeviceDisarmWakeFromSx.m_Method = Callbacks->EvtDeviceDisarmWakeFromSx;
  m_Owner->m_DeviceDisarmWakeFromSx.m_PkgPnp = this;
  m_Owner->m_DeviceDisarmWakeFromSx.m_CallbackType = FxCxCallbackDisarmWakeFromSx;
  m_Owner->m_DeviceWakeFromS0Triggered.m_Method = Callbacks->EvtDeviceWakeFromS0Triggered;
  m_Owner->m_DeviceWakeFromS0Triggered.m_PkgPnp = this;
  m_Owner->m_DeviceWakeFromS0Triggered.m_CallbackType = FxCxCallbackWakeFromS0Triggered;
  m_Owner->m_DeviceWakeFromSxTriggered.m_Method = Callbacks->EvtDeviceWakeFromSxTriggered;
  m_Owner->m_DeviceWakeFromSxTriggered.m_PkgPnp = this;
  m_Owner->m_DeviceWakeFromSxTriggered.m_CallbackType = FxCxCallbackWakeFromSxTriggered;
}
