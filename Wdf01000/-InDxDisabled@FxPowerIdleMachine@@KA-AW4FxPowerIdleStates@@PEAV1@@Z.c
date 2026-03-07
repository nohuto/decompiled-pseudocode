__int64 __fastcall FxPowerIdleMachine::InDxDisabled(FxPowerIdleMachine *This)
{
  This->m_Flags &= ~1u;
  return 17LL;
}
