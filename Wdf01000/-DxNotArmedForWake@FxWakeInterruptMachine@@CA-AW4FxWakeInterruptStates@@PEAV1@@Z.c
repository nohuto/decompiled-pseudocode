__int64 __fastcall FxWakeInterruptMachine::DxNotArmedForWake(FxWakeInterruptMachine *This)
{
  FxPkgPnp::AckPendingWakeInterruptOperation(This->m_PkgPnp, 1u);
  return 10LL;
}
