/*
 * XREFs of PsSetCurrentThreadPrefetching @ 0x1406A47E0
 * Callers:
 *     PfSnSectionInfoCleanupWorkItem @ 0x1406A41F0 (PfSnSectionInfoCleanupWorkItem.c)
 *     PfSnPopulateReadList @ 0x1406A42B0 (PfSnPopulateReadList.c)
 *     PfpPrefetchSharedCleanup @ 0x1407666FC (PfpPrefetchSharedCleanup.c)
 *     PfpPrefetchSharedStart @ 0x1407E0898 (PfpPrefetchSharedStart.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 */

BOOLEAN __stdcall PsSetCurrentThreadPrefetching(BOOLEAN Prefetching)
{
  struct _KTHREAD *CurrentThread; // rdx
  BOOLEAN v2; // bl
  bool v3; // zf

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v2 = ((__int64)CurrentThread[1].Queue & 0x40) != 0;
  LOBYTE(CurrentThread[1].Queue) ^= (LOBYTE(CurrentThread[1].Queue) ^ (Prefetching << 6)) & 0x40;
  v3 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v3 && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  return v2;
}
