/*
 * XREFs of FsRtlInitializeMcb @ 0x14093AA60
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlInitializeLargeMcb @ 0x1402DFC20 (FsRtlInitializeLargeMcb.c)
 */

void __stdcall FsRtlInitializeMcb(PMCB Mcb, POOL_TYPE PoolType)
{
  FsRtlInitializeLargeMcb(&Mcb->DummyFieldThatSizesThisStructureCorrectly, PoolType);
}
