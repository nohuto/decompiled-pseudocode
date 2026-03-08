/*
 * XREFs of KeReleaseSpinLockFromDpcLevel @ 0x1402C5C00
 * Callers:
 *     sub_1403EBD40 @ 0x1403EBD40 (sub_1403EBD40.c)
 *     ExAcquireFastResourceWithFlags @ 0x14040CD00 (ExAcquireFastResourceWithFlags.c)
 *     ExAcquireFastResourceExclusive2 @ 0x14040D530 (ExAcquireFastResourceExclusive2.c)
 *     ExAcquireFastResourceShared2 @ 0x14040D7F0 (ExAcquireFastResourceShared2.c)
 *     ExAcquireFastResourceSharedStarveExclusive2 @ 0x14040DB2C (ExAcquireFastResourceSharedStarveExclusive2.c)
 *     ExDisownFastResource2 @ 0x14040E06C (ExDisownFastResource2.c)
 *     ExpAcquireFastResourceExclusiveSlow @ 0x14040F2AC (ExpAcquireFastResourceExclusiveSlow.c)
 *     ExpAcquireFastResourceSharedSlow @ 0x14040F630 (ExpAcquireFastResourceSharedSlow.c)
 *     ExpMoveSharedFastResourceOwnershipWithFlags @ 0x14041059C (ExpMoveSharedFastResourceOwnershipWithFlags.c)
 *     ExpReleaseDisownedFastResourceExclusive2 @ 0x140410B38 (ExpReleaseDisownedFastResourceExclusive2.c)
 *     ExpReleaseDisownedFastResourceShared2 @ 0x140410CE8 (ExpReleaseDisownedFastResourceShared2.c)
 *     KeSynchronizeExecution @ 0x1404177D0 (KeSynchronizeExecution.c)
 * Callees:
 *     KiReleaseSpinLockInstrumented @ 0x14056F278 (KiReleaseSpinLockInstrumented.c)
 */

void __stdcall KeReleaseSpinLockFromDpcLevel(PKSPIN_LOCK SpinLock)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(SpinLock, retaddr);
  else
    _InterlockedAnd64((volatile signed __int64 *)SpinLock, 0LL);
}
