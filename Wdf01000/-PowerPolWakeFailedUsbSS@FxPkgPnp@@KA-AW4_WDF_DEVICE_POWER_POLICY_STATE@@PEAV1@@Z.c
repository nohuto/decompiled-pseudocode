__int64 __fastcall FxPkgPnp::PowerPolWakeFailedUsbSS(FxPkgPnp *This)
{
  FxPowerPolicyOwnerSettings *m_Owner; // rcx
  FxPowerPolicyOwnerSettings *v3; // rcx

  m_Owner = This->m_PowerPolicyMachine.m_Owner;
  if ( m_Owner )
    _InterlockedCompareExchange((volatile signed __int32 *)&m_Owner->m_DevicePowerIrpTracker.m_D0IrpReasonHint, 15, 5);
  v3 = This->m_PowerPolicyMachine.m_Owner;
  if ( v3->m_IdleSettings.UsbSSCapable )
    KeSetEvent((PRKEVENT)v3->m_UsbIdle->m_IdleCallbackEvent, 0, 0);
  FxPowerIdleMachine::DisableTimer(&This->m_PowerPolicyMachine.m_Owner->m_PowerIdleMachine);
  return FxPkgPnp::PowerPolicyCancelUsbSSIfCapable(This) != 0 ? 1472 : 1345;
}
