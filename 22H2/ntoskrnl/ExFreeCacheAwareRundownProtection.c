/*
 * XREFs of ExFreeCacheAwareRundownProtection @ 0x140321BB0
 * Callers:
 *     MiDeletePartitionResources @ 0x1406594F8 (MiDeletePartitionResources.c)
 *     RawCleanupVcb @ 0x140791B24 (RawCleanupVcb.c)
 *     EtwpCleanupSiloState @ 0x1409E3380 (EtwpCleanupSiloState.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

void __stdcall ExFreeCacheAwareRundownProtection(PEX_RUNDOWN_REF_CACHE_AWARE RunRefCacheAware)
{
  ExFreePoolWithTag(RunRefCacheAware->PoolToFree, 0);
  ExFreePoolWithTag(RunRefCacheAware, 0);
}
