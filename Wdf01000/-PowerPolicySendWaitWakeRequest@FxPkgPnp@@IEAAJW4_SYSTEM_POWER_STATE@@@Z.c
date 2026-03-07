__int64 __fastcall FxPkgPnp::PowerPolicySendWaitWakeRequest(FxPkgPnp *this, POWER_STATE SystemState)
{
  FxPowerPolicyOwnerSettings *m_Owner; // rax
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  int _a1; // esi
  NTSTATUS _a2; // eax
  unsigned int v8; // edi

  this->m_PowerPolicyMachine.m_Owner->m_RequestedWaitWakeIrp = 1;
  m_Owner = this->m_PowerPolicyMachine.m_Owner;
  this->m_SystemWokenByWakeInterrupt = 0;
  m_Owner->m_WakeCompletionEventDropped = 0;
  m_Globals = this->m_Globals;
  _a1 = SystemState.SystemState - 1;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_D(m_Globals, 5u, 0xCu, 0x29u, WPP_PowerPolicyStateMachine_cpp_Traceguids, SystemState.SystemState - 1);
  _a2 = PoRequestPowerIrp(
          this->m_DeviceBase->m_DeviceObject.m_DeviceObject,
          0,
          SystemState,
          FxPkgPnp::_PowerPolDeviceWaitWakeComplete,
          this,
          0LL);
  v8 = _a2;
  if ( _a2 < 0 )
  {
    WPP_IFR_SF_dd(this->m_Globals, 2u, 0xCu, 0x2Au, WPP_PowerPolicyStateMachine_cpp_Traceguids, _a1, _a2);
    this->m_PowerPolicyMachine.m_Owner->m_RequestedWaitWakeIrp = 0;
  }
  return v8;
}
