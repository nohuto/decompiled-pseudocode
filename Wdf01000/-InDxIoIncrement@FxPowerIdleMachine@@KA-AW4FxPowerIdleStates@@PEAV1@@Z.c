__int64 __fastcall FxPowerIdleMachine::InDxIoIncrement(FxPowerIdleMachine *This, __int64 a2, unsigned __int8 a3)
{
  const void *_a1; // rax
  __int64 v5; // r10

  if ( (This->m_Flags & 0x40) != 0 )
  {
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked((FxObject *)This[2].m_TagTracker->m_TagHistory[0].Tag);
    WPP_IFR_SF_q(*(_FX_DRIVER_GLOBALS **)(v5 + 16), 4u, 0xCu, 0xBu, WPP_PowerIdleStateMachine_cpp_Traceguids, _a1);
  }
  else
  {
    FxPkgPnp::PowerPolicyProcessEvent((FxPkgPnp *)This[2].m_TagTracker, PwrPolIoPresent, a3);
    This->m_Flags |= 0x40u;
  }
  return 17LL;
}
