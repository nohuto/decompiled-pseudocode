/*
 * XREFs of PnprUnlockPagesForReplace @ 0x1408AE904
 * Callers:
 *     PnprCompleteWake @ 0x14050F068 (PnprCompleteWake.c)
 *     PnpReplacePartitionUnit @ 0x1408AC2C0 (PnpReplacePartitionUnit.c)
 * Callees:
 *     MmUnlockPagableImageSection @ 0x14029B0A0 (MmUnlockPagableImageSection.c)
 *     ExNotifyCallback @ 0x140307D90 (ExNotifyCallback.c)
 */

void PnprUnlockPagesForReplace()
{
  MmUnlockPagableImageSection(ExPageLockHandle);
  ExNotifyCallback(ExCbPowerState, (PVOID)3, (PVOID)1);
}
