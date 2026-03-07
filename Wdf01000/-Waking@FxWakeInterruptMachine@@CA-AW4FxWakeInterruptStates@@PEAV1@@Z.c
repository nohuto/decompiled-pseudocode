__int64 __fastcall FxWakeInterruptMachine::Waking(FxWakeInterruptMachine *This, __int64 a2, unsigned __int8 a3)
{
  FxPkgPnp::PowerPolicyProcessEvent(This->m_PkgPnp, PwrPolWakeInterruptFired, a3);
  return 10LL;
}
