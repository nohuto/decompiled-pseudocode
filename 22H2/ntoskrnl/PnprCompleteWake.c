/*
 * XREFs of PnprCompleteWake @ 0x140562C34
 * Callers:
 *     PnprInitiateReplaceOperation @ 0x140A9C9D4 (PnprInitiateReplaceOperation.c)
 *     PnprQuiesceWorker @ 0x140A9DF20 (PnprQuiesceWorker.c)
 * Callees:
 *     PnprUnlockPagesForReplace @ 0x140967084 (PnprUnlockPagesForReplace.c)
 */

__int64 PnprCompleteWake()
{
  return PnprUnlockPagesForReplace();
}
