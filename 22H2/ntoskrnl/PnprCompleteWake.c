/*
 * XREFs of PnprCompleteWake @ 0x14050F068
 * Callers:
 *     PnprInitiateReplaceOperation @ 0x1409AD93C (PnprInitiateReplaceOperation.c)
 *     PnprQuiesceWorker @ 0x1409AEDA0 (PnprQuiesceWorker.c)
 * Callees:
 *     PnprUnlockPagesForReplace @ 0x1408AE904 (PnprUnlockPagesForReplace.c)
 */

__int64 PnprCompleteWake()
{
  return PnprUnlockPagesForReplace();
}
