void __fastcall FxPkgPnp::SetDeviceFailed(
        FxPkgPnp *this,
        _FX_DRIVER_GLOBALS *CallerFxDriverGlobals,
        _WDF_DEVICE_FAILED_ACTION FailedAction)
{
  bool IsVersionGreaterThanOrEqualTo; // al
  FxPkgPnp *v4; // r10
  int v5; // r9d

  IsVersionGreaterThanOrEqualTo = _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(
                                    CallerFxDriverGlobals,
                                    (unsigned int)CallerFxDriverGlobals,
                                    0x17u);
  v4->m_FailedAction = v5;
  v4->m_Failed = 1;
  if ( v5 == 1 )
    FxPkgPnp::SetDeviceFailedAttemptRestart(v4, !IsVersionGreaterThanOrEqualTo);
  else
    FxPkgPnp::InvalidateDeviceState(v4);
}
