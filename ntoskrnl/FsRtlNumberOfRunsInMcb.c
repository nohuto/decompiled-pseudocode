/*
 * XREFs of FsRtlNumberOfRunsInMcb @ 0x14053A8A0
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlNumberOfRunsInLargeMcb @ 0x1403AAF70 (FsRtlNumberOfRunsInLargeMcb.c)
 */

ULONG __stdcall FsRtlNumberOfRunsInMcb(PMCB Mcb)
{
  return FsRtlNumberOfRunsInLargeMcb(&Mcb->DummyFieldThatSizesThisStructureCorrectly);
}
