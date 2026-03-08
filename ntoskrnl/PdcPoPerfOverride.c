/*
 * XREFs of PdcPoPerfOverride @ 0x1409949A8
 * Callers:
 *     PopPowerAggregatorEnterScreenOff @ 0x140879524 (PopPowerAggregatorEnterScreenOff.c)
 *     PopPowerAggregatorModernStandbyExitStateHandler @ 0x140990AE0 (PopPowerAggregatorModernStandbyExitStateHandler.c)
 * Callees:
 *     PpmEndHighPerfRequest @ 0x1402B884C (PpmEndHighPerfRequest.c)
 *     PpmBeginHighPerfRequest @ 0x1402B8BBC (PpmBeginHighPerfRequest.c)
 *     PpmDisableHighPerfRequestDeferredExpiration @ 0x140595900 (PpmDisableHighPerfRequestDeferredExpiration.c)
 */

__int64 PdcPoPerfOverride()
{
  PpmBeginHighPerfRequest();
  PpmDisableHighPerfRequestDeferredExpiration(0);
  return PpmEndHighPerfRequest(1);
}
