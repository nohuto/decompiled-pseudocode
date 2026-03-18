/*
 * XREFs of PopFxDebuggerPowerCriticalTransitionCallback @ 0x1405D9310
 * Callers:
 *     <none>
 * Callees:
 *     KdPowerTransitionEx @ 0x1403DA590 (KdPowerTransitionEx.c)
 *     KdCallPowerHandlers @ 0x140565198 (KdCallPowerHandlers.c)
 *     PopFxBugCheck @ 0x1405CAE6C (PopFxBugCheck.c)
 */

__int64 __fastcall PopFxDebuggerPowerCriticalTransitionCallback(__int64 a1, __int64 a2, char a3)
{
  if ( PopAutomaticDebuggerTransitions )
    PopFxBugCheck(0x61EuLL, 0LL, 0LL, 0LL);
  if ( a3 )
  {
    KdCallPowerHandlers(1u);
    return KdPowerTransitionEx(-2147483647, 1);
  }
  else
  {
    KdPowerTransitionEx(-2147483644, 1);
    return KdCallPowerHandlers(4u);
  }
}
