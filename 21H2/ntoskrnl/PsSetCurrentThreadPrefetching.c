/*
 * XREFs of PsSetCurrentThreadPrefetching @ 0x1407DF730
 * Callers:
 *     PfpPrefetchSharedCleanup @ 0x1406AE49C (PfpPrefetchSharedCleanup.c)
 *     PfpPrefetchSharedStart @ 0x1406AF0D4 (PfpPrefetchSharedStart.c)
 *     PfSnSectionInfoCleanupWorkItem @ 0x1407DF140 (PfSnSectionInfoCleanupWorkItem.c)
 *     PfSnPopulateReadList @ 0x1407DF200 (PfSnPopulateReadList.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 */

BOOLEAN __stdcall PsSetCurrentThreadPrefetching(BOOLEAN Prefetching)
{
  struct _KTHREAD *CurrentThread; // r8
  BOOLEAN v2; // bl
  bool v3; // zf

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v2 = ((__int64)CurrentThread[1].Queue & 0x40) != 0;
  LOBYTE(CurrentThread[1].Queue) ^= (LOBYTE(CurrentThread[1].Queue) ^ (Prefetching << 6)) & 0x40;
  v3 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v3 && ($CEA84C04E3712D858E5667A507841A2A *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  return v2;
}
