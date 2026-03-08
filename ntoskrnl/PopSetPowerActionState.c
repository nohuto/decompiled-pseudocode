/*
 * XREFs of PopSetPowerActionState @ 0x14058D024
 * Callers:
 *     PopExecutePowerAction @ 0x1409867F4 (PopExecutePowerAction.c)
 *     PopPolicyWorkerAction @ 0x140987130 (PopPolicyWorkerAction.c)
 *     PopPolicyWorkerActionPromote @ 0x140987320 (PopPolicyWorkerActionPromote.c)
 *     PopTransitionSystemPowerStateEx @ 0x140AA5F80 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PopDeepSleepClearDisengageReason @ 0x1402BBAAC (PopDeepSleepClearDisengageReason.c)
 *     PopDeepSleepSetDisengageReason @ 0x1402BBB98 (PopDeepSleepSetDisengageReason.c)
 */

__int64 __fastcall PopSetPowerActionState(char a1)
{
  __int64 result; // rax

  if ( byte_140C3CD61 != a1 )
  {
    byte_140C3CD61 = a1;
    if ( a1 )
      return PopDeepSleepSetDisengageReason(5u);
    else
      return PopDeepSleepClearDisengageReason(5u);
  }
  return result;
}
