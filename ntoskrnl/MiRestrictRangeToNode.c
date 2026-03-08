/*
 * XREFs of MiRestrictRangeToNode @ 0x140370AB4
 * Callers:
 *     MiDescribePageRun @ 0x14037082C (MiDescribePageRun.c)
 *     MiInitializeDynamicPfns @ 0x140618AB8 (MiInitializeDynamicPfns.c)
 *     MiAddPartitionHugeRange @ 0x14061CDC4 (MiAddPartitionHugeRange.c)
 *     MiHotRemoveHugeRange @ 0x14061DC8C (MiHotRemoveHugeRange.c)
 *     MiSetHugeRangePartitionId @ 0x1406203CC (MiSetHugeRangePartitionId.c)
 *     MiUpdatePartitionChildPageCounts @ 0x140659730 (MiUpdatePartitionChildPageCounts.c)
 *     MiAddPhysicalMemoryChunks @ 0x140A2919C (MiAddPhysicalMemoryChunks.c)
 *     MiCreateDescriptorPfns @ 0x140B373F4 (MiCreateDescriptorPfns.c)
 *     MxCreateFreePfns @ 0x140B37690 (MxCreateFreePfns.c)
 *     MxInitializeFreeNodeDescriptors @ 0x140B37B68 (MxInitializeFreeNodeDescriptors.c)
 *     MxMapPfnRange @ 0x140B37F18 (MxMapPfnRange.c)
 *     MxComputeFreeNodeDescriptorRequirements @ 0x140B38484 (MxComputeFreeNodeDescriptorRequirements.c)
 *     MiRemoveLargeFreeLoaderDescriptors @ 0x140B69ECC (MiRemoveLargeFreeLoaderDescriptors.c)
 * Callees:
 *     MiSearchNumaNodeTable @ 0x140319DD0 (MiSearchNumaNodeTable.c)
 *     MiSearchChannelTable @ 0x14064319C (MiSearchChannelTable.c)
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
  if ( qword_140C65750 )
  {
    v7 = *(_QWORD *)(MiSearchChannelTable(BugCheckParameter2) + 16);
    v8 = BugCheckParameter2 + a2;
    a2 = v7 - BugCheckParameter2;
    if ( v8 <= v7 )
      return v5;
  }
  return a2;
}
