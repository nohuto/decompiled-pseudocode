/*
 * XREFs of EtwDereferenceSpinLockCounters @ 0x1409E9198
 * Callers:
 *     KiSynchCounterSetCallback @ 0x140970F10 (KiSynchCounterSetCallback.c)
 *     KiSynchNumaCounterSetCallback @ 0x140971030 (KiSynchNumaCounterSetCallback.c)
 * Callees:
 *     KeReleaseMutex @ 0x1402046C0 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     EtwpUpdateGlobalGroupMasks @ 0x140785F3C (EtwpUpdateGlobalGroupMasks.c)
 */

LONG EtwDereferenceSpinLockCounters()
{
  __int64 v0; // rcx

  KeWaitForSingleObject(&EtwpCrimsonMaskMutex, Executive, 0, 0, 0LL);
  if ( !--EtwpSpinLockCountersCount )
  {
    v0 = EtwpHostSiloState;
    *(_DWORD *)(EtwpHostSiloState + 4544) &= ~0x200000u;
    EtwpUpdateGlobalGroupMasks(v0, 0, 8u);
  }
  return KeReleaseMutex(&EtwpCrimsonMaskMutex, 0);
}
