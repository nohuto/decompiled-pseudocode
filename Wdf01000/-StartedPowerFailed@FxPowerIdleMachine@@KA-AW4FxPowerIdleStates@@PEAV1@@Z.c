/*
 * XREFs of ?StartedPowerFailed@FxPowerIdleMachine@@KA?AW4FxPowerIdleStates@@PEAV1@@Z @ 0x1C00776A0
 * Callers:
 *     <none>
 * Callees:
 *     ?SendD0Notification@FxPowerIdleMachine@@IEAAXXZ @ 0x1C0077584 (-SendD0Notification@FxPowerIdleMachine@@IEAAXXZ.c)
 */

__int64 __fastcall FxPowerIdleMachine::StartedPowerFailed(FxPowerIdleMachine *This)
{
  This->m_Flags |= 0x10u;
  FxPowerIdleMachine::SendD0Notification(This);
  return 35LL;
}
