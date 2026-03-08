/*
 * XREFs of PopPowerRequestStatsNotifyScenarioStateChange @ 0x1408525EC
 * Callers:
 *     PopWnfAudioCallback @ 0x140852480 (PopWnfAudioCallback.c)
 *     PopPowerRequestNotifyMobileHotspotChanged @ 0x14097E708 (PopPowerRequestNotifyMobileHotspotChanged.c)
 * Callees:
 *     SleepstudyHelperBlockerActiveDereference @ 0x1402F1010 (SleepstudyHelperBlockerActiveDereference.c)
 *     SleepstudyHelperBlockerActiveReference @ 0x1402F1100 (SleepstudyHelperBlockerActiveReference.c)
 */

__int64 __fastcall PopPowerRequestStatsNotifyScenarioStateChange(int a1, char a2)
{
  __int64 result; // rax
  KSPIN_LOCK *v3; // rcx

  result = a1;
  v3 = (KSPIN_LOCK *)PopPowerRequestStatsScenarioBlockers[a1];
  if ( v3 )
  {
    if ( a2 )
      return SleepstudyHelperBlockerActiveReference(v3);
    else
      return SleepstudyHelperBlockerActiveDereference(v3);
  }
  return result;
}
