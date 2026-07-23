/*
 * XREFs of PopReleasePowerRequestPushLock @ 0x14066F86C
 * Callers:
 *     PoClearPowerRequestInternal @ 0x1402701DC (PoClearPowerRequestInternal.c)
 *     PoSetPowerRequestInternal @ 0x1402703A0 (PoSetPowerRequestInternal.c)
 *     PopPowerRequestCleanUp @ 0x140270A38 (PopPowerRequestCleanUp.c)
 *     PopProcessPowerRequestOverrideQueryResponse @ 0x140270EE0 (PopProcessPowerRequestOverrideQueryResponse.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14026A224 (PopReleaseRwLock.c)
 */

void PopReleasePowerRequestPushLock()
{
  PopReleaseRwLock((ULONG_PTR)&PopPowerRequestLock);
}
