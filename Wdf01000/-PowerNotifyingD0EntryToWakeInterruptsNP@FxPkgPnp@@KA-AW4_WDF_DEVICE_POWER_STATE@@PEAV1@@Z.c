__int64 __fastcall FxPkgPnp::PowerNotifyingD0EntryToWakeInterruptsNP(FxPkgPnp *This)
{
  if ( !This->m_WakeInterruptCount )
    return 33590LL;
  FxPkgPnp::SendEventToAllWakeInterrupts(This, WakeInterruptEventEnteringD0);
  return 873LL;
}
