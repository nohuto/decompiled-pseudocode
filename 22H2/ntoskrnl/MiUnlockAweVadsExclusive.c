/*
 * XREFs of MiUnlockAweVadsExclusive @ 0x14054DF38
 * Callers:
 *     MiFreePhysicalPages @ 0x14054BE84 (MiFreePhysicalPages.c)
 *     MiCloneVads @ 0x140559268 (MiCloneVads.c)
 *     MmSetGraphicsPtes @ 0x1408C6F00 (MmSetGraphicsPtes.c)
 *     MiAweViewInserter @ 0x1408D572C (MiAweViewInserter.c)
 *     MiCreateProcessDefaultAweInfo @ 0x1408D5B10 (MiCreateProcessDefaultAweInfo.c)
 *     MiRemoveUserPhysicalPagesView @ 0x1408D649C (MiRemoveUserPhysicalPagesView.c)
 *     MiScrubProcessPhysicalPages @ 0x1408D6690 (MiScrubProcessPhysicalPages.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x1402CB480 (KiLeaveGuardedRegionUnsafe.c)
 *     ExReleaseAutoExpandPushLockExclusive @ 0x1402FAB20 (ExReleaseAutoExpandPushLockExclusive.c)
 */

char __fastcall MiUnlockAweVadsExclusive(__int64 a1)
{
  ExReleaseAutoExpandPushLockExclusive(*(_QWORD *)(*(_QWORD *)(a1 + 184) + 1680LL) + 408LL, 0LL);
  return KiLeaveGuardedRegionUnsafe(a1);
}
