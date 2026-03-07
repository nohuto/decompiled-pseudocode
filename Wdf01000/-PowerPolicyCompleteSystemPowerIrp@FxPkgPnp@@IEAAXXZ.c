void __fastcall FxPkgPnp::PowerPolicyCompleteSystemPowerIrp(FxPkgPnp *this)
{
  _IRP *_a1; // r8
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  FxIrp irp; // [rsp+50h] [rbp+8h] BYREF

  _a1 = this->m_PendingSystemPowerIrp;
  irp.m_Irp = _a1;
  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_qdd(
      m_Globals,
      5u,
      0xCu,
      0x2Bu,
      WPP_PowerPolicyStateMachine_cpp_Traceguids,
      _a1,
      _a1->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.LowPart - 1,
      0);
  this->m_PendingSystemPowerIrp = 0LL;
  FxPkgPnp::CompletePowerRequest(this, &irp, 0);
}
