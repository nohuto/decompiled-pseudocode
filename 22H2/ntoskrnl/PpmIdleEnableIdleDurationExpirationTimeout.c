/*
 * XREFs of PpmIdleEnableIdleDurationExpirationTimeout @ 0x140566938
 * Callers:
 *     PopInitializeHeteroProcessors @ 0x1407BB3CC (PopInitializeHeteroProcessors.c)
 * Callees:
 *     <none>
 */

void PpmIdleEnableIdleDurationExpirationTimeout()
{
  PpmIdleDurationExpirationTimeout = (unsigned int)(10000 * PpmIdleDurationExpirationTimeoutMs);
}
