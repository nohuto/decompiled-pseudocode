/*
 * XREFs of PnprUnlockPagesForReplace @ 0x140964064
 * Callers:
 *     PnprCompleteWake @ 0x140560794 (PnprCompleteWake.c)
 *     PnpReplacePartitionUnit @ 0x140961B80 (PnpReplacePartitionUnit.c)
 * Callees:
 *     MmUnlockPagableImageSection @ 0x140225D90 (MmUnlockPagableImageSection.c)
 *     ExNotifyCallback @ 0x1402D2F00 (ExNotifyCallback.c)
 */

void PnprUnlockPagesForReplace()
{
  MmUnlockPagableImageSection(ExPageLockHandle);
  ExNotifyCallback(ExCbPowerState, (PVOID)3, (PVOID)1);
}
