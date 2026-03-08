/*
 * XREFs of ?Failed@FxWakeInterruptMachine@@CA?AW4FxWakeInterruptStates@@PEAV1@@Z @ 0x1C00822E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FxWakeInterruptMachine::Failed(FxWakeInterruptMachine *This)
{
  This->m_Claimed = 0;
  KeSetEvent(&This->m_IsrEvent.m_Event, 0, 0);
  return 10LL;
}
