/*
 * XREFs of PopEtBucketsFree @ 0x140773A9C
 * Callers:
 *     PopEtAggregateGet @ 0x14061A308 (PopEtAggregateGet.c)
 *     PopEtProcessSnapshotCreate @ 0x14067D47C (PopEtProcessSnapshotCreate.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

void __fastcall PopEtBucketsFree(void *a1)
{
  ExFreePoolWithTag(a1, 0x54456F50u);
}
