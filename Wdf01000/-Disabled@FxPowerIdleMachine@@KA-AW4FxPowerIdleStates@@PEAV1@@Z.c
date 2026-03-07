__int64 __fastcall FxPowerIdleMachine::Disabled(FxPowerIdleMachine *This)
{
  This->m_Flags &= ~1u;
  return 35LL;
}
