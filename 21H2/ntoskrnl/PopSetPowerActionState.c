/*
 * XREFs of PopSetPowerActionState @ 0x140382B6C
 * Callers:
 *     PopExecutePowerAction @ 0x1407751C8 (PopExecutePowerAction.c)
 *     PopPolicyWorkerAction @ 0x140775870 (PopPolicyWorkerAction.c)
 *     PopPolicyWorkerActionPromote @ 0x14077A020 (PopPolicyWorkerActionPromote.c)
 *     PopTransitionSystemPowerStateEx @ 0x1409910F4 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PopDeepSleepSetDisengageReason @ 0x140281548 (PopDeepSleepSetDisengageReason.c)
 *     PopDeepSleepClearDisengageReason @ 0x1402815D0 (PopDeepSleepClearDisengageReason.c)
 */

__int64 __fastcall PopSetPowerActionState(char a1)
{
  __int64 result; // rax

  if ( byte_140C23441 != a1 )
  {
    byte_140C23441 = a1;
    if ( a1 )
      return PopDeepSleepSetDisengageReason(5u);
    else
      return PopDeepSleepClearDisengageReason(5u);
  }
  return result;
}
