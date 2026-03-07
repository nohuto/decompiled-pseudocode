__int64 __fastcall FxPowerIdleMachine::TimedOutPowerDown(FxPowerIdleMachine *This)
{
  This->m_Flags &= ~0x40u;
  return 16LL;
}
