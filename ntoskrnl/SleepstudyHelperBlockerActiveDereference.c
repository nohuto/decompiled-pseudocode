/*
 * XREFs of SleepstudyHelperBlockerActiveDereference @ 0x1402F1010
 * Callers:
 *     PopPowerRequestStatsSetActive @ 0x14073BEE8 (PopPowerRequestStatsSetActive.c)
 *     PopPowerRequestStatsNotifyScenarioStateChange @ 0x1408525EC (PopPowerRequestStatsNotifyScenarioStateChange.c)
 * Callees:
 *     SshpBlockerActiveDereference @ 0x1402F102C (SshpBlockerActiveDereference.c)
 */

__int64 __fastcall SleepstudyHelperBlockerActiveDereference(KSPIN_LOCK *a1)
{
  return SshpBlockerActiveDereference(a1);
}
