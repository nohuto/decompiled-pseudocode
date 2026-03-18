/*
 * XREFs of SleepstudyHelperBlockerActiveDereference @ 0x14032D460
 * Callers:
 *     PopPowerRequestStatsSetActive @ 0x1407A7AF8 (PopPowerRequestStatsSetActive.c)
 *     PopPowerRequestStatsNotifyScenarioStateChange @ 0x14085641C (PopPowerRequestStatsNotifyScenarioStateChange.c)
 * Callees:
 *     SshpBlockerActiveDereference @ 0x14032D47C (SshpBlockerActiveDereference.c)
 */

__int64 __fastcall SleepstudyHelperBlockerActiveDereference(KSPIN_LOCK *a1)
{
  return SshpBlockerActiveDereference(a1);
}
