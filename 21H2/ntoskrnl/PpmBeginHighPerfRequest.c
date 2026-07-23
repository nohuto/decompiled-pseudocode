/*
 * XREFs of PpmBeginHighPerfRequest @ 0x1403A7B20
 * Callers:
 *     PoUserShutdownInitiated @ 0x1407757F0 (PoUserShutdownInitiated.c)
 *     PopIssueActionRequest @ 0x140775BC8 (PopIssueActionRequest.c)
 *     PoInitializeBroadcast @ 0x1407783F8 (PoInitializeBroadcast.c)
 *     PopSetupHighPerfPowerRequest @ 0x1407D4BB0 (PopSetupHighPerfPowerRequest.c)
 *     PdcPoPerfOverride @ 0x1408EFA68 (PdcPoPerfOverride.c)
 * Callees:
 *     PoSetPowerRequestInternal @ 0x1402703A0 (PoSetPowerRequestInternal.c)
 */

__int64 PpmBeginHighPerfRequest()
{
  if ( PpmHighPerfPowerRequest )
    return PoSetPowerRequestInternal(PpmHighPerfPowerRequest, 4u);
  else
    return 3221225473LL;
}
