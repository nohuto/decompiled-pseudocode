__int64 __fastcall FxPowerIdleMachine::StartedPowerFailed(FxPowerIdleMachine *This)
{
  This->m_Flags |= 0x10u;
  FxPowerIdleMachine::SendD0Notification(This);
  return 35LL;
}
