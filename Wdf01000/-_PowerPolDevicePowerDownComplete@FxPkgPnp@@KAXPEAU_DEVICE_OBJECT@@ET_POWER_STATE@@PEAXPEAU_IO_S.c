void __fastcall FxPkgPnp::_PowerPolDevicePowerDownComplete(
        _DEVICE_OBJECT *DeviceObject,
        unsigned __int8 MinorFunction,
        _POWER_STATE PowerState,
        FxPkgPnp *Context)
{
  unsigned __int8 v5; // r8

  if ( Context->m_PowerMachine.m_PowerDownFailure )
  {
    Context->m_PowerMachine.m_PowerDownFailure = 0;
    FxPkgPnp::PowerPolicyProcessEvent(Context, PwrPolPowerDownFailed, PowerState.SystemState);
    if ( !Context->m_ReleaseHardwareAfterDescendantsOnFailure )
      FxPkgPnp::PnpProcessEvent(Context, PnpEventPowerDownFailed, v5);
  }
  else
  {
    FxPkgPnp::PowerPolicyProcessEvent(Context, PwrPolPowerDown, PowerState.SystemState);
  }
}
