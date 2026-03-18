/*
 * XREFs of MiGetSessionVm @ 0x14020B13C
 * Callers:
 *     MiEmptyAccessLogs @ 0x1402005B0 (MiEmptyAccessLogs.c)
 *     MiSessionRemoveImage @ 0x1402009A8 (MiSessionRemoveImage.c)
 *     MiDeleteSessionPdes @ 0x140200FD8 (MiDeleteSessionPdes.c)
 *     MiCountSystemImageCommitment @ 0x14020ABD4 (MiCountSystemImageCommitment.c)
 *     MiSessionInsertImage @ 0x14020AE84 (MiSessionInsertImage.c)
 *     MiInitializeColorBase @ 0x140211FB4 (MiInitializeColorBase.c)
 *     MiProbeAndLockPrepare @ 0x140234D90 (MiProbeAndLockPrepare.c)
 *     MiSystemFault @ 0x140261080 (MiSystemFault.c)
 *     MiCopyOnWrite @ 0x14026FC80 (MiCopyOnWrite.c)
 *     MiLockCode @ 0x140282210 (MiLockCode.c)
 *     MiSetSystemCodeProtection @ 0x1402841F0 (MiSetSystemCodeProtection.c)
 *     MiMakeDriverPagesPrivate @ 0x140291930 (MiMakeDriverPagesPrivate.c)
 *     MmCopyMemory @ 0x1402EDB50 (MmCopyMemory.c)
 *     MiTranslatePageForCopy @ 0x1402EDE44 (MiTranslatePageForCopy.c)
 *     MiTrimSharedPageFromViews @ 0x1402EFC5C (MiTrimSharedPageFromViews.c)
 *     MiLockStealSystemVm @ 0x14039875C (MiLockStealSystemVm.c)
 *     MiReplaceImportEntry @ 0x14062C720 (MiReplaceImportEntry.c)
 *     MmAddRangeToCrashDump @ 0x1406301B0 (MmAddRangeToCrashDump.c)
 *     MiTrimAllSystemPagableMemory @ 0x140635300 (MiTrimAllSystemPagableMemory.c)
 *     MiLockPatchIatForDV @ 0x140640510 (MiLockPatchIatForDV.c)
 *     MiMapRetpolineStubs @ 0x14064074C (MiMapRetpolineStubs.c)
 *     MiUnmapRetpolineStubs @ 0x140641284 (MiUnmapRetpolineStubs.c)
 *     MmPrefetchVirtualMemory @ 0x140681A70 (MmPrefetchVirtualMemory.c)
 *     MiUnloadSystemImage @ 0x1406962FC (MiUnloadSystemImage.c)
 *     MiApplyRequiredSessionDriverHotPatches @ 0x140696FEC (MiApplyRequiredSessionDriverHotPatches.c)
 *     MiCompleteSecureDriverLoad @ 0x140885D58 (MiCompleteSecureDriverLoad.c)
 *     MiApplyDriverHotPatch @ 0x140A348E8 (MiApplyDriverHotPatch.c)
 *     MiUnapplyDriverHotPatch @ 0x140A3BDD8 (MiUnapplyDriverHotPatch.c)
 *     MiUnmapPatchTable @ 0x140A3C220 (MiUnmapPatchTable.c)
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
