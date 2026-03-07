__int64 __fastcall FxPowerIdleMachine::StartTimer(FxPowerIdleMachine *This)
{
  _LARGE_INTEGER m_PowerTimeout; // rdx

  m_PowerTimeout = This->m_PowerTimeout;
  This->m_Flags |= 8u;
  MxTimer::Start(&This->m_PowerTimeoutTimer, m_PowerTimeout, 0x64u);
  return 10LL;
}
