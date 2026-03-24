/*
 * XREFs of MiAddLockedPageCharge @ 0x14029AA98
 * Callers:
 *     MiFinishHardFault @ 0x140239200 (MiFinishHardFault.c)
 *     MiCopyDataPageToImagePage @ 0x140284A68 (MiCopyDataPageToImagePage.c)
 *     MiTryLockProtoPoolPageAtDpc @ 0x140285334 (MiTryLockProtoPoolPageAtDpc.c)
 *     MiObtainProtoReference @ 0x14029A69C (MiObtainProtoReference.c)
 *     MiRelockProtoPoolPage @ 0x14029A708 (MiRelockProtoPoolPage.c)
 *     MiLockCode @ 0x1402A3C40 (MiLockCode.c)
 *     MmCopyToCachedPage @ 0x1402B1B90 (MmCopyToCachedPage.c)
 *     MiHandleCollidedFault @ 0x1402E1E9C (MiHandleCollidedFault.c)
 *     MiWaitForCollidedFaultComplete @ 0x1402E2190 (MiWaitForCollidedFaultComplete.c)
 *     MiPrivateFixup @ 0x1402E29C8 (MiPrivateFixup.c)
 *     MiMakeProtoAddressValid @ 0x14031D884 (MiMakeProtoAddressValid.c)
 *     MiSwapStackPage @ 0x14031F4BC (MiSwapStackPage.c)
 *     MiMakeDriverPagesPrivate @ 0x140358454 (MiMakeDriverPagesPrivate.c)
 *     MiLockPagedAddress @ 0x14036B274 (MiLockPagedAddress.c)
 *     MiDoubleLockMdlPage @ 0x14037CC1C (MiDoubleLockMdlPage.c)
 *     MiMirrorPerformBrownWrites @ 0x140381BF8 (MiMirrorPerformBrownWrites.c)
 *     MiMapSystemCachePage @ 0x140536FE4 (MiMapSystemCachePage.c)
 *     MiSwitchToTransition @ 0x140539E54 (MiSwitchToTransition.c)
 *     MiPurgeBadFileOnlyPages @ 0x140541830 (MiPurgeBadFileOnlyPages.c)
 *     MiSplitDirectMapPage @ 0x14054207C (MiSplitDirectMapPage.c)
 *     MiDbgMarkPfnModified @ 0x140545C2C (MiDbgMarkPfnModified.c)
 *     MiIdealClusterPage @ 0x140555D54 (MiIdealClusterPage.c)
 *     MiBuildForkPageTable @ 0x140557F0C (MiBuildForkPageTable.c)
 *     MiLockDownWorkingSet @ 0x14055B238 (MiLockDownWorkingSet.c)
 * Callees:
 *     MiAreChargesNeededToLockPage @ 0x1402A3AC0 (MiAreChargesNeededToLockPage.c)
 *     MiChargeForLockedPage @ 0x1402A9130 (MiChargeForLockedPage.c)
 */

__int64 __fastcall MiAddLockedPageCharge(__int64 a1, char a2)
{
  unsigned int locked; // r9d
  unsigned int v4; // r10d

  if ( (a2 & 1) == 0 && *(_WORD *)(a1 + 32) >= 0x7FFFu )
    return 0LL;
  if ( (unsigned int)MiAreChargesNeededToLockPage(a1) )
  {
    locked = MiChargeForLockedPage(a1, v4);
    if ( !locked )
      return 0LL;
  }
  ++*(_WORD *)(a1 + 32);
  return locked;
}
