/*
 * XREFs of ?CheckIoCount@FxPowerIdleMachine@@KA?AW4FxPowerIdleStates@@PEAV1@@Z @ 0x1C0077190
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FxPowerIdleMachine::CheckIoCount(FxPowerIdleMachine *This)
{
  This->m_Flags |= 1u;
  return This->m_IoCount != 0 ? 7 : 9;
}
