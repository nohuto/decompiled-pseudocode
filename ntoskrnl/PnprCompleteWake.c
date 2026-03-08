/*
 * XREFs of PnprCompleteWake @ 0x140560794
 * Callers:
 *     PnprInitiateReplaceOperation @ 0x140A99894 (PnprInitiateReplaceOperation.c)
 *     PnprQuiesceWorker @ 0x140A9ADE0 (PnprQuiesceWorker.c)
 * Callees:
 *     PnprUnlockPagesForReplace @ 0x140964064 (PnprUnlockPagesForReplace.c)
 */

__int64 PnprCompleteWake()
{
  return PnprUnlockPagesForReplace();
}
