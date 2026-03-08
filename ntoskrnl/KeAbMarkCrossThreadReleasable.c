/*
 * XREFs of KeAbMarkCrossThreadReleasable @ 0x1403C7520
 * Callers:
 *     ExDisownFastResource @ 0x1403C6EF0 (ExDisownFastResource.c)
 *     ExAcquireFastResourceWithFlags @ 0x14040CD00 (ExAcquireFastResourceWithFlags.c)
 *     ExAcquireFastResourceExclusive2 @ 0x14040D530 (ExAcquireFastResourceExclusive2.c)
 *     ExAcquireFastResourceShared2 @ 0x14040D7F0 (ExAcquireFastResourceShared2.c)
 *     ExAcquireFastResourceSharedStarveExclusive2 @ 0x14040DB2C (ExAcquireFastResourceSharedStarveExclusive2.c)
 *     ExDisownFastResource2 @ 0x14040E06C (ExDisownFastResource2.c)
 *     ExpAcquireFastResourceExclusiveSlow @ 0x14040F2AC (ExpAcquireFastResourceExclusiveSlow.c)
 *     ExpAcquireFastResourceSharedSlow @ 0x14040F630 (ExpAcquireFastResourceSharedSlow.c)
 *     ExpMoveSharedFastResourceOwnershipWithFlags @ 0x14041059C (ExpMoveSharedFastResourceOwnershipWithFlags.c)
 *     KeAbCrossThreadDeleteDpcRoutine @ 0x140577730 (KeAbCrossThreadDeleteDpcRoutine.c)
 * Callees:
 *     KiAbForceProcessLockEntry @ 0x1403C7578 (KiAbForceProcessLockEntry.c)
 */

char __fastcall KeAbMarkCrossThreadReleasable(__int64 a1, __int64 *a2)
{
  __int64 *v2; // rbx
  char result; // al

  v2 = a2;
  if ( ((unsigned __int8)a2 & 1) != 0 )
    v2 = (__int64 *)(&KeGetCurrentThread()[1].Process + 12 * (unsigned __int8)((unsigned __int64)a2 >> 1));
  if ( *v2 >= 0 )
    KiAbForceProcessLockEntry(v2);
  result = *(_BYTE *)v2 | 1;
  *(_BYTE *)v2 = result;
  return result;
}
