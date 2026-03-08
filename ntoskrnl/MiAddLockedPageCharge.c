/*
 * XREFs of MiAddLockedPageCharge @ 0x1402A309C
 * Callers:
 *     MmCopyToCachedPage @ 0x14021DBE0 (MmCopyToCachedPage.c)
 *     MiMigratePfn @ 0x140272370 (MiMigratePfn.c)
 *     MiPfPutPagesInTransition @ 0x140288890 (MiPfPutPagesInTransition.c)
 *     MiDoubleLockMdlPage @ 0x14029F950 (MiDoubleLockMdlPage.c)
 *     MiLockPagedAddress @ 0x1402A1684 (MiLockPagedAddress.c)
 *     MiPrivateFixup @ 0x1402A180C (MiPrivateFixup.c)
 *     MiTryLockProtoPoolPageAtDpc @ 0x1402A2850 (MiTryLockProtoPoolPageAtDpc.c)
 *     MiHandleCollidedFault @ 0x1402A2AC4 (MiHandleCollidedFault.c)
 *     MiWaitForCollidedFaultComplete @ 0x1402A2D3C (MiWaitForCollidedFaultComplete.c)
 *     MiRelockProtoPoolPage @ 0x1402A2F78 (MiRelockProtoPoolPage.c)
 *     MiObtainProtoReference @ 0x1402A304C (MiObtainProtoReference.c)
 *     MiMakeProtoAddressValid @ 0x1402A419C (MiMakeProtoAddressValid.c)
 *     MiMakeDriverPagesPrivate @ 0x1402A6440 (MiMakeDriverPagesPrivate.c)
 *     MiLockCode @ 0x14032C9C0 (MiLockCode.c)
 *     MiSwapStackPage @ 0x14039604C (MiSwapStackPage.c)
 *     MiLockDriverPageRange @ 0x1406179F0 (MiLockDriverPageRange.c)
 *     MiMirrorPerformBrownWrites @ 0x1406251F8 (MiMirrorPerformBrownWrites.c)
 *     MiMapSystemCachePage @ 0x14062C834 (MiMapSystemCachePage.c)
 *     MiSwitchToTransition @ 0x140630D6C (MiSwitchToTransition.c)
 *     MiBuildReservationCluster @ 0x140635ED4 (MiBuildReservationCluster.c)
 *     MiPurgeBadFileOnlyPages @ 0x14063C678 (MiPurgeBadFileOnlyPages.c)
 *     MiSplitDirectMapPage @ 0x14063CE6C (MiSplitDirectMapPage.c)
 *     MiDbgMarkPfnModified @ 0x1406417E0 (MiDbgMarkPfnModified.c)
 *     MiBuildForkPageTable @ 0x14065F934 (MiBuildForkPageTable.c)
 *     MiLockDownWorkingSet @ 0x140662BB0 (MiLockDownWorkingSet.c)
 *     MiIdealClusterPage @ 0x140667EB0 (MiIdealClusterPage.c)
 * Callees:
 *     MiAreChargesNeededToLockPage @ 0x140284D60 (MiAreChargesNeededToLockPage.c)
 *     MiChargeForLockedPage @ 0x140287410 (MiChargeForLockedPage.c)
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
