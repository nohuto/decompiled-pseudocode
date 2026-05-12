/*
 * XREFs of RaidReleaseAdapterRemoveLockAndWait @ 0x1C0032DAC
 * Callers:
 *     RaidAdapterRemoveDeviceIrp @ 0x1C007901C (RaidAdapterRemoveDeviceIrp.c)
 *     RaidAdapterSurpriseRemovalIrp @ 0x1C0079314 (RaidAdapterSurpriseRemovalIrp.c)
 * Callees:
 *     <none>
 */

void __fastcall RaidReleaseAdapterRemoveLockAndWait(__int64 a1)
{
  ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 280));
  ExWaitForRundownProtectionReleaseCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 280));
}
