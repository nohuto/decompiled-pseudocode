/*
 * XREFs of PpmIdleEnableIdleDurationExpirationTimeout @ 0x14045DCDA
 * Callers:
 *     PopInitializeHeteroProcessors @ 0x140849B04 (PopInitializeHeteroProcessors.c)
 * Callees:
 *     <none>
 */

void PpmIdleEnableIdleDurationExpirationTimeout()
{
  PpmIdleDurationExpirationTimeout = (unsigned int)(10000 * PpmIdleDurationExpirationTimeoutMs);
}
