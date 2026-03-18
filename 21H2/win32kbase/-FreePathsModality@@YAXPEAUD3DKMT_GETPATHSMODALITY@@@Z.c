/*
 * XREFs of ?FreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0065C40
 * Callers:
 *     _DrvSetDisplayConfig_::_2_::_AUTO::__AUTO @ 0x1C0065BD4 (_DrvSetDisplayConfig_--_2_--_AUTO--__AUTO.c)
 *     DrvSetDisplayConfig @ 0x1C0065F30 (DrvSetDisplayConfig.c)
 *     GetPathsModality @ 0x1C0083798 (GetPathsModality.c)
 *     _DrvFunctionalizeDisplayConfig_::_2_::_AUTO::__AUTO @ 0x1C016FAB0 (_DrvFunctionalizeDisplayConfig_--_2_--_AUTO--__AUTO.c)
 *     ?SetDisplayConfigHandleBrokerProvidedPaths@@YAJPEAX_NIPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_GETPATHSMODALITY@@PEA_NPEAW4_DXGK_DIAG_SDC_STAGE@@@Z @ 0x1C0172A20 (-SetDisplayConfigHandleBrokerProvidedPaths@@YAJPEAX_NIPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAP.c)
 *     ?SetDisplayConfigHandlePreferredScaling@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAW4_DXGK_DIAG_SDC_STAGE@@@Z @ 0x1C017318C (-SetDisplayConfigHandlePreferredScaling@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAW4_DXGK_DIAG_SDC_STA.c)
 *     DrvDisplayConfigSetDeviceInfo @ 0x1C0173980 (DrvDisplayConfigSetDeviceInfo.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

void __fastcall FreePathsModality(struct D3DKMT_GETPATHSMODALITY *a1)
{
  if ( a1 )
  {
    ((void (*)(void))qword_1C0296718)();
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      a1);
  }
}
