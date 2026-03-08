/*
 * XREFs of EtwpCompressionDpc @ 0x140600220
 * Callers:
 *     EtwpPrepareDirtyBuffer @ 0x140205FA4 (EtwpPrepareDirtyBuffer.c)
 * Callees:
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x14028DD10 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     ExQueueWorkItem @ 0x14033F3D0 (ExQueueWorkItem.c)
 */

void __fastcall EtwpCompressionDpc(__int64 a1, unsigned int *a2)
{
  ExAcquireRundownProtectionCacheAwareEx(
    *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)a2 + 137) + 448LL) + 8LL * *a2),
    1u);
  ExQueueWorkItem((PWORK_QUEUE_ITEM)(a2 + 276), DelayedWorkQueue);
}
