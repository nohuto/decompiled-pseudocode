/*
 * XREFs of FsRtlUninitializeMcb @ 0x14093DAA0
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlUninitializeLargeMcb @ 0x140364630 (FsRtlUninitializeLargeMcb.c)
 */

void __stdcall FsRtlUninitializeMcb(PMCB Mcb)
{
  FsRtlUninitializeLargeMcb(&Mcb->DummyFieldThatSizesThisStructureCorrectly);
}
