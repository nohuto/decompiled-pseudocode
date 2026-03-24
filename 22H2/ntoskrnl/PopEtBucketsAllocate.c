/*
 * XREFs of PopEtBucketsAllocate @ 0x1407739DC
 * Callers:
 *     PopEtAggregateGet @ 0x14061A308 (PopEtAggregateGet.c)
 *     PopEtProcessSnapshotCreate @ 0x14067D47C (PopEtProcessSnapshotCreate.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall PopEtBucketsAllocate(SIZE_T NumberOfBytes)
{
  return ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x54456F50u);
}
