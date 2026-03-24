/*
 * XREFs of ExFreeCacheAwareRundownProtection @ 0x1402F7BD0
 * Callers:
 *     MiDeletePartitionResources @ 0x140561858 (MiDeletePartitionResources.c)
 *     RawCleanupVcb @ 0x1406681C4 (RawCleanupVcb.c)
 *     EtwInitializeSiloState @ 0x140795A88 (EtwInitializeSiloState.c)
 *     EtwDeleteSiloState @ 0x140937D74 (EtwDeleteSiloState.c)
 * Callees:
 *     ExFreeHeapPool @ 0x1402C2150 (ExFreeHeapPool.c)
 */

void __stdcall ExFreeCacheAwareRundownProtection(PEX_RUNDOWN_REF_CACHE_AWARE RunRefCacheAware)
{
  ExFreeHeapPool((ULONG_PTR)RunRefCacheAware->PoolToFree);
  ExFreeHeapPool((ULONG_PTR)RunRefCacheAware);
}
