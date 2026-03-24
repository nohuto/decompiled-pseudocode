/*
 * XREFs of MiLockAweVadsExclusive @ 0x14054CF40
 * Callers:
 *     MiFreePhysicalPages @ 0x14054BE84 (MiFreePhysicalPages.c)
 *     MiCloneVads @ 0x140559268 (MiCloneVads.c)
 *     MmSetGraphicsPtes @ 0x1408C6F00 (MmSetGraphicsPtes.c)
 *     MiAweViewInserter @ 0x1408D572C (MiAweViewInserter.c)
 *     MiCreateProcessDefaultAweInfo @ 0x1408D5B10 (MiCreateProcessDefaultAweInfo.c)
 *     MiRemoveUserPhysicalPagesView @ 0x1408D649C (MiRemoveUserPhysicalPagesView.c)
 *     MiScrubProcessPhysicalPages @ 0x1408D6690 (MiScrubProcessPhysicalPages.c)
 * Callees:
 *     ExAcquireAutoExpandPushLockExclusive @ 0x1402FAF60 (ExAcquireAutoExpandPushLockExclusive.c)
 */

__int64 __fastcall MiLockAweVadsExclusive(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 184) + 1680LL);
  --*(_WORD *)(a1 + 486);
  return ExAcquireAutoExpandPushLockExclusive(v2 + 408, 0LL);
}
