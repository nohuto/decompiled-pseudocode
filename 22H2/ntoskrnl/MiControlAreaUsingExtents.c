/*
 * XREFs of MiControlAreaUsingExtents @ 0x1402B32E0
 * Callers:
 *     MiFlushSectionInternal @ 0x140219D70 (MiFlushSectionInternal.c)
 *     MmPurgeSection @ 0x140238510 (MmPurgeSection.c)
 *     MiGatherMappedPages @ 0x140255428 (MiGatherMappedPages.c)
 *     MiReferenceDataSubsections @ 0x14027D7AC (MiReferenceDataSubsections.c)
 *     MiResolveMappedFileFault @ 0x140299B10 (MiResolveMappedFileFault.c)
 *     MmCheckCachedPageStates @ 0x1402A1C20 (MmCheckCachedPageStates.c)
 *     MmCopyToCachedPage @ 0x1402B1B90 (MmCopyToCachedPage.c)
 *     MiInsertUnusedSubsection @ 0x1402F5120 (MiInsertUnusedSubsection.c)
 *     MiAppendSubsectionChain @ 0x1402F97CC (MiAppendSubsectionChain.c)
 *     MiPfPrepareSequentialReadList @ 0x14063B4F0 (MiPfPrepareSequentialReadList.c)
 *     MiPfPrepareReadList @ 0x14063D030 (MiPfPrepareReadList.c)
 *     MmExtendSection @ 0x14066933C (MmExtendSection.c)
 *     MiExtendSection @ 0x140669618 (MiExtendSection.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiControlAreaUsingExtents(__int64 a1)
{
  return (*(_DWORD *)(a1 + 56) & 0x40000000) != 0;
}
