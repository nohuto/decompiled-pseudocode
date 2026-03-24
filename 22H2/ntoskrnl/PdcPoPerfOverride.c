/*
 * XREFs of PdcPoPerfOverride @ 0x1408EF958
 * Callers:
 *     PopPowerAggregatorModernStandbyExitStateHandler @ 0x1408EE5D0 (PopPowerAggregatorModernStandbyExitStateHandler.c)
 *     PopPowerAggregatorScreenOffExitStateHandler @ 0x1408EE9F0 (PopPowerAggregatorScreenOffExitStateHandler.c)
 * Callees:
 *     PpmEndHighPerfRequest @ 0x1403A6560 (PpmEndHighPerfRequest.c)
 *     PpmBeginHighPerfRequest @ 0x1403A72D0 (PpmBeginHighPerfRequest.c)
 *     PpmDisableHighPerfRequestDeferredExpiration @ 0x140576EF8 (PpmDisableHighPerfRequestDeferredExpiration.c)
 */

__int64 PdcPoPerfOverride()
{
  PpmBeginHighPerfRequest();
  PpmDisableHighPerfRequestDeferredExpiration(0);
  return PpmEndHighPerfRequest(1);
}
