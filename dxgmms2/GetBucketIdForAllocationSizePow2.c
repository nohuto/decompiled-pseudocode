/*
 * XREFs of GetBucketIdForAllocationSizePow2 @ 0x1C00F4040
 * Callers:
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@I_K@Z @ 0x1C008B300 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_N.c)
 *     ?FindResourcesForOneAllocation@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NI_K@Z @ 0x1C008DE1C (-FindResourcesForOneAllocation@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTIO.c)
 *     ?Resume@VIDMM_DEVICE@@QEAAJ_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00A8210 (-Resume@VIDMM_DEVICE@@QEAAJ_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?EvictAllMemoryAllocationInList@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00E27A0 (-EvictAllMemoryAllocationInList@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?AddData@VIDMM_TELEMETRY_PAGING_COSTS@@QEAAX_KI00I0I0I0I0I0I@Z @ 0x1C00F3E04 (-AddData@VIDMM_TELEMETRY_PAGING_COSTS@@QEAAX_KI00I0I0I0I0I0I@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetBucketIdForAllocationSizePow2(unsigned __int64 a1)
{
  int v3; // eax

  if ( a1 > 0x100000000LL )
    return 21LL;
  if ( !_BitScanReverse((unsigned int *)&v3, a1 >> 12) )
    return 0LL;
  else
    return (unsigned int)(v3 + 1);
}
