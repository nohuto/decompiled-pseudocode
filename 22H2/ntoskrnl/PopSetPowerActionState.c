/*
 * XREFs of PopSetPowerActionState @ 0x140382C5C
 * Callers:
 *     PopExecutePowerAction @ 0x140775C28 (PopExecutePowerAction.c)
 *     PopPolicyWorkerAction @ 0x1407762D0 (PopPolicyWorkerAction.c)
 *     PopPolicyWorkerActionPromote @ 0x140779F20 (PopPolicyWorkerActionPromote.c)
 *     PopTransitionSystemPowerStateEx @ 0x1409918D8 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PopDeepSleepSetDisengageReason @ 0x14034A558 (PopDeepSleepSetDisengageReason.c)
 *     PopDeepSleepClearDisengageReason @ 0x14034A5E0 (PopDeepSleepClearDisengageReason.c)
 */

__int64 __fastcall PopSetPowerActionState(char a1)
{
  __int64 result; // rax

  if ( byte_140C23A41 != a1 )
  {
    byte_140C23A41 = a1;
    if ( a1 )
      return PopDeepSleepSetDisengageReason(5u);
    else
      return PopDeepSleepClearDisengageReason(5u);
  }
  return result;
}
