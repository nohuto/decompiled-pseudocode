__int64 __fastcall FxPkgPnp::PnpEventHardwareAvailable(FxPkgPnp *This)
{
  FxPkgPnp_vtbl *v1; // rax
  unsigned __int8 v3; // r8
  __int64 result; // rax
  signed int _a1; // eax
  int v6; // edi
  unsigned __int8 matched; // [rsp+40h] [rbp+8h] BYREF
  FxCxCallbackProgress progress; // [rsp+48h] [rbp+10h] BYREF

  v1 = This->__vftable;
  progress = FxCxCallbackProgressInitialized;
  matched = 0;
  if ( v1->QueryForReenumerationInterface(This) < 0 || FxPkgPnp::CreatePowerThreadIfNeeded(This) < 0 )
    return 303LL;
  if ( FxPkgPnp::PnpPrepareHardware(This, &matched, &progress) < 0 )
  {
    if ( matched )
      return progress == FxCxCallbackProgressInitialized ? 303 : 298;
    return 303LL;
  }
  if ( This->m_PowerPolicyMachine.m_Owner )
  {
    _a1 = FxPkgPnp::QueryForCapabilities(This);
    v6 = _a1;
    if ( _a1 < 0 )
    {
      WPP_IFR_SF_D(This->m_Globals, 2u, 0xCu, 0xFu, WPP_PnpStateMachine_cpp_Traceguids, _a1);
      result = 298LL;
      This->m_PendingPnPIrp->IoStatus.Status = v6;
      return result;
    }
    This->m_CapsQueried = 1;
  }
  FxPkgPnp::PowerPolicyProcessEvent(This, PwrPolStart, v3);
  return 314LL;
}
