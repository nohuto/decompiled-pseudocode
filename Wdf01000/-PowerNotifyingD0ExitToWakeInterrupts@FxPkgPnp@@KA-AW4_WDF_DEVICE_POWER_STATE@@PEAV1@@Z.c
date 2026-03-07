__int64 __fastcall FxPkgPnp::PowerNotifyingD0ExitToWakeInterrupts(FxPkgPnp *This)
{
  FxWakeInterruptEvents v2; // edx

  if ( !This->m_WakeInterruptCount )
    return 796LL;
  if ( This->m_WakeInterruptsKeepConnected == 1
    || (v2 = WakeInterruptEventLeavingD0NotArmedForWake, This->m_SharedPower.m_WaitWakeIrp) )
  {
    v2 = WakeInterruptEventLeavingD0;
  }
  FxPkgPnp::SendEventToAllWakeInterrupts(This, v2);
  return 873LL;
}
