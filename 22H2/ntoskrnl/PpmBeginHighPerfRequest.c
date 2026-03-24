/*
 * XREFs of PpmBeginHighPerfRequest @ 0x1403A72D0
 * Callers:
 *     PoUserShutdownInitiated @ 0x140776090 (PoUserShutdownInitiated.c)
 *     PopIssueActionRequest @ 0x140776468 (PopIssueActionRequest.c)
 *     PoInitializeBroadcast @ 0x140778138 (PoInitializeBroadcast.c)
 *     PopSetupHighPerfPowerRequest @ 0x1407D4960 (PopSetupHighPerfPowerRequest.c)
 *     PdcPoPerfOverride @ 0x1408EF958 (PdcPoPerfOverride.c)
 * Callees:
 *     PoSetPowerRequestInternal @ 0x14034B170 (PoSetPowerRequestInternal.c)
 */

__int64 PpmBeginHighPerfRequest()
{
  if ( PpmHighPerfPowerRequest )
    return PoSetPowerRequestInternal(PpmHighPerfPowerRequest, 4u);
  else
    return 3221225473LL;
}
