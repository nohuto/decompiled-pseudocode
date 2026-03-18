/*
 * XREFs of PipDmgInitPhaseTwo @ 0x1408144B4
 * Callers:
 *     PiDmaGuardInitialize @ 0x140375428 (PiDmaGuardInitialize.c)
 * Callees:
 *     PnpTraceDmaGuardSystemPolicy @ 0x1408644B8 (PnpTraceDmaGuardSystemPolicy.c)
 *     PipDmgInitReadGroupPolicy @ 0x14095B1A0 (PipDmgInitReadGroupPolicy.c)
 *     PipDmgReevaluateQueue @ 0x14096B4EC (PipDmgReevaluateQueue.c)
 */

__int64 PipDmgInitPhaseTwo()
{
  int GroupPolicy; // eax

  if ( PipDmaGuardPolicy )
  {
    GroupPolicy = PipDmgInitReadGroupPolicy();
    if ( !GroupPolicy )
      GroupPolicy = 2;
    PipDmaGuardPolicy = GroupPolicy;
    PipDmgReevaluateQueue();
  }
  PnpTraceDmaGuardSystemPolicy();
  return 0LL;
}
