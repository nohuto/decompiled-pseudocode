/*
 * XREFs of MiIsPfnFileOnly @ 0x140218D20
 * Callers:
 *     MiProbeLeafPteAccess @ 0x14020B6B0 (MiProbeLeafPteAccess.c)
 *     MiResolveProtoPteFault @ 0x140215390 (MiResolveProtoPteFault.c)
 *     MiResolveTransitionFault @ 0x140216750 (MiResolveTransitionFault.c)
 *     MiHandleTransitionFault @ 0x140217410 (MiHandleTransitionFault.c)
 *     MiFillSystemPtes @ 0x140226EB0 (MiFillSystemPtes.c)
 *     MmUnlockPages @ 0x1402443E0 (MmUnlockPages.c)
 *     MiTradePage @ 0x140281260 (MiTradePage.c)
 *     MiActivePageClaimCandidate @ 0x140282D80 (MiActivePageClaimCandidate.c)
 *     MiUnlockImageSection @ 0x14029B0C0 (MiUnlockImageSection.c)
 *     MmCheckCachedPageStates @ 0x1402A1C20 (MmCheckCachedPageStates.c)
 *     MiLockCode @ 0x1402A3C40 (MiLockCode.c)
 *     MiMakePageAvoidRead @ 0x1402A4700 (MiMakePageAvoidRead.c)
 *     MiGetPagePrivilege @ 0x1402A8D80 (MiGetPagePrivilege.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1402A9250 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiLockStealSystemVm @ 0x1402EB854 (MiLockStealSystemVm.c)
 *     MiMakeSystemCachePteValid @ 0x1402F3648 (MiMakeSystemCachePteValid.c)
 *     MiRestoreTransitionPte @ 0x1402FB620 (MiRestoreTransitionPte.c)
 *     MiUnlinkStandbyPfn @ 0x140307F30 (MiUnlinkStandbyPfn.c)
 *     MiLockStealUserVm @ 0x140333FE4 (MiLockStealUserVm.c)
 *     MiTradeTransitionPage @ 0x1403346F8 (MiTradeTransitionPage.c)
 *     MiCanPageMove @ 0x1403349A0 (MiCanPageMove.c)
 *     MmSetPfnListInfo @ 0x1403733C4 (MmSetPfnListInfo.c)
 *     MiMirrorGatherBrownPages @ 0x140382408 (MiMirrorGatherBrownPages.c)
 *     MiMapContiguousMemoryLarge @ 0x1403B81F4 (MiMapContiguousMemoryLarge.c)
 *     MiMapSystemCachePage @ 0x140536FE4 (MiMapSystemCachePage.c)
 *     MiMarkFileOnlyPfnBad @ 0x140541648 (MiMarkFileOnlyPfnBad.c)
 *     MiDbgMarkPfnModified @ 0x140545C2C (MiDbgMarkPfnModified.c)
 *     MiUnlinkPageFromBadList @ 0x14054F480 (MiUnlinkPageFromBadList.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsPfnFileOnly(__int64 a1)
{
  return (*(_QWORD *)(a1 + 40) & 0x2000000000000LL) != 0;
}
