/*
 * XREFs of MiRestrictRangeToNode @ 0x1403AC2E0
 * Callers:
 *     MiDescribePageRun @ 0x1403ABD38 (MiDescribePageRun.c)
 *     MiInitializeDynamicPfns @ 0x14052E4E0 (MiInitializeDynamicPfns.c)
 *     MiAddPhysicalMemoryChunks @ 0x1408C547C (MiAddPhysicalMemoryChunks.c)
 *     MiSwitchToPfns @ 0x140A42F08 (MiSwitchToPfns.c)
 *     MxCreateFreePfns @ 0x140A432FC (MxCreateFreePfns.c)
 *     MxInitializeFreeNodeDescriptors @ 0x140A43930 (MxInitializeFreeNodeDescriptors.c)
 *     MiRemoveLargeFreeLoaderDescriptors @ 0x140A43A34 (MiRemoveLargeFreeLoaderDescriptors.c)
 *     MxMapPfnRange @ 0x140A43D1C (MxMapPfnRange.c)
 *     MxComputeFreeNodeDescriptorRequirements @ 0x140A441C0 (MxComputeFreeNodeDescriptorRequirements.c)
 * Callees:
 *     MiSearchNumaNodeTable @ 0x1402ABE20 (MiSearchNumaNodeTable.c)
 *     MiSearchChannelTable @ 0x140547840 (MiSearchChannelTable.c)
 */

ULONG_PTR __fastcall MiRestrictRangeToNode(ULONG_PTR BugCheckParameter2, ULONG_PTR a2)
{
  ULONG_PTR v4; // rcx
  ULONG_PTR v6; // rdx
  ULONG_PTR v7; // rcx

  v4 = MiSearchNumaNodeTable(BugCheckParameter2)[2];
  if ( BugCheckParameter2 + a2 > v4 )
    a2 = v4 - BugCheckParameter2;
  if ( qword_140C4DED0 )
  {
    v6 = *(_QWORD *)(MiSearchChannelTable(BugCheckParameter2) + 16);
    v7 = v6 - BugCheckParameter2;
    if ( BugCheckParameter2 + a2 <= v6 )
      return a2;
    return v7;
  }
  return a2;
}
