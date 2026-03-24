/*
 * XREFs of PpmBeginHighPerfRequest @ 0x1403A79D0
 * Callers:
 *     PoUserShutdownInitiated @ 0x140775630 (PoUserShutdownInitiated.c)
 *     PopIssueActionRequest @ 0x140775A08 (PopIssueActionRequest.c)
 *     PoInitializeBroadcast @ 0x140778238 (PoInitializeBroadcast.c)
 *     PopSetupHighPerfPowerRequest @ 0x1407D4A40 (PopSetupHighPerfPowerRequest.c)
 *     PdcPoPerfOverride @ 0x1408EF908 (PdcPoPerfOverride.c)
 * Callees:
 *     PoSetPowerRequestInternal @ 0x140282160 (PoSetPowerRequestInternal.c)
 */

__int64 PpmBeginHighPerfRequest()
{
  if ( PpmHighPerfPowerRequest )
    return PoSetPowerRequestInternal(PpmHighPerfPowerRequest, 4u);
  else
    return 3221225473LL;
}
