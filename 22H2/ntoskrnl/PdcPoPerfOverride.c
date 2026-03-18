/*
 * XREFs of PdcPoPerfOverride @ 0x140997A58
 * Callers:
 *     PopPowerAggregatorEnterScreenOff @ 0x1408781A4 (PopPowerAggregatorEnterScreenOff.c)
 *     PopPowerAggregatorModernStandbyExitStateHandler @ 0x140993B90 (PopPowerAggregatorModernStandbyExitStateHandler.c)
 * Callees:
 *     PpmEndHighPerfRequest @ 0x14036E4A0 (PpmEndHighPerfRequest.c)
 *     PpmBeginHighPerfRequest @ 0x14036E924 (PpmBeginHighPerfRequest.c)
 *     PpmDisableHighPerfRequestDeferredExpiration @ 0x140597E20 (PpmDisableHighPerfRequestDeferredExpiration.c)
 */

__int64 PdcPoPerfOverride()
{
  PpmBeginHighPerfRequest();
  PpmDisableHighPerfRequestDeferredExpiration(0);
  return PpmEndHighPerfRequest(1);
}
