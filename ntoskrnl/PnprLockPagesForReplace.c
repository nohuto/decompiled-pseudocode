/*
 * XREFs of PnprLockPagesForReplace @ 0x140963770
 * Callers:
 *     PnprQuiesce @ 0x140560D88 (PnprQuiesce.c)
 *     PnpReplacePartitionUnit @ 0x140961B80 (PnpReplacePartitionUnit.c)
 *     PnprQuiesceWorker @ 0x140A9ADE0 (PnprQuiesceWorker.c)
 * Callees:
 *     MiLockPagableImageSection @ 0x1402252E0 (MiLockPagableImageSection.c)
 *     ExNotifyCallback @ 0x1402D2F00 (ExNotifyCallback.c)
 */

void PnprLockPagesForReplace()
{
  MiLockPagableImageSection((ULONG_PTR)ExPageLockHandle, 1uLL);
  ExNotifyCallback(ExCbPowerState, (PVOID)3, 0LL);
}
