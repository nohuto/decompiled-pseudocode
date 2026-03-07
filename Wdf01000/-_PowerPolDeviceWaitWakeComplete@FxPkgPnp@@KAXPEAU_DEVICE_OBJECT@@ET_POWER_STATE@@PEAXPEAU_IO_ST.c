void __fastcall FxPkgPnp::_PowerPolDeviceWaitWakeComplete(
        _DEVICE_OBJECT *DeviceObject,
        unsigned __int8 MinorFunction,
        _POWER_STATE PowerState,
        FxPkgPnp *Context,
        _IO_STATUS_BLOCK *IoStatus)
{
  FxPowerPolicyEvent v5; // edx

  Context->m_PowerPolicyMachine.m_Owner->m_WaitWakeStatus = IoStatus->Status;
  v5 = PwrPolWakeSuccess;
  if ( IoStatus->Status < 0 )
    v5 = PwrPolWakeFailed;
  FxPkgPnp::PowerPolicyProcessEvent(Context, v5, PowerState.SystemState);
}
