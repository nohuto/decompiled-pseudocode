/*
 * XREFs of PoFxCompleteDirectedPowerDown @ 0x140585A10
 * Callers:
 *     <none>
 * Callees:
 *     PopFxDerefAndCompleteDirectedPowerTransition @ 0x1405876D8 (PopFxDerefAndCompleteDirectedPowerTransition.c)
 */

__int64 __fastcall PoFxCompleteDirectedPowerDown(ULONG_PTR a1)
{
  return PopFxDerefAndCompleteDirectedPowerTransition(a1);
}
