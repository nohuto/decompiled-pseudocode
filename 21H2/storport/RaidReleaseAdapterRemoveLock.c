/*
 * XREFs of RaidReleaseAdapterRemoveLock @ 0x1C0032D88
 * Callers:
 *     StorPortWorkItemRoutine @ 0x1C003A2A0 (StorPortWorkItemRoutine.c)
 *     StorpQueueWorkItem @ 0x1C003D208 (StorpQueueWorkItem.c)
 *     RaWmiDispatchIrp @ 0x1C0075054 (RaWmiDispatchIrp.c)
 * Callees:
 *     <none>
 */

void __fastcall RaidReleaseAdapterRemoveLock(__int64 a1)
{
  ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 280));
}
