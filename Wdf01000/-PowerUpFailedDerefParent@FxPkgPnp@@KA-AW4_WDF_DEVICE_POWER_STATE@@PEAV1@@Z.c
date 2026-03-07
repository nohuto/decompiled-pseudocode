__int64 __fastcall FxPkgPnp::PowerUpFailedDerefParent(FxPkgPnp *This)
{
  FxPkgPnp::SendEventToAllWakeInterrupts(This, WakeInterruptEventD0EntryFailed);
  FxPkgPnp::NotifyResourceObjectsDx(This, 0x24u);
  return 829LL;
}
