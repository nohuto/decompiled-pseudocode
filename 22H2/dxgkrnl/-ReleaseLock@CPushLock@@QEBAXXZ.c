/*
 * XREFs of ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0013858
 * Callers:
 *     ?UpdateDirtyRegions@CCompositionToken@@QEAAJXZ @ 0x1C00015B4 (-UpdateDirtyRegions@CCompositionToken@@QEAAJXZ.c)
 *     ?DxgkQuerySwapChainBindingStatus@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C000ACBC (-DxgkQuerySwapChainBindingStatus@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?ReleaseToFrame@CTokenManager@@UEAAXPEAUICompositionFrame@@@Z @ 0x1C000C0A0 (-ReleaseToFrame@CTokenManager@@UEAAXPEAUICompositionFrame@@@Z.c)
 *     ?OkToClose@CCompositionSurface@@MEAAJPEAU_EPROCESS@@PEAX1D@Z @ 0x1C0013780 (-OkToClose@CCompositionSurface@@MEAAJPEAU_EPROCESS@@PEAX1D@Z.c)
 *     ?Discard@CCompositionFrame@@UEAAXXZ @ 0x1C0017BA0 (-Discard@CCompositionFrame@@UEAAXXZ.c)
 *     ?FlipManagerDwmProcessFlipManagerSignal@@YAXPEAU_LIST_ENTRY@@_K@Z @ 0x1C0017EE4 (-FlipManagerDwmProcessFlipManagerSignal@@YAXPEAU_LIST_ENTRY@@_K@Z.c)
 *     ?Confirm@CCompositionFrame@@UEAAXXZ @ 0x1C0017F40 (-Confirm@CCompositionFrame@@UEAAXXZ.c)
 *     ?GetAndClearSyncId@FlipManagerTokenObject@@QEAAJPEA_K@Z @ 0x1C0027E90 (-GetAndClearSyncId@FlipManagerTokenObject@@QEAAJPEA_K@Z.c)
 *     ??1CIFlipPresentHistoryTokenFlipManager@@UEAA@XZ @ 0x1C0052C94 (--1CIFlipPresentHistoryTokenFlipManager@@UEAA@XZ.c)
 *     ?Pair@CompositionSurfaceObject@@QEAAJPEAUIPairedSurfaceObject@@@Z @ 0x1C005AB60 (-Pair@CompositionSurfaceObject@@QEAAJPEAUIPairedSurfaceObject@@@Z.c)
 *     ?UnlockAndRelease@CFlipManagerToken@@QEAAXXZ @ 0x1C0076F38 (-UnlockAndRelease@CFlipManagerToken@@QEAAXXZ.c)
 *     ?CompleteFlipManagerToken@CTokenManager@@IEAAXPEAUFlipManagerTokenObject@@PEA_N@Z @ 0x1C007723C (-CompleteFlipManagerToken@CTokenManager@@IEAAXPEAUFlipManagerTokenObject@@PEA_N@Z.c)
 *     ?GetAnalogExclusive@CompositionSurfaceObject@@QEAA_NXZ @ 0x1C0077AEC (-GetAnalogExclusive@CompositionSurfaceObject@@QEAA_NXZ.c)
 *     ?GetFlipManagerObjectNoRef@FlipManagerTokenObject@@QEAAJPEAPEAUFlipManagerObject@@@Z @ 0x1C0077D0C (-GetFlipManagerObjectNoRef@FlipManagerTokenObject@@QEAAJPEAPEAUFlipManagerObject@@@Z.c)
 *     ?IsVBlankVirtualizationDisabled@CompositionSurfaceObject@@QEBA_N_K@Z @ 0x1C0077D68 (-IsVBlankVirtualizationDisabled@CompositionSurfaceObject@@QEBA_N_K@Z.c)
 *     ?SetSyncRefreshCount@CompositionSurfaceObject@@QEAAXI@Z @ 0x1C0077F28 (-SetSyncRefreshCount@CompositionSurfaceObject@@QEAAXI@Z.c)
 *     ?StartCompositionEarly@CompositionSurfaceObject@@QEAA_N_K@Z @ 0x1C0077FA0 (-StartCompositionEarly@CompositionSurfaceObject@@QEAA_N_K@Z.c)
 *     ?UpdateStatsForIndependentFlip@CompositionSurfaceObject@@QEAAX_KAEBUDXGI_FRAME_STATISTICS@@I@Z @ 0x1C0078020 (-UpdateStatsForIndependentFlip@CompositionSurfaceObject@@QEAAX_KAEBUDXGI_FRAME_STATISTICS@@I@Z.c)
 *     ?GetSurfaceUpdate@CompositionSurfaceObject@@QEAAJ_KPEAUCSM_SURFACE_UPDATE_@@@Z @ 0x1C0078194 (-GetSurfaceUpdate@CompositionSurfaceObject@@QEAAJ_KPEAUCSM_SURFACE_UPDATE_@@@Z.c)
 *     ?SignalGpuFence@CompositionSurfaceObject@@QEAAJ_K0_N@Z @ 0x1C0078C50 (-SignalGpuFence@CompositionSurfaceObject@@QEAAJ_K0_N@Z.c)
 *     ?SignalPresentLimitSemaphore@CompositionSurfaceObject@@QEAAX_K@Z @ 0x1C0078CE8 (-SignalPresentLimitSemaphore@CompositionSurfaceObject@@QEAAX_K@Z.c)
 *     ?ConfirmIndependentFlipEntry@CompositionSurfaceObject@@QEAAJ_K00II0@Z @ 0x1C007967C (-ConfirmIndependentFlipEntry@CompositionSurfaceObject@@QEAAJ_K00II0@Z.c)
 *     ?GetEarlyTokenSync@CompositionSurfaceObject@@QEBA_N_K@Z @ 0x1C00798E8 (-GetEarlyTokenSync@CompositionSurfaceObject@@QEBA_N_K@Z.c)
 *     ?GetIndependentFlipNotifyDwm@CompositionSurfaceObject@@QEAAJ_KPEA_N@Z @ 0x1C0079974 (-GetIndependentFlipNotifyDwm@CompositionSurfaceObject@@QEAAJ_KPEA_N@Z.c)
 *     ?GetIndependentFlipState@CompositionSurfaceObject@@QEBA?AW4IndependentFlipState@@_K@Z @ 0x1C00799FC (-GetIndependentFlipState@CompositionSurfaceObject@@QEBA-AW4IndependentFlipState@@_K@Z.c)
 *     ?NotifyTokenCompleted@CompositionSurfaceObject@@QEAAJAEBVCFlipToken@@@Z @ 0x1C007A028 (-NotifyTokenCompleted@CompositionSurfaceObject@@QEAAJAEBVCFlipToken@@@Z.c)
 *     ?NotifyTokenInFrame@CompositionSurfaceObject@@QEAAJAEBVCToken@@PEA_N@Z @ 0x1C007A088 (-NotifyTokenInFrame@CompositionSurfaceObject@@QEAAJAEBVCToken@@PEA_N@Z.c)
 *     ?SyncIntervalSatisfied@CompositionSurfaceObject@@QEAAJIPEA_N@Z @ 0x1C007A238 (-SyncIntervalSatisfied@CompositionSurfaceObject@@QEAAJIPEA_N@Z.c)
 *     ?UpdateStats@CompositionSurfaceObject@@QEAAX_KAEBUDXGI_FRAME_STATISTICS@@@Z @ 0x1C007A3C0 (-UpdateStats@CompositionSurfaceObject@@QEAAX_KAEBUDXGI_FRAME_STATISTICS@@@Z.c)
 *     ?DxgkSetCompositionSurfaceInkCookie@@YAJPEAXI@Z @ 0x1C007A700 (-DxgkSetCompositionSurfaceInkCookie@@YAJPEAXI@Z.c)
 *     ?MarkPending@FlipManagerTokenObject@@QEAAJXZ @ 0x1C007A774 (-MarkPending@FlipManagerTokenObject@@QEAAJXZ.c)
 *     ?GetPairedSurfaceInfo@CompositionSurfaceObject@@UEBAJAEAIAEA_K@Z @ 0x1C007C1B0 (-GetPairedSurfaceInfo@CompositionSurfaceObject@@UEBAJAEAIAEA_K@Z.c)
 *     ?InsertCompletedToken@CompositionSurfaceObject@@UEAAJ_K0PEAUtagCloneableFlipTokenData@@@Z @ 0x1C007C240 (-InsertCompletedToken@CompositionSurfaceObject@@UEAAJ_K0PEAUtagCloneableFlipTokenData@@@Z.c)
 *     ?PairedBind@CompositionSurfaceObject@@UEAAJPEAUCSM_BUFFER_INFO@@_NPEA_K@Z @ 0x1C007C360 (-PairedBind@CompositionSurfaceObject@@UEAAJPEAUCSM_BUFFER_INFO@@_NPEA_K@Z.c)
 *     ?PairedQueryStats@CompositionSurfaceObject@@UEBAJPEAUCSM_BUFFER_STATISTICS@@@Z @ 0x1C007C3E0 (-PairedQueryStats@CompositionSurfaceObject@@UEBAJPEAUCSM_BUFFER_STATISTICS@@@Z.c)
 *     ?PairedUnBind@CompositionSurfaceObject@@UEAAJ_N@Z @ 0x1C007C460 (-PairedUnBind@CompositionSurfaceObject@@UEAAJ_N@Z.c)
 *     ?AddContent@FlipManagerObject@@QEAAJ_KPEAVCFlipPropertySet@@@Z @ 0x1C007FC2C (-AddContent@FlipManagerObject@@QEAAJ_KPEAVCFlipPropertySet@@@Z.c)
 *     ?AddPoolBuffer@FlipManagerObject@@QEAAJ_KPEAXAEBU_LUID@@PEAVCFlipPropertySet@@@Z @ 0x1C007FC9C (-AddPoolBuffer@FlipManagerObject@@QEAAJ_KPEAXAEBU_LUID@@PEAVCFlipPropertySet@@@Z.c)
 *     ?ConsumerAcquirePresent@FlipManagerObject@@QEAAJIIPEAPEAXPEAPEAVCFlipPropertySet@@@Z @ 0x1C007FD18 (-ConsumerAcquirePresent@FlipManagerObject@@QEAAJIIPEAPEAXPEAPEAVCFlipPropertySet@@@Z.c)
 *     ?ConsumerAdjustUsageReference@FlipManagerObject@@QEAAJ_K_N@Z @ 0x1C007FD94 (-ConsumerAdjustUsageReference@FlipManagerObject@@QEAAJ_K_N@Z.c)
 *     ?ConsumerBeginProcessPresent@FlipManagerObject@@QEAAJPEAI0@Z @ 0x1C007FE24 (-ConsumerBeginProcessPresent@FlipManagerObject@@QEAAJPEAI0@Z.c)
 *     ?ConsumerPostMessage@FlipManagerObject@@QEAAJPEAVCFlipConsumerMessage@@@Z @ 0x1C007FE94 (-ConsumerPostMessage@FlipManagerObject@@QEAAJPEAVCFlipConsumerMessage@@@Z.c)
 *     ?ConsumerQueryBufferInfo@FlipManagerObject@@QEAAJ_KPEAU_LUID@@PEAPEAX@Z @ 0x1C007FEFC (-ConsumerQueryBufferInfo@FlipManagerObject@@QEAAJ_KPEAU_LUID@@PEAPEAX@Z.c)
 *     ?DisconnectEndpoint@FlipManagerObject@@QEAAJ_N@Z @ 0x1C007FF98 (-DisconnectEndpoint@FlipManagerObject@@QEAAJ_N@Z.c)
 *     ?EnablePresentStatisticsType@FlipManagerObject@@QEAAJW4KernelPresentStatisticsType@@_N@Z @ 0x1C0080004 (-EnablePresentStatisticsType@FlipManagerObject@@QEAAJW4KernelPresentStatisticsType@@_N@Z.c)
 *     ?IsEndpointConnected@FlipManagerObject@@QEAAJ_NPEA_N@Z @ 0x1C0080080 (-IsEndpointConnected@FlipManagerObject@@QEAAJ_NPEA_N@Z.c)
 *     ?PresentCancel@FlipManagerObject@@QEAAJ_K@Z @ 0x1C00800F0 (-PresentCancel@FlipManagerObject@@QEAAJ_K@Z.c)
 *     ?QueryBufferAvailableEvent@FlipManagerObject@@QEAAJ_KPEAPEAX@Z @ 0x1C0080150 (-QueryBufferAvailableEvent@FlipManagerObject@@QEAAJ_KPEAPEAX@Z.c)
 *     ?QueryLostEvent@FlipManagerObject@@QEAAJPEAXPEAPEAX@Z @ 0x1C00801C0 (-QueryLostEvent@FlipManagerObject@@QEAAJPEAXPEAPEAX@Z.c)
 *     ?QueryNextMessageToProducer@FlipManagerObject@@QEAAJ_NPEAPEAVCFlipConsumerMessage@@@Z @ 0x1C008024C (-QueryNextMessageToProducer@FlipManagerObject@@QEAAJ_NPEAPEAVCFlipConsumerMessage@@@Z.c)
 *     ?RemoveContent@FlipManagerObject@@QEAAJ_KPEAPEAVCDisableScanoutToken@@@Z @ 0x1C0080334 (-RemoveContent@FlipManagerObject@@QEAAJ_KPEAPEAVCDisableScanoutToken@@@Z.c)
 *     ?RemovePoolBuffer@FlipManagerObject@@QEAAJ_K@Z @ 0x1C00803A4 (-RemovePoolBuffer@FlipManagerObject@@QEAAJ_K@Z.c)
 *     ?SetContent@FlipManagerObject@@QEAAJ_K0PEAVCFlipPropertySet@@@Z @ 0x1C0080404 (-SetContent@FlipManagerObject@@QEAAJ_K0PEAVCFlipPropertySet@@@Z.c)
 *     NtFlipObjectConsumerEndProcessPresent @ 0x1C0080AF0 (NtFlipObjectConsumerEndProcessPresent.c)
 *     ?CreatePresentUpdateForProducer@FlipManagerObject@@QEAAJ_N_K0PEAVCFlipPropertySet@@PEAPEAVCFlipPresentUpdate@@PEAPEAUFlipManagerTokenIFlipInfo@@@Z @ 0x1C0081B7C (-CreatePresentUpdateForProducer@FlipManagerObject@@QEAAJ_N_K0PEAVCFlipPropertySet@@PEAPEAVCFlipP.c)
 *     ?CreateWaitedConsumerReturnForConsumer@FlipManagerObject@@QEAAJ_KPEAPEAVCFlipWaitedConsumerReturn@@@Z @ 0x1C0081C18 (-CreateWaitedConsumerReturnForConsumer@FlipManagerObject@@QEAAJ_KPEAPEAVCFlipWaitedConsumerRetur.c)
 *     ?FlipManagerConsumerAdapterCleanupTokenDiscard@@YAJPEAUFlipManagerTokenObject@@@Z @ 0x1C0081C78 (-FlipManagerConsumerAdapterCleanupTokenDiscard@@YAJPEAUFlipManagerTokenObject@@@Z.c)
 *     ?FlipManagerConsumerIFlipTokenCompleted@@YAJPEAVCFlipManagerToken@@PEAPEAVCToken@@@Z @ 0x1C0081CF4 (-FlipManagerConsumerIFlipTokenCompleted@@YAJPEAVCFlipManagerToken@@PEAPEAVCToken@@@Z.c)
 *     ?IsDwmBound@FlipManagerObject@@QEAAJPEA_N@Z @ 0x1C0082088 (-IsDwmBound@FlipManagerObject@@QEAAJPEA_N@Z.c)
 *     ?NotifyAdapterCleanupTokenDiscard@FlipManagerObject@@QEAAJ_K@Z @ 0x1C00820E8 (-NotifyAdapterCleanupTokenDiscard@FlipManagerObject@@QEAAJ_K@Z.c)
 *     ?OpenEndpoint@FlipManagerObject@@QEAAJ_NPEAPEAX1@Z @ 0x1C0082410 (-OpenEndpoint@FlipManagerObject@@QEAAJ_NPEAPEAX1@Z.c)
 *     ?Close@CFlipManager@@MEAAJPEAU_EPROCESS@@PEAX_K2@Z @ 0x1C0082A50 (-Close@CFlipManager@@MEAAJPEAU_EPROCESS@@PEAX_K2@Z.c)
 *     ?ApplyIncrementalUpdate@CEndpointResourceStateManager@@QEAAJPEBVCFlipPresentUpdate@@@Z @ 0x1C0085F74 (-ApplyIncrementalUpdate@CEndpointResourceStateManager@@QEAAJPEBVCFlipPresentUpdate@@@Z.c)
 *     ?Complete@CFlipPresentUpdate@@UEAAXXZ @ 0x1C0088AA0 (-Complete@CFlipPresentUpdate@@UEAAXXZ.c)
 *     ?Discard@CFlipPresentUpdate@@UEAAXXZ @ 0x1C0088B10 (-Discard@CFlipPresentUpdate@@UEAAXXZ.c)
 *     ?Pending@CFlipPresentUpdate@@UEAAXXZ @ 0x1C0088B80 (-Pending@CFlipPresentUpdate@@UEAAXXZ.c)
 *     ?PrepareIndependentFlipToken@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEAVCRefCountedBuffer@@@Z @ 0x1C01BC948 (-PrepareIndependentFlipToken@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUV.c)
 *     DxgkGetPresentHistoryInternal @ 0x1C01EB820 (DxgkGetPresentHistoryInternal.c)
 *     ?IsIFlipSupported@CIFlipPresentHistoryToken@@SA_NPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C01EEB6C (-IsIFlipSupported@CIFlipPresentHistoryToken@@SA_NPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     NtDxgkVailPromoteCompositionSurface @ 0x1C0365210 (NtDxgkVailPromoteCompositionSurface.c)
 * Callees:
 *     <none>
 */

void __fastcall CPushLock::ReleaseLock(CPushLock *this)
{
  if ( KeGetCurrentThread() == *((struct _KTHREAD **)this + 1) )
  {
    *((_QWORD *)this + 1) = 0LL;
    ExReleasePushLockExclusiveEx(this, 0LL);
  }
  else
  {
    ExReleasePushLockSharedEx(this, 0LL);
  }
  KeLeaveCriticalRegion();
}
