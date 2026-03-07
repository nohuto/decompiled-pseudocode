__int64 __fastcall FxPowerIdleMachine::TimerExpired(FxPowerIdleMachine *This)
{
  This->m_Flags &= ~8u;
  return 6LL;
}
