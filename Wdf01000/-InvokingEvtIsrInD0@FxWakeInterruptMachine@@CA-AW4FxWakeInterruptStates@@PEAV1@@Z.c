__int64 __fastcall FxWakeInterruptMachine::InvokingEvtIsrInD0(FxWakeInterruptMachine *This, _FX_DRIVER_GLOBALS *a2)
{
  FxInterrupt::InvokeWakeInterruptEvtIsr(This->m_Interrupt, a2);
  KeSetEvent(&This->m_IsrEvent.m_Event, 0, 0);
  return 2LL;
}
