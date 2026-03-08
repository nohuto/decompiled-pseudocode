/*
 * XREFs of ?InDxPowerUpFailure@FxPowerIdleMachine@@KA?AW4FxPowerIdleStates@@PEAV1@@Z @ 0x1C00098E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FxPowerIdleMachine::InDxPowerUpFailure(FxPowerIdleMachine *This)
{
  This->m_Flags &= 0xBDu;
  return 34LL;
}
