/*
 * XREFs of ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C000AEB4
 * Callers:
 *     ?DxgkQuerySwapChainBindingStatus@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C000ACBC (-DxgkQuerySwapChainBindingStatus@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?GetAndClearSyncId@FlipManagerTokenObject@@QEAAJPEA_K@Z @ 0x1C0027E90 (-GetAndClearSyncId@FlipManagerTokenObject@@QEAAJPEA_K@Z.c)
 *     ?GetAnalogExclusive@CompositionSurfaceObject@@QEAA_NXZ @ 0x1C0077AEC (-GetAnalogExclusive@CompositionSurfaceObject@@QEAA_NXZ.c)
 *     ?GetFlipManagerObjectNoRef@FlipManagerTokenObject@@QEAAJPEAPEAUFlipManagerObject@@@Z @ 0x1C0077D0C (-GetFlipManagerObjectNoRef@FlipManagerTokenObject@@QEAAJPEAPEAUFlipManagerObject@@@Z.c)
 *     ?IsVBlankVirtualizationDisabled@CompositionSurfaceObject@@QEBA_N_K@Z @ 0x1C0077D68 (-IsVBlankVirtualizationDisabled@CompositionSurfaceObject@@QEBA_N_K@Z.c)
 *     ?StartCompositionEarly@CompositionSurfaceObject@@QEAA_N_K@Z @ 0x1C0077FA0 (-StartCompositionEarly@CompositionSurfaceObject@@QEAA_N_K@Z.c)
 *     ?GetSurfaceUpdate@CompositionSurfaceObject@@QEAAJ_KPEAUCSM_SURFACE_UPDATE_@@@Z @ 0x1C0078194 (-GetSurfaceUpdate@CompositionSurfaceObject@@QEAAJ_KPEAUCSM_SURFACE_UPDATE_@@@Z.c)
 *     ?SignalGpuFence@CompositionSurfaceObject@@QEAAJ_K0_N@Z @ 0x1C0078C50 (-SignalGpuFence@CompositionSurfaceObject@@QEAAJ_K0_N@Z.c)
 *     ?SignalPresentLimitSemaphore@CompositionSurfaceObject@@QEAAX_K@Z @ 0x1C0078CE8 (-SignalPresentLimitSemaphore@CompositionSurfaceObject@@QEAAX_K@Z.c)
 *     ?GetEarlyTokenSync@CompositionSurfaceObject@@QEBA_N_K@Z @ 0x1C00798E8 (-GetEarlyTokenSync@CompositionSurfaceObject@@QEBA_N_K@Z.c)
 *     ?GetIndependentFlipNotifyDwm@CompositionSurfaceObject@@QEAAJ_KPEA_N@Z @ 0x1C0079974 (-GetIndependentFlipNotifyDwm@CompositionSurfaceObject@@QEAAJ_KPEA_N@Z.c)
 *     ?GetIndependentFlipState@CompositionSurfaceObject@@QEBA?AW4IndependentFlipState@@_K@Z @ 0x1C00799FC (-GetIndependentFlipState@CompositionSurfaceObject@@QEBA-AW4IndependentFlipState@@_K@Z.c)
 *     ?SyncIntervalSatisfied@CompositionSurfaceObject@@QEAAJIPEA_N@Z @ 0x1C007A238 (-SyncIntervalSatisfied@CompositionSurfaceObject@@QEAAJIPEA_N@Z.c)
 *     ?MarkPending@FlipManagerTokenObject@@QEAAJXZ @ 0x1C007A774 (-MarkPending@FlipManagerTokenObject@@QEAAJXZ.c)
 *     ?GetPairedSurfaceInfo@CompositionSurfaceObject@@UEBAJAEAIAEA_K@Z @ 0x1C007C1B0 (-GetPairedSurfaceInfo@CompositionSurfaceObject@@UEBAJAEAIAEA_K@Z.c)
 *     ?PairedQueryStats@CompositionSurfaceObject@@UEBAJPEAUCSM_BUFFER_STATISTICS@@@Z @ 0x1C007C3E0 (-PairedQueryStats@CompositionSurfaceObject@@UEBAJPEAUCSM_BUFFER_STATISTICS@@@Z.c)
 *     ?PrepareIndependentFlipToken@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEAVCRefCountedBuffer@@@Z @ 0x1C01BC948 (-PrepareIndependentFlipToken@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUV.c)
 *     ?IsIFlipSupported@CIFlipPresentHistoryToken@@SA_NPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C01EEB6C (-IsIFlipSupported@CIFlipPresentHistoryToken@@SA_NPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CPushLock::AcquireLockShared(CPushLock *this)
{
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(this, 0LL);
  return 0LL;
}
