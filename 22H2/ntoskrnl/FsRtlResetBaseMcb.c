/*
 * XREFs of FsRtlResetBaseMcb @ 0x14032B890
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall FsRtlResetBaseMcb(PBASE_MCB Mcb)
{
  Mcb->PairCount = 0;
}
