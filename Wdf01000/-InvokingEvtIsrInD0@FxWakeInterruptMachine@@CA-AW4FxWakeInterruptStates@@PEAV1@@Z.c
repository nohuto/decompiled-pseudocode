/*
 * XREFs of ?InvokingEvtIsrInD0@FxWakeInterruptMachine@@CA?AW4FxWakeInterruptStates@@PEAV1@@Z @ 0x1C0082320
 * Callers:
 *     <none>
 * Callees:
 *     ?InvokeWakeInterruptEvtIsr@FxInterrupt@@QEAAXXZ @ 0x1C007F72C (-InvokeWakeInterruptEvtIsr@FxInterrupt@@QEAAXXZ.c)
 */

__int64 __fastcall FxWakeInterruptMachine::InvokingEvtIsrInD0(FxWakeInterruptMachine *This, _FX_DRIVER_GLOBALS *a2)
{
  FxInterrupt::InvokeWakeInterruptEvtIsr(This->m_Interrupt, a2);
  KeSetEvent(&This->m_IsrEvent.m_Event, 0, 0);
  return 2LL;
}
