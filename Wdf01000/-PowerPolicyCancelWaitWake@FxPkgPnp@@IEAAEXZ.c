char __fastcall FxPkgPnp::PowerPolicyCancelWaitWake(FxPkgPnp *this)
{
  char v2; // di
  _IRP *_a1; // rsi
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  BOOLEAN v5; // al
  _FX_DRIVER_GLOBALS *v6; // rcx
  FxIrp irp; // [rsp+50h] [rbp+8h] BYREF

  if ( this->m_SharedPower.m_WaitWakeOwner )
    return FxPkgPnp::PowerIndicateWaitWakeStatus(this, -1073741536);
  _a1 = (_IRP *)_InterlockedExchange64((volatile __int64 *)&this->m_SharedPower, 0LL);
  m_Globals = this->m_Globals;
  if ( _a1 )
  {
    irp.m_Irp = _a1;
    if ( m_Globals->FxVerboseOn )
      WPP_IFR_SF_q(m_Globals, 5u, 0xCu, 0x2Cu, WPP_PowerPolicyStateMachine_cpp_Traceguids, _a1);
    v5 = IoCancelIrp(_a1);
    v6 = this->m_Globals;
    if ( v6->FxVerboseOn )
      WPP_IFR_SF_qd(v6, 5u, 0xCu, 0x2Du, WPP_PowerPolicyStateMachine_cpp_Traceguids, _a1, v5);
    v2 = 1;
    if ( _InterlockedExchange(&this->m_PowerPolicyMachine.m_Owner->m_WaitWakeCancelCompletionOwnership, 1) == 1 )
      FxPkgPnp::CompletePowerRequest(this, &irp, _a1->IoStatus.Status);
  }
  else
  {
    if ( m_Globals->FxVerboseOn )
      WPP_IFR_SF_(m_Globals, 5u, 0xCu, 0x2Eu, WPP_PowerPolicyStateMachine_cpp_Traceguids);
    return 0;
  }
  return v2;
}
