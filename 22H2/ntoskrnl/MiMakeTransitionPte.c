/*
 * XREFs of MiMakeTransitionPte @ 0x1402AF040
 * Callers:
 *     MiCompletePrivateZeroFault @ 0x140210810 (MiCompletePrivateZeroFault.c)
 *     MmOutSwapProcess @ 0x140249E04 (MmOutSwapProcess.c)
 *     MiOutPageSingleKernelStack @ 0x1402638B0 (MiOutPageSingleKernelStack.c)
 *     MiInsertProtectedStandbyPage @ 0x1402A9B00 (MiInsertProtectedStandbyPage.c)
 *     MiDecrementAndInsertStandbyPages @ 0x1402ACA70 (MiDecrementAndInsertStandbyPages.c)
 *     MiDeleteParentDecayNode @ 0x1403036F4 (MiDeleteParentDecayNode.c)
 *     MiCreateDecayPfn @ 0x140306428 (MiCreateDecayPfn.c)
 *     MiTrimSystemImagePages @ 0x1403174C0 (MiTrimSystemImagePages.c)
 *     MiMakeVaRangeNoAccess @ 0x140321CF4 (MiMakeVaRangeNoAccess.c)
 *     MiInitializeTransitionPfn @ 0x14033723C (MiInitializeTransitionPfn.c)
 *     MmProtectPool @ 0x140362438 (MmProtectPool.c)
 *     MiConvertStandbyToProto @ 0x1403668C8 (MiConvertStandbyToProto.c)
 *     MiInitializeUnusablePfns @ 0x1403ABE00 (MiInitializeUnusablePfns.c)
 *     MiMakeOutswappedPageResident @ 0x14052BA00 (MiMakeOutswappedPageResident.c)
 *     MmProtectMdlSystemAddress @ 0x1405320F0 (MmProtectMdlSystemAddress.c)
 *     MiSwitchToTransition @ 0x140539E54 (MiSwitchToTransition.c)
 *     MiClearDriverHotPatchPtes @ 0x14053E368 (MiClearDriverHotPatchPtes.c)
 *     MmMapHotPatchTablePage @ 0x14053F3F0 (MmMapHotPatchTablePage.c)
 *     MiProtectAweRegion @ 0x14054D2A4 (MiProtectAweRegion.c)
 *     MiBuildForkPageTable @ 0x140557F0C (MiBuildForkPageTable.c)
 *     MiDuplicateCloneLeaf @ 0x14055A174 (MiDuplicateCloneLeaf.c)
 *     MiMakeProtoTransition @ 0x14055C6A8 (MiMakeProtoTransition.c)
 *     MmFreeLoaderBlock @ 0x140A4C7D0 (MmFreeLoaderBlock.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiMakeTransitionPte(__int64 a1, char a2)
{
  __int64 v2; // rcx

  v2 = 32 * (a2 & 0x1F | ((a1 & 0xFFFFFFFFFLL) << 7) | 0x40);
  if ( qword_140C4DF40 )
  {
    if ( (qword_140C4DF40 & v2) == 0 )
      return v2 | qword_140C4DF40;
    return v2 | 0x10;
  }
  return v2;
}
