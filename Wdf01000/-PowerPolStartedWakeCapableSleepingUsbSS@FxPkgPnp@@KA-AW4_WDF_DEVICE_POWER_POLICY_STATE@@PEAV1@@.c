__int64 __fastcall FxPkgPnp::PowerPolStartedWakeCapableSleepingUsbSS(FxPkgPnp *This)
{
  FxPowerIdleMachine::DisableTimer(&This->m_PowerPolicyMachine.m_Owner->m_PowerIdleMachine);
  IoCancelIrp(This->m_PowerPolicyMachine.m_Owner->m_UsbIdle->m_IdleIrp.m_Irp);
  return 1472LL;
}
