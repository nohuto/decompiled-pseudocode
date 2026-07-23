/*
 * XREFs of PopFxDebuggerPowerCriticalTransitionCallback @ 0x140579480
 * Callers:
 *     <none>
 * Callees:
 *     KdCallPowerHandlers @ 0x140510DC4 (KdCallPowerHandlers.c)
 *     KdPowerTransitionEx @ 0x140511200 (KdPowerTransitionEx.c)
 *     PopFxBugCheck @ 0x14056962C (PopFxBugCheck.c)
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
