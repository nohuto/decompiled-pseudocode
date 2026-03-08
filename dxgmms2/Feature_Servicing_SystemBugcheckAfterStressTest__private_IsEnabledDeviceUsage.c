/*
 * XREFs of Feature_Servicing_SystemBugcheckAfterStressTest__private_IsEnabledDeviceUsage @ 0x1C0019BEC
 * Callers:
 *     ?CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@U_DXGK_ALLOCATIONINFOFLAGS2@@PEAVDXGADAPTERALLOCATION@@PEAX6KE6PEAVVIDMM_PAGE_TABLE_BASE@@PEAPEAU_VIDMM_CROSSADAPTER_ALLOC@@PEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C009F370 (-CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_D.c)
 *     ?InitializeForwardProgressMdl@VIDMM_SEGMENT@@IEAAJXZ @ 0x1C00BA990 (-InitializeForwardProgressMdl@VIDMM_SEGMENT@@IEAAJXZ.c)
 *     ?MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@1PEAU_MDL@@2131U_DXGK_TRANSFERFLAGS@@1@Z @ 0x1C00E5604 (-MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMEN.c)
 *     ?FreeForwardProgressMdl@VIDMM_SEGMENT@@IEAAXXZ @ 0x1C00FD318 (-FreeForwardProgressMdl@VIDMM_SEGMENT@@IEAAXXZ.c)
 * Callees:
 *     Feature_Servicing_SystemBugcheckAfterStressTest__private_IsEnabledFallback @ 0x1C0019C24 (Feature_Servicing_SystemBugcheckAfterStressTest__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_SystemBugcheckAfterStressTest__private_IsEnabledDeviceUsage()
{
  if ( (Feature_Servicing_SystemBugcheckAfterStressTest__private_featureState & 0x10) != 0 )
    return Feature_Servicing_SystemBugcheckAfterStressTest__private_featureState & 1;
  else
    return Feature_Servicing_SystemBugcheckAfterStressTest__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_SystemBugcheckAfterStressTest__private_featureState,
             3LL);
}
