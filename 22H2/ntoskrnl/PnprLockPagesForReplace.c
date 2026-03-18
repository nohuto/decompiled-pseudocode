/*
 * XREFs of PnprLockPagesForReplace @ 0x140966790
 * Callers:
 *     PnprQuiesce @ 0x140563228 (PnprQuiesce.c)
 *     PnpReplacePartitionUnit @ 0x140964BA0 (PnpReplacePartitionUnit.c)
 *     PnprQuiesceWorker @ 0x140A9DF20 (PnprQuiesceWorker.c)
 * Callees:
 *     MiLockPagableImageSection @ 0x14025A6C0 (MiLockPagableImageSection.c)
 *     ExNotifyCallback @ 0x14033BD40 (ExNotifyCallback.c)
 */

void PnprLockPagesForReplace()
{
  MiLockPagableImageSection((ULONG_PTR)ExPageLockHandle, 1uLL);
  ExNotifyCallback(ExCbPowerState, (PVOID)3, 0LL);
}
