/*
 * XREFs of RaidReleaseAdapterRemoveLock @ 0x1C0032D68
 * Callers:
 *     StorPortWorkItemRoutine @ 0x1C003A280 (StorPortWorkItemRoutine.c)
 *     StorpQueueWorkItem @ 0x1C003D1E8 (StorpQueueWorkItem.c)
 *     RaWmiDispatchIrp @ 0x1C0075054 (RaWmiDispatchIrp.c)
 * Callees:
 *     <none>
 */

void __fastcall RaidReleaseAdapterRemoveLock(__int64 a1)
{
  ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 280));
}
