/*
 * XREFs of KeAbMarkCrossThreadReleasable @ 0x1403CC3D0
 * Callers:
 *     ExDisownFastResource @ 0x1403CBDA0 (ExDisownFastResource.c)
 *     ExAcquireFastResourceWithFlags @ 0x140411A70 (ExAcquireFastResourceWithFlags.c)
 *     ExAcquireFastResourceExclusive2 @ 0x140412330 (ExAcquireFastResourceExclusive2.c)
 *     ExAcquireFastResourceShared2 @ 0x1404125F0 (ExAcquireFastResourceShared2.c)
 *     ExAcquireFastResourceSharedStarveExclusive2 @ 0x14041292C (ExAcquireFastResourceSharedStarveExclusive2.c)
 *     ExDisownFastResource2 @ 0x140412E6C (ExDisownFastResource2.c)
 *     ExpAcquireFastResourceExclusiveSlow @ 0x1404140DC (ExpAcquireFastResourceExclusiveSlow.c)
 *     ExpAcquireFastResourceSharedSlow @ 0x140414460 (ExpAcquireFastResourceSharedSlow.c)
 *     ExpMoveSharedFastResourceOwnershipWithFlags @ 0x1404153CC (ExpMoveSharedFastResourceOwnershipWithFlags.c)
 *     KeAbCrossThreadDeleteDpcRoutine @ 0x140579C40 (KeAbCrossThreadDeleteDpcRoutine.c)
 * Callees:
 *     KiAbForceProcessLockEntry @ 0x1403CC428 (KiAbForceProcessLockEntry.c)
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
