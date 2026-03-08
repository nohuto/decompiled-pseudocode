/*
 * XREFs of PpmBeginHighPerfRequest @ 0x1402B8BBC
 * Callers:
 *     PopSwitchUpdateUserShutdownScenarioState @ 0x14067EF08 (PopSwitchUpdateUserShutdownScenarioState.c)
 *     PopSetupHighPerfPowerRequest @ 0x140810204 (PopSetupHighPerfPowerRequest.c)
 *     PopIssueActionRequest @ 0x140986CA4 (PopIssueActionRequest.c)
 *     PoInitializeBroadcast @ 0x140988BE4 (PoInitializeBroadcast.c)
 *     PdcPoPerfOverride @ 0x1409949A8 (PdcPoPerfOverride.c)
 * Callees:
 *     PopPowerRequestReferenceAcquire @ 0x1402BBDF0 (PopPowerRequestReferenceAcquire.c)
 */

__int64 PpmBeginHighPerfRequest()
{
  if ( PpmHighPerfPowerRequest )
    return PopPowerRequestReferenceAcquire(PpmHighPerfPowerRequest);
  else
    return 3221225473LL;
}
