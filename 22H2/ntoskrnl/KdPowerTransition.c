/*
 * XREFs of KdPowerTransition @ 0x140510EE0
 * Callers:
 *     PopHandleNextState @ 0x1409938B0 (PopHandleNextState.c)
 *     PopSaveHiberContext @ 0x140993F80 (PopSaveHiberContext.c)
 * Callees:
 *     KdPowerTransitionEx @ 0x140510F00 (KdPowerTransitionEx.c)
 */

__int64 __fastcall KdPowerTransition(__int64 a1, __int64 a2)
{
  LOBYTE(a2) = 1;
  return KdPowerTransitionEx(a1, a2);
}
