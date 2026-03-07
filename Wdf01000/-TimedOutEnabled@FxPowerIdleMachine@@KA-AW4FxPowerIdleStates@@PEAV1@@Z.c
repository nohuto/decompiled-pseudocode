__int64 __fastcall FxPowerIdleMachine::TimedOutEnabled(FxPowerIdleMachine *This)
{
  FxPowerIdleMachine::SendD0Notification(This);
  This->m_Flags &= ~0x40u;
  return 6LL;
}
