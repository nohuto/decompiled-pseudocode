/*
 * XREFs of ExFreeCacheAwareRundownProtection @ 0x14028E220
 * Callers:
 *     MiDeletePartitionResources @ 0x140656EBC (MiDeletePartitionResources.c)
 *     RawCleanupVcb @ 0x1406F3EA0 (RawCleanupVcb.c)
 *     EtwpCleanupSiloState @ 0x1409E04E0 (EtwpCleanupSiloState.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __stdcall ExFreeCacheAwareRundownProtection(PEX_RUNDOWN_REF_CACHE_AWARE RunRefCacheAware)
{
  ExFreePoolWithTag(RunRefCacheAware->PoolToFree, 0);
  ExFreePoolWithTag(RunRefCacheAware, 0);
}
