/*
 * XREFs of KdPowerTransition @ 0x1405655B0
 * Callers:
 *     PopSaveHiberContext @ 0x140AA1810 (PopSaveHiberContext.c)
 *     PopHandleNextState @ 0x140AA4FAC (PopHandleNextState.c)
 * Callees:
 *     KdPowerTransitionEx @ 0x1403A7D80 (KdPowerTransitionEx.c)
 */

__int64 __fastcall KdPowerTransition(int a1)
{
  return KdPowerTransitionEx(a1, 1);
}
