/*
 * XREFs of MiRestrictRangeToNode @ 0x140375D64
 * Callers:
 *     MiDescribePageRun @ 0x140375ADC (MiDescribePageRun.c)
 *     MiInitializeDynamicPfns @ 0x14061AF68 (MiInitializeDynamicPfns.c)
 *     MiAddPartitionHugeRange @ 0x14061F274 (MiAddPartitionHugeRange.c)
 *     MiHotRemoveHugeRange @ 0x140620144 (MiHotRemoveHugeRange.c)
 *     MiSetHugeRangePartitionId @ 0x140622878 (MiSetHugeRangePartitionId.c)
 *     MiUpdatePartitionChildPageCounts @ 0x14065BD74 (MiUpdatePartitionChildPageCounts.c)
 *     MiAddPhysicalMemoryChunks @ 0x140A2BEFC (MiAddPhysicalMemoryChunks.c)
 *     MiCreateDescriptorPfns @ 0x140B45B04 (MiCreateDescriptorPfns.c)
 *     MxCreateFreePfns @ 0x140B45DA0 (MxCreateFreePfns.c)
 *     MxInitializeFreeNodeDescriptors @ 0x140B46278 (MxInitializeFreeNodeDescriptors.c)
 *     MxMapPfnRange @ 0x140B46628 (MxMapPfnRange.c)
 *     MxComputeFreeNodeDescriptorRequirements @ 0x140B46B94 (MxComputeFreeNodeDescriptorRequirements.c)
 *     MiRemoveLargeFreeLoaderDescriptors @ 0x140B6E278 (MiRemoveLargeFreeLoaderDescriptors.c)
 * Callees:
 *     MiSearchNumaNodeTable @ 0x14026E9B0 (MiSearchNumaNodeTable.c)
 *     MiSearchChannelTable @ 0x1406457C0 (MiSearchChannelTable.c)
 */

ULONG_PTR __fastcall MiRestrictRangeToNode(ULONG_PTR BugCheckParameter2, ULONG_PTR a2)
{
  ULONG_PTR v4; // rcx
  ULONG_PTR v5; // rsi
  ULONG_PTR v7; // rcx
  ULONG_PTR v8; // rax

  v4 = MiSearchNumaNodeTable(BugCheckParameter2)[2];
  if ( BugCheckParameter2 + a2 > v4 )
    a2 = v4 - BugCheckParameter2;
  v5 = a2;
  if ( qword_140C65BD0 )
  {
    v7 = *(_QWORD *)(MiSearchChannelTable(BugCheckParameter2) + 16);
    v8 = BugCheckParameter2 + a2;
    a2 = v7 - BugCheckParameter2;
    if ( v8 <= v7 )
      return v5;
  }
  return a2;
}
