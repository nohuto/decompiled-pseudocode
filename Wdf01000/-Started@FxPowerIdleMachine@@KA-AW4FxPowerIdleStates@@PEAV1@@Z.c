__int64 __fastcall FxPowerIdleMachine::Started(FxPowerIdleMachine *This)
{
  This->m_Flags |= 0x20u;
  KeClearEvent(&This->m_D0NotificationEvent.m_Event.m_Event);
  return 35LL;
}
