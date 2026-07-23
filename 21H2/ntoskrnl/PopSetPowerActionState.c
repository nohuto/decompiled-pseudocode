/*
 * XREFs of PopSetPowerActionState @ 0x140382D1C
 * Callers:
 *     PopExecutePowerAction @ 0x140775388 (PopExecutePowerAction.c)
 *     PopPolicyWorkerAction @ 0x140775A30 (PopPolicyWorkerAction.c)
 *     PopPolicyWorkerActionPromote @ 0x14077A1E0 (PopPolicyWorkerActionPromote.c)
 *     PopTransitionSystemPowerStateEx @ 0x1409920F4 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PopDeepSleepSetDisengageReason @ 0x14026F788 (PopDeepSleepSetDisengageReason.c)
 *     PopDeepSleepClearDisengageReason @ 0x14026F810 (PopDeepSleepClearDisengageReason.c)
 */

__int64 __fastcall PopSetPowerActionState(char a1)
{
  __int64 result; // rax

  if ( byte_140C23A61 != a1 )
  {
    byte_140C23A61 = a1;
    if ( a1 )
      return PopDeepSleepSetDisengageReason(5u);
    else
      return PopDeepSleepClearDisengageReason(5u);
  }
  return result;
}
