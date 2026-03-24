/*
 * XREFs of PpmIdleEnableIdleDurationExpirationTimeout @ 0x1405669F8
 * Callers:
 *     PopInitializeHeteroProcessors @ 0x1407BAC0C (PopInitializeHeteroProcessors.c)
 * Callees:
 *     <none>
 */

void PpmIdleEnableIdleDurationExpirationTimeout()
{
  PpmIdleDurationExpirationTimeout = (unsigned int)(10000 * PpmIdleDurationExpirationTimeoutMs);
}
