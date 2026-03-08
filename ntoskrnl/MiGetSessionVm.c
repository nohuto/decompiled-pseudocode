/*
 * XREFs of MiGetSessionVm @ 0x14036C17C
 * Callers:
 *     MiEmptyAccessLogs @ 0x1402005B0 (MiEmptyAccessLogs.c)
 *     MiSessionRemoveImage @ 0x1402009A8 (MiSessionRemoveImage.c)
 *     MiDeleteSessionPdes @ 0x140200F38 (MiDeleteSessionPdes.c)
 *     MiInitializeColorBase @ 0x14020FE2C (MiInitializeColorBase.c)
 *     MiSystemFault @ 0x1402220A0 (MiSystemFault.c)
 *     MiProbeAndLockPrepare @ 0x14026B160 (MiProbeAndLockPrepare.c)
 *     MiTrimSharedPageFromViews @ 0x1402A031C (MiTrimSharedPageFromViews.c)
 *     MmCopyMemory @ 0x1402A1CE0 (MmCopyMemory.c)
 *     MiTranslatePageForCopy @ 0x1402A1FD4 (MiTranslatePageForCopy.c)
 *     MiMakeDriverPagesPrivate @ 0x1402A6440 (MiMakeDriverPagesPrivate.c)
 *     MiCountSystemImageCommitment @ 0x1402B0C2C (MiCountSystemImageCommitment.c)
 *     MiCopyOnWrite @ 0x140319F00 (MiCopyOnWrite.c)
 *     MiLockCode @ 0x14032C9C0 (MiLockCode.c)
 *     MiSetSystemCodeProtection @ 0x14032E170 (MiSetSystemCodeProtection.c)
 *     MiSessionInsertImage @ 0x14036BEC4 (MiSessionInsertImage.c)
 *     MiLockStealSystemVm @ 0x140394CFC (MiLockStealSystemVm.c)
 *     MiReplaceImportEntry @ 0x14062A2A0 (MiReplaceImportEntry.c)
 *     MmAddRangeToCrashDump @ 0x14062DD30 (MmAddRangeToCrashDump.c)
 *     MiTrimAllSystemPagableMemory @ 0x140632E70 (MiTrimAllSystemPagableMemory.c)
 *     MiLockPatchIatForDV @ 0x14063E0B0 (MiLockPatchIatForDV.c)
 *     MiMapRetpolineStubs @ 0x14063E2EC (MiMapRetpolineStubs.c)
 *     MiUnmapRetpolineStubs @ 0x14063EE24 (MiUnmapRetpolineStubs.c)
 *     MmPrefetchVirtualMemory @ 0x14067E690 (MmPrefetchVirtualMemory.c)
 *     MiUnloadSystemImage @ 0x1407F627C (MiUnloadSystemImage.c)
 *     MiApplyRequiredSessionDriverHotPatches @ 0x1407F6F6C (MiApplyRequiredSessionDriverHotPatches.c)
 *     MiCompleteSecureDriverLoad @ 0x140880F78 (MiCompleteSecureDriverLoad.c)
 *     MiApplyDriverHotPatch @ 0x140A31BB8 (MiApplyDriverHotPatch.c)
 *     MiUnapplyDriverHotPatch @ 0x140A390F8 (MiUnapplyDriverHotPatch.c)
 *     MiUnmapPatchTable @ 0x140A3953C (MiUnmapPatchTable.c)
 * Callees:
 *     <none>
 */

unsigned __int64 MiGetSessionVm()
{
  unsigned __int64 result; // rax

  result = KeGetCurrentThread()->ApcState.Process[1].Affinity.StaticBitmap[25];
  if ( result )
    result += 192LL;
  return result;
}
