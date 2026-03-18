/*
 * XREFs of MiAddLockedPageCharge @ 0x1402EF368
 * Callers:
 *     MiTryLockProtoPoolPageAtDpc @ 0x14021C86C (MiTryLockProtoPoolPageAtDpc.c)
 *     MiMigratePfn @ 0x140262FC0 (MiMigratePfn.c)
 *     MiLockCode @ 0x140282210 (MiLockCode.c)
 *     MiMakeDriverPagesPrivate @ 0x140291930 (MiMakeDriverPagesPrivate.c)
 *     MmCopyToCachedPage @ 0x1402CD7D0 (MmCopyToCachedPage.c)
 *     MiPfPutPagesInTransition @ 0x1402DE040 (MiPfPutPagesInTransition.c)
 *     MiLockPagedAddress @ 0x1402ED4F0 (MiLockPagedAddress.c)
 *     MiPrivateFixup @ 0x1402ED678 (MiPrivateFixup.c)
 *     MiHandleCollidedFault @ 0x1402EED90 (MiHandleCollidedFault.c)
 *     MiWaitForCollidedFaultComplete @ 0x1402EF008 (MiWaitForCollidedFaultComplete.c)
 *     MiRelockProtoPoolPage @ 0x1402EF244 (MiRelockProtoPoolPage.c)
 *     MiObtainProtoReference @ 0x1402EF318 (MiObtainProtoReference.c)
 *     MiDoubleLockMdlPage @ 0x1402F147C (MiDoubleLockMdlPage.c)
 *     MiMakeProtoAddressValid @ 0x1402F2450 (MiMakeProtoAddressValid.c)
 *     MiSwapStackPage @ 0x140399C4C (MiSwapStackPage.c)
 *     MiLockDriverPageRange @ 0x140619EA0 (MiLockDriverPageRange.c)
 *     MiMirrorPerformBrownWrites @ 0x140627698 (MiMirrorPerformBrownWrites.c)
 *     MiMapSystemCachePage @ 0x14062ECB4 (MiMapSystemCachePage.c)
 *     MiSwitchToTransition @ 0x1406331FC (MiSwitchToTransition.c)
 *     MiBuildReservationCluster @ 0x140638354 (MiBuildReservationCluster.c)
 *     MiPurgeBadFileOnlyPages @ 0x14063EAE0 (MiPurgeBadFileOnlyPages.c)
 *     MiSplitDirectMapPage @ 0x14063F2D4 (MiSplitDirectMapPage.c)
 *     MiDbgMarkPfnModified @ 0x140643C40 (MiDbgMarkPfnModified.c)
 *     MiBuildForkPageTable @ 0x140661F84 (MiBuildForkPageTable.c)
 *     MiLockDownWorkingSet @ 0x140665200 (MiLockDownWorkingSet.c)
 *     MiIdealClusterPage @ 0x14066A500 (MiIdealClusterPage.c)
 * Callees:
 *     MiAreChargesNeededToLockPage @ 0x1402CDF90 (MiAreChargesNeededToLockPage.c)
 *     MiChargeForLockedPage @ 0x1402DC320 (MiChargeForLockedPage.c)
 */

__int64 __fastcall MiAddLockedPageCharge(__int64 a1, char a2)
{
  _WORD *v2; // rbx
  __int64 v3; // rcx
  unsigned int locked; // r9d
  char v5; // r10

  v2 = (_WORD *)(a1 + 32);
  if ( (a2 & 1) == 0 && *v2 >= 0x7FFFu )
    return 0LL;
  if ( (unsigned int)MiAreChargesNeededToLockPage(a1) )
  {
    locked = MiChargeForLockedPage(v3, v5);
    if ( !locked )
      return 0LL;
  }
  ++*v2;
  return locked;
}
