__int64 __fastcall FxWakeInterruptMachine::Failed(FxWakeInterruptMachine *This)
{
  This->m_Claimed = 0;
  KeSetEvent(&This->m_IsrEvent.m_Event, 0, 0);
  return 10LL;
}
