/*
 * XREFs of PopEtBucketsAllocate @ 0x1407EA4A4
 * Callers:
 *     PopEtProcessSnapshotCreate @ 0x1407B1EC8 (PopEtProcessSnapshotCreate.c)
 *     PopEtAggregateGet @ 0x1407B2B28 (PopEtAggregateGet.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall PopEtBucketsAllocate(__int64 a1)
{
  return ExAllocatePool2(256LL, a1, 1413836624LL);
}
