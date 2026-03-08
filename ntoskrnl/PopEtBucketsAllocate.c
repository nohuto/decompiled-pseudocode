/*
 * XREFs of PopEtBucketsAllocate @ 0x14079B534
 * Callers:
 *     PopEtProcessSnapshotCreate @ 0x140701954 (PopEtProcessSnapshotCreate.c)
 *     PopEtAggregateGet @ 0x1407025B8 (PopEtAggregateGet.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 __fastcall PopEtBucketsAllocate(__int64 a1)
{
  return ExAllocatePool2(256LL, a1, 1413836624LL);
}
