/*
 * XREFs of PopFxDebuggerPowerCriticalTransitionCallback @ 0x1405976B0
 * Callers:
 *     <none>
 * Callees:
 *     KdPowerTransitionEx @ 0x1403A7D80 (KdPowerTransitionEx.c)
 *     KdCallPowerHandlers @ 0x140564F44 (KdCallPowerHandlers.c)
 *     PopFxBugCheck @ 0x140586740 (PopFxBugCheck.c)
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
