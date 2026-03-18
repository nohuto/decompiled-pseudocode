/*
 * XREFs of PopEtBucketsFree @ 0x1407EADD0
 * Callers:
 *     PopEtProcessSnapshotCreate @ 0x1407B1EC8 (PopEtProcessSnapshotCreate.c)
 *     PopEtAggregateGet @ 0x1407B2B28 (PopEtAggregateGet.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

void __fastcall PopEtBucketsFree(void *a1)
{
  ExFreePoolWithTag(a1, 0x54456F50u);
}
