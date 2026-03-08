/*
 * XREFs of PopEtBucketsFree @ 0x14079BFE8
 * Callers:
 *     PopEtProcessSnapshotCreate @ 0x140701954 (PopEtProcessSnapshotCreate.c)
 *     PopEtAggregateGet @ 0x1407025B8 (PopEtAggregateGet.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall PopEtBucketsFree(void *a1)
{
  ExFreePoolWithTag(a1, 0x54456F50u);
}
