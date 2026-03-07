void __fastcall FxPkgPnp::_PowerPolDevicePowerUpComplete(
        _DEVICE_OBJECT *DeviceObject,
        unsigned __int8 MinorFunction,
        _POWER_STATE PowerState,
        FxPkgPnp *Context)
{
  const void *_a1; // rax
  __int64 v6; // rdx
  unsigned __int8 v7; // r8

  if ( Context->m_PowerPolicyMachine.m_Owner->m_RequestedPowerUpIrp )
  {
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(Context->m_DeviceBase);
    WPP_IFR_SF_qq(
      Context->m_Globals,
      2u,
      0xCu,
      0x26u,
      WPP_PowerPolicyStateMachine_cpp_Traceguids,
      _a1,
      *(const void **)(v6 + 144));
    FxPkgPnp::PowerPolicyProcessEvent(Context, PwrPolPowerUpNotSeen, v7);
  }
}
