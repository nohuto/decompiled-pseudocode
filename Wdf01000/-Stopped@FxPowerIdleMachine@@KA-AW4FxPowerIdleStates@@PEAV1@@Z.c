__int64 __fastcall FxPowerIdleMachine::Stopped(FxPowerIdleMachine *This)
{
  This->m_Flags &= ~0x20u;
  return 35LL;
}
