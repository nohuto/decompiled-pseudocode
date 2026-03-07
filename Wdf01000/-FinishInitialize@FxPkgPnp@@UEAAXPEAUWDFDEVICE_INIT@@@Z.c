void __fastcall FxPkgPnp::FinishInitialize(FxPkgPnp *this, WDFDEVICE_INIT *DeviceInit)
{
  FxPowerStateCallback *PowerStateCallbacks; // rax
  FxPowerPolicyStateCallback *PowerPolicyStateCallbacks; // rax

  this->m_PnpStateCallbacks = DeviceInit->PnpPower.PnpStateCallbacks;
  PowerStateCallbacks = DeviceInit->PnpPower.PowerStateCallbacks;
  DeviceInit->PnpPower.PnpStateCallbacks = 0LL;
  this->m_PowerStateCallbacks = PowerStateCallbacks;
  PowerPolicyStateCallbacks = DeviceInit->PnpPower.PowerPolicyStateCallbacks;
  DeviceInit->PnpPower.PowerStateCallbacks = 0LL;
  this->m_PowerPolicyStateCallbacks = PowerPolicyStateCallbacks;
  DeviceInit->PnpPower.PowerPolicyStateCallbacks = 0LL;
  this->m_PendingChildCount = 1;
  FxPkgPnp::PnpProcessEvent(this, PnpEventAddDevice, 0);
}
