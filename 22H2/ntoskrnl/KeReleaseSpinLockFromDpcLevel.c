/*
 * XREFs of KeReleaseSpinLockFromDpcLevel @ 0x14032F9A0
 * Callers:
 *     sub_1403F1260 @ 0x1403F1260 (sub_1403F1260.c)
 *     ExAcquireFastResourceWithFlags @ 0x140411A70 (ExAcquireFastResourceWithFlags.c)
 *     ExAcquireFastResourceExclusive2 @ 0x140412330 (ExAcquireFastResourceExclusive2.c)
 *     ExAcquireFastResourceShared2 @ 0x1404125F0 (ExAcquireFastResourceShared2.c)
 *     ExAcquireFastResourceSharedStarveExclusive2 @ 0x14041292C (ExAcquireFastResourceSharedStarveExclusive2.c)
 *     ExDisownFastResource2 @ 0x140412E6C (ExDisownFastResource2.c)
 *     ExpAcquireFastResourceExclusiveSlow @ 0x1404140DC (ExpAcquireFastResourceExclusiveSlow.c)
 *     ExpAcquireFastResourceSharedSlow @ 0x140414460 (ExpAcquireFastResourceSharedSlow.c)
 *     ExpMoveSharedFastResourceOwnershipWithFlags @ 0x1404153CC (ExpMoveSharedFastResourceOwnershipWithFlags.c)
 *     ExpReleaseDisownedFastResourceExclusive2 @ 0x140415968 (ExpReleaseDisownedFastResourceExclusive2.c)
 *     ExpReleaseDisownedFastResourceShared2 @ 0x140415B18 (ExpReleaseDisownedFastResourceShared2.c)
 *     KeSynchronizeExecution @ 0x14041FB60 (KeSynchronizeExecution.c)
 * Callees:
 *     KiReleaseSpinLockInstrumented @ 0x1405718E8 (KiReleaseSpinLockInstrumented.c)
 */

void __stdcall KeReleaseSpinLockFromDpcLevel(PKSPIN_LOCK SpinLock)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(SpinLock, retaddr);
  else
    _InterlockedAnd64((volatile signed __int64 *)SpinLock, 0LL);
}
