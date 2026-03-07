const NOT_POWER_POLICY_OWNER_STATE_TABLE *__fastcall FxPkgPnp::GetNotPowerPolicyOwnerTableEntry(
        _WDF_DEVICE_POWER_POLICY_STATE State)
{
  int v1; // r8d
  const NOT_POWER_POLICY_OWNER_STATE_TABLE *result; // rax
  _WDF_DEVICE_POWER_POLICY_STATE CurrentTargetState; // edx

  v1 = 0;
  result = FxPkgPnp::m_WdfNotPowerPolicyOwnerStates;
  CurrentTargetState = WdfDevStatePwrPolObjectCreated;
  while ( CurrentTargetState != State )
  {
    result = &FxPkgPnp::m_WdfNotPowerPolicyOwnerStates[++v1];
    CurrentTargetState = result->CurrentTargetState;
    if ( result->CurrentTargetState == WdfDevStatePwrPolNull )
      return 0LL;
  }
  return result;
}
