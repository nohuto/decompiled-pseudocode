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
