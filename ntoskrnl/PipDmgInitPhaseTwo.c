/*
 * XREFs of PipDmgInitPhaseTwo @ 0x14081CB84
 * Callers:
 *     PiDmaGuardInitialize @ 0x1403895B8 (PiDmaGuardInitialize.c)
 * Callees:
 *     PnpTraceDmaGuardSystemPolicy @ 0x14085FF78 (PnpTraceDmaGuardSystemPolicy.c)
 *     PipDmgInitReadGroupPolicy @ 0x140958180 (PipDmgInitReadGroupPolicy.c)
 *     PipDmgReevaluateQueue @ 0x1409684CC (PipDmgReevaluateQueue.c)
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
