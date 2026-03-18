/*
 * XREFs of PopSetPowerActionState @ 0x14038B860
 * Callers:
 *     PopExecutePowerAction @ 0x1407FEC6C (PopExecutePowerAction.c)
 *     PopPolicyWorkerAction @ 0x1407FF440 (PopPolicyWorkerAction.c)
 *     PopPolicyWorkerActionPromote @ 0x140808500 (PopPolicyWorkerActionPromote.c)
 *     PopTransitionSystemPowerStateEx @ 0x140A494E8 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PopDeepSleepSetDisengageReason @ 0x1402D5F7C (PopDeepSleepSetDisengageReason.c)
 *     PopDeepSleepClearDisengageReason @ 0x1402D6004 (PopDeepSleepClearDisengageReason.c)
 */

__int64 __fastcall PopSetPowerActionState(char a1)
{
  __int64 result; // rax

  if ( byte_140C227C1 != a1 )
  {
    byte_140C227C1 = a1;
    if ( a1 )
      return PopDeepSleepSetDisengageReason(5u);
    else
      return PopDeepSleepClearDisengageReason(5u);
  }
  return result;
}
