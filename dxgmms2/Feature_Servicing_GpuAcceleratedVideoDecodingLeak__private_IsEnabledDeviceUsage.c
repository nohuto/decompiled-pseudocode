/*
 * XREFs of Feature_Servicing_GpuAcceleratedVideoDecodingLeak__private_IsEnabledDeviceUsage @ 0x1C001A5BC
 * Callers:
 *     ?FreeWithStore@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAU_LOOKASIDE_LIST_EX@@PEAXPEAPEAXPEAI@Z @ 0x1C000201C (-FreeWithStore@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAU_LOOKASIDE_LIST_EX@@PEAXPEAPEAXPEAI@Z.c)
 *     ?AllocateWithStore@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAXPEAU_LOOKASIDE_LIST_EX@@PEAPEAXPEAI@Z @ 0x1C000206C (-AllocateWithStore@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAXPEAU_LOOKASIDE_LIST_EX@@PEAPEAXPEAI@Z.c)
 *     ?ReleaseMultirangeReference@VIDMM_RECYCLE_BLOCK@@QEAAXXZ @ 0x1C0032220 (-ReleaseMultirangeReference@VIDMM_RECYCLE_BLOCK@@QEAAXXZ.c)
 *     ??1VIDMM_RECYCLE_HEAP_MGR@@UEAA@XZ @ 0x1C0095F98 (--1VIDMM_RECYCLE_HEAP_MGR@@UEAA@XZ.c)
 *     ?Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX11PEAEE@Z @ 0x1C0096EB4 (-Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX11PEAEE@Z.c)
 *     ?ShiftTreeMembershipOnDebouncedStateChange@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0099390 (-ShiftTreeMembershipOnDebouncedStateChange@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?Free@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C00999D0 (-Free@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?Destroy@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1C0099D5C (-Destroy@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ.c)
 *     ?MergeWithNeighborsIfPossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAV1@XZ @ 0x1C0099FC0 (-MergeWithNeighborsIfPossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAV1@XZ.c)
 *     ?MergeRanges@VIDMM_RECYCLE_MULTIRANGE@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@0@Z @ 0x1C009AF50 (-MergeRanges@VIDMM_RECYCLE_MULTIRANGE@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@0@Z.c)
 *     ?SplitAt@VIDMM_RECYCLE_RANGE@@QEAAX_KPEA_N@Z @ 0x1C009C2F0 (-SplitAt@VIDMM_RECYCLE_RANGE@@QEAAX_KPEA_N@Z.c)
 *     ?Allocate@VIDMM_RECYCLE_HEAP_MGR@@UEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX22PEAEEE@Z @ 0x1C009CCE0 (-Allocate@VIDMM_RECYCLE_HEAP_MGR@@UEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX22PEAEEE@Z.c)
 *     ?DestroyRange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00B3404 (-DestroyRange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 * Callees:
 *     Feature_Servicing_GpuAcceleratedVideoDecodingLeak__private_IsEnabledFallback @ 0x1C001A5F4 (Feature_Servicing_GpuAcceleratedVideoDecodingLeak__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_GpuAcceleratedVideoDecodingLeak__private_IsEnabledDeviceUsage()
{
  if ( (Feature_Servicing_GpuAcceleratedVideoDecodingLeak__private_featureState & 0x10) != 0 )
    return Feature_Servicing_GpuAcceleratedVideoDecodingLeak__private_featureState & 1;
  else
    return Feature_Servicing_GpuAcceleratedVideoDecodingLeak__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_GpuAcceleratedVideoDecodingLeak__private_featureState,
             3LL);
}
