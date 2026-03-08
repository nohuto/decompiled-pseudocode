/*
 * XREFs of Feature_Servicing_GfxDriverEventsMemoryLeak__private_IsEnabledDeviceUsage @ 0x1C0019B98
 * Callers:
 *     ?CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@U_DXGK_ALLOCATIONINFOFLAGS2@@PEAVDXGADAPTERALLOCATION@@PEAX6KE6PEAVVIDMM_PAGE_TABLE_BASE@@PEAPEAU_VIDMM_CROSSADAPTER_ALLOC@@PEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C009F370 (-CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_D.c)
 *     ?VidMmUpdateContextAllocationCb@VIDMM_GLOBAL@@QEAAJPEBU_DXGKARGCB_UPDATECONTEXTALLOCATION@@E@Z @ 0x1C00EAC60 (-VidMmUpdateContextAllocationCb@VIDMM_GLOBAL@@QEAAJPEBU_DXGKARGCB_UPDATECONTEXTALLOCATION@@E@Z.c)
 * Callees:
 *     Feature_Servicing_GfxDriverEventsMemoryLeak__private_IsEnabledFallback @ 0x1C0019BD0 (Feature_Servicing_GfxDriverEventsMemoryLeak__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_GfxDriverEventsMemoryLeak__private_IsEnabledDeviceUsage()
{
  if ( (Feature_Servicing_GfxDriverEventsMemoryLeak__private_featureState & 0x10) != 0 )
    return Feature_Servicing_GfxDriverEventsMemoryLeak__private_featureState & 1;
  else
    return Feature_Servicing_GfxDriverEventsMemoryLeak__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_GfxDriverEventsMemoryLeak__private_featureState,
             3LL);
}
