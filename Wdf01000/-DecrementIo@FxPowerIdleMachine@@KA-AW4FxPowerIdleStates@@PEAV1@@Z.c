__int64 __fastcall FxPowerIdleMachine::DecrementIo(FxPowerIdleMachine *This)
{
  return This->m_IoCount != 0 ? 7 : 9;
}
