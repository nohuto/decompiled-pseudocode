/*
 * XREFs of ?Disabled@FxPowerIdleMachine@@KA?AW4FxPowerIdleStates@@PEAV1@@Z @ 0x1C0009860
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FxPowerIdleMachine::Disabled(FxPowerIdleMachine *This)
{
  This->m_Flags &= ~1u;
  return 35LL;
}
