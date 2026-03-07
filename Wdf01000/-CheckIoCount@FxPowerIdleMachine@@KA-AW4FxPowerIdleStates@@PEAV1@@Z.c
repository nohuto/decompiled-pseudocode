__int64 __fastcall FxPowerIdleMachine::CheckIoCount(FxPowerIdleMachine *This)
{
  This->m_Flags |= 1u;
  return This->m_IoCount != 0 ? 7 : 9;
}
