/*
 * XREFs of McGenEventWrite_EventWriteTransfer @ 0x1800B284C
 * Callers:
 *     ?RenderEffect@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@@Z @ 0x1800052F4 (-RenderEffect@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@MUMilR.c)
 *     ?RenderLayer@CFilterEffectLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x18000DD84 (-RenderLayer@CFilterEffectLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RunCompositionThread@CConnection@@AEAAJXZ @ 0x1800267EC (-RunCompositionThread@CConnection@@AEAAJXZ.c)
 *     ?Reset@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x180026D24 (-Reset@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 *     ?RestoreState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18002C570 (-RestoreState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?ProcessUpdate@CCompositionSurfaceBitmap@@UEAAJPEBVCResourceTable@@PEBUtagMILCMD_COMPOSITIONSURFACEBITMAP@@@Z @ 0x180036E80 (-ProcessUpdate@CCompositionSurfaceBitmap@@UEAAJPEBVCResourceTable@@PEBUtagMILCMD_COMPOSITIONSURF.c)
 *     ?OpenSharedTexture@CD3DDevice@@QEAAJPEAUD3D11_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAX_NPEAPEAUID3D11Texture2D@@@Z @ 0x18003A194 (-OpenSharedTexture@CD3DDevice@@QEAAJPEAUD3D11_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAX_N.c)
 *     ?RestoreState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800412E0 (-RestoreState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?Clear@CD2DContext@@UEAAXPEBVID2DContextOwner@@AEBU_D3DCOLORVALUE@@@Z @ 0x1800414C0 (-Clear@CD2DContext@@UEAAXPEBVID2DContextOwner@@AEBU_D3DCOLORVALUE@@@Z.c)
 *     ?GetBits@CaptureBitsResponse@@IEAAJXZ @ 0x180043334 (-GetBits@CaptureBitsResponse@@IEAAJXZ.c)
 *     ??0CaptureBitsResponse@@QEAA@PEAVCGlobalSurfaceManager@@PEAVCChannelContext@@PEAVCVisualTree@@MAEBUWICRect@@W4DXGI_FORMAT@@_K@Z @ 0x180043B00 (--0CaptureBitsResponse@@QEAA@PEAVCGlobalSurfaceManager@@PEAVCChannelContext@@PEAVCVisualTree@@MA.c)
 *     ?LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAUVertexShaderDesc@@PEAPEAUID3D10Blob@@@Z @ 0x180047838 (-LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V-$span@PEBUShaderLinkingBody@@$.c)
 *     ?UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ @ 0x18006DC30 (-UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ.c)
 *     ?ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ @ 0x18006E0E0 (-ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ.c)
 *     ?GetPresentStatisticsAndAdjustRates@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x18006F7D0 (-GetPresentStatisticsAndAdjustRates@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?WaitForNextFrameStart@CPartitionVerticalBlankScheduler@@AEAAJ_N@Z @ 0x18006FAB0 (-WaitForNextFrameStart@CPartitionVerticalBlankScheduler@@AEAAJ_N@Z.c)
 *     ?WaitForWork@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x18006FEAC (-WaitForWork@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAXXZ @ 0x180070200 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAXXZ.c)
 *     ?TryDebouncingParallelMode@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x180071D30 (-TryDebouncingParallelMode@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?FrameEnded@CTelemetryFrames@@SAX_N0_K@Z @ 0x180071D98 (-FrameEnded@CTelemetryFrames@@SAX_N0_K@Z.c)
 *     ?PreRender@CComposition@@IEAAJXZ @ 0x180072020 (-PreRender@CComposition@@IEAAJXZ.c)
 *     ?Present@CComposition@@QEAAJPEAUFRAME_TIME_INFO@@@Z @ 0x180075400 (-Present@CComposition@@QEAAJPEAUFRAME_TIME_INFO@@@Z.c)
 *     ?PostPresent@CComposition@@QEAAJ_N@Z @ 0x180077800 (-PostPresent@CComposition@@QEAAJ_N@Z.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18007BE10 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180088E00 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18008A510 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x18008FC84 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?UpdateCVIRenderTargets@CDesktopTree@@QEAAXPEBVCOcclusionContext@@AEBVRenderTargetInfo@@@Z @ 0x1800926DC (-UpdateCVIRenderTargets@CDesktopTree@@QEAAXPEBVCOcclusionContext@@AEBVRenderTargetInfo@@@Z.c)
 *     ?NotifyDirtySurface@CWindowNode@@QEAAXAEBVCRegion@@_N1@Z @ 0x18009BECC (-NotifyDirtySurface@CWindowNode@@QEAAXAEBVCRegion@@_N1@Z.c)
 *     ?ProcessSurfaceUpdates@CGlobalSurfaceManager@@UEAAJXZ @ 0x18009C570 (-ProcessSurfaceUpdates@CGlobalSurfaceManager@@UEAAJXZ.c)
 *     ?CopyFrontToBackBuffer@CLegacySwapChain@@UEAAJXZ @ 0x18009D7E4 (-CopyFrontToBackBuffer@CLegacySwapChain@@UEAAJXZ.c)
 *     McTemplateU0qqqzzq_EventWriteTransfer @ 0x1800B25FC (McTemplateU0qqqzzq_EventWriteTransfer.c)
 *     McTemplateU0xxqqqzzq_EventWriteTransfer @ 0x1800B2714 (McTemplateU0xxqqqzzq_EventWriteTransfer.c)
 *     ?ManipulationThreadMain@CGlobalManipulationManager@@EEAAJXZ @ 0x1800B4C10 (-ManipulationThreadMain@CGlobalManipulationManager@@EEAAJXZ.c)
 *     ?PresentMPO@COverlayContext@@QEAAJPEAVIOverlaySwapChain@@IAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x1800EBD50 (-PresentMPO@COverlayContext@@QEAAJPEAVIOverlaySwapChain@@IAEBV-$vector@UtagRECT@@V-$allocator@Ut.c)
 *     ?Render@CHolographicInteropTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800F2130 (-Render@CHolographicInteropTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     McTemplateU0q_EventWriteTransfer @ 0x180152674 (McTemplateU0q_EventWriteTransfer.c)
 *     McTemplateU0qq_EventWriteTransfer @ 0x1801526D8 (McTemplateU0qq_EventWriteTransfer.c)
 *     McTemplateU0qqq_EventWriteTransfer @ 0x180152748 (McTemplateU0qqq_EventWriteTransfer.c)
 *     McTemplateU0qqqqqqqqqqqqq_EventWriteTransfer @ 0x1801527C8 (McTemplateU0qqqqqqqqqqqqq_EventWriteTransfer.c)
 *     McTemplateU0xq_EventWriteTransfer @ 0x180152914 (McTemplateU0xq_EventWriteTransfer.c)
 *     McTemplateU0qQR0qQR2qQR4qQR6qQR8_EventWriteTransfer @ 0x180152D64 (McTemplateU0qQR0qQR2qQR4qQR6qQR8_EventWriteTransfer.c)
 *     McTemplateU0qqqq_EventWriteTransfer @ 0x180153D6C (McTemplateU0qqqq_EventWriteTransfer.c)
 *     McTemplateU0qqqqq_EventWriteTransfer @ 0x180153E08 (McTemplateU0qqqqq_EventWriteTransfer.c)
 *     McTemplateU0t_EventWriteTransfer @ 0x180153EBC (McTemplateU0t_EventWriteTransfer.c)
 *     McTemplateU0x_EventWriteTransfer @ 0x180153F28 (McTemplateU0x_EventWriteTransfer.c)
 *     McTemplateU0xqqq_EventWriteTransfer @ 0x180153F8C (McTemplateU0xqqq_EventWriteTransfer.c)
 *     McTemplateU0xqxxqq_EventWriteTransfer @ 0x180154030 (McTemplateU0xqxxqq_EventWriteTransfer.c)
 *     McTemplateU0xxxxq_EventWriteTransfer @ 0x1801540F4 (McTemplateU0xxxxq_EventWriteTransfer.c)
 *     McTemplateU0xxxxx_EventWriteTransfer @ 0x1801541AC (McTemplateU0xxxxx_EventWriteTransfer.c)
 *     McTemplateU0qqx_EventWriteTransfer @ 0x180155F3C (McTemplateU0qqx_EventWriteTransfer.c)
 *     McTemplateU0xx_EventWriteTransfer @ 0x180155FC8 (McTemplateU0xx_EventWriteTransfer.c)
 *     McTemplateU0qxqxxxqxxxxqxxxxxxxxxxqqqxqxxxx_EventWriteTransfer @ 0x1801561B4 (McTemplateU0qxqxxxqxxxxqxxxxxxxxxxqqqxqxxxx_EventWriteTransfer.c)
 *     McTemplateU0xxqqxxqzqqqqqqzzqq_EventWriteTransfer @ 0x1801570F4 (McTemplateU0xxqqxxqzqqqqqqzzqq_EventWriteTransfer.c)
 *     McTemplateU0xzqqqz_EventWriteTransfer @ 0x180157340 (McTemplateU0xzqqqz_EventWriteTransfer.c)
 *     McTemplateU0zqqqq_EventWriteTransfer @ 0x180157450 (McTemplateU0zqqqq_EventWriteTransfer.c)
 *     McTemplateU0zqqqqq_EventWriteTransfer @ 0x18015752C (McTemplateU0zqqqqq_EventWriteTransfer.c)
 *     McTemplateU0zqqqqx_EventWriteTransfer @ 0x180157618 (McTemplateU0zqqqqx_EventWriteTransfer.c)
 *     McTemplateU0xhhxqnttz_EventWriteTransfer @ 0x1801617A4 (McTemplateU0xhhxqnttz_EventWriteTransfer.c)
 *     McTemplateU0xxqqqhhqqxxqntz_EventWriteTransfer @ 0x1801618C8 (McTemplateU0xxqqqhhqqxxqntz_EventWriteTransfer.c)
 *     McTemplateU0qff_EventWriteTransfer @ 0x1801623C8 (McTemplateU0qff_EventWriteTransfer.c)
 *     McTemplateU0qxxff_EventWriteTransfer @ 0x180162448 (McTemplateU0qxxff_EventWriteTransfer.c)
 *     McTemplateU0qNR0_EventWriteTransfer @ 0x180162C8C (McTemplateU0qNR0_EventWriteTransfer.c)
 *     McTemplateU0xxf_EventWriteTransfer @ 0x180162D08 (McTemplateU0xxf_EventWriteTransfer.c)
 *     McTemplateU0xxxtxxxxxxxxqN16_EventWriteTransfer @ 0x180162D9C (McTemplateU0xxxtxxxxxxxxqN16_EventWriteTransfer.c)
 *     McTemplateU0qqxx_EventWriteTransfer @ 0x180163278 (McTemplateU0qqxx_EventWriteTransfer.c)
 *     McTemplateU0pdsddt_EventWriteTransfer @ 0x180167FA0 (McTemplateU0pdsddt_EventWriteTransfer.c)
 *     McTemplateU0qqqqxxqx_EventWriteTransfer @ 0x180173D94 (McTemplateU0qqqqxxqx_EventWriteTransfer.c)
 *     McTemplateU0qqxqx_EventWriteTransfer @ 0x180173E78 (McTemplateU0qqxqx_EventWriteTransfer.c)
 *     McTemplateU0ppffffubr6_EventWriteTransfer @ 0x1801787F0 (McTemplateU0ppffffubr6_EventWriteTransfer.c)
 *     McTemplateU0ppffffubr6q_EventWriteTransfer @ 0x1801788D8 (McTemplateU0ppffffubr6q_EventWriteTransfer.c)
 *     McTemplateU0xxqNR2_EventWriteTransfer @ 0x180178C34 (McTemplateU0xxqNR2_EventWriteTransfer.c)
 *     McTemplateU0xxq_EventWriteTransfer @ 0x180178CDC (McTemplateU0xxq_EventWriteTransfer.c)
 *     McTemplateU0xxxqNR3_EventWriteTransfer @ 0x180178D64 (McTemplateU0xxxqNR3_EventWriteTransfer.c)
 *     ?CheckMultiPlaneOverlaySupport@COverlayContext@@CA_NAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@AEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@3@@Z @ 0x18017AC48 (-CheckMultiPlaneOverlaySupport@COverlayContext@@CA_NAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@AE.c)
 *     McTemplateU0xd_EventWriteTransfer @ 0x18017D2C8 (McTemplateU0xd_EventWriteTransfer.c)
 *     McTemplateU0xddddd_EventWriteTransfer @ 0x18017D34C (McTemplateU0xddddd_EventWriteTransfer.c)
 *     McTemplateU0xdddddddqqddddddddddddqqq_EventWriteTransfer @ 0x18017D408 (McTemplateU0xdddddddqqddddddddddddqqq_EventWriteTransfer.c)
 *     McTemplateU0xddqqddddddddddddqqq_EventWriteTransfer @ 0x18017D678 (McTemplateU0xddqqddddddddddddqqq_EventWriteTransfer.c)
 *     McTemplateU0xqddddddddddddqqq_EventWriteTransfer @ 0x18017D86C (McTemplateU0xqddddddddddddqqq_EventWriteTransfer.c)
 *     McTemplateU0xqqdddd_EventWriteTransfer @ 0x18017DA1C (McTemplateU0xqqdddd_EventWriteTransfer.c)
 *     McTemplateU0xqqqddddddddddddqqq_EventWriteTransfer @ 0x18017DAEC (McTemplateU0xqqqddddddddddddqqq_EventWriteTransfer.c)
 *     McTemplateU0dffffq_EventWriteTransfer @ 0x180183880 (McTemplateU0dffffq_EventWriteTransfer.c)
 *     McTemplateU0xdddddddd_EventWriteTransfer @ 0x180183944 (McTemplateU0xdddddddd_EventWriteTransfer.c)
 *     ?FlushAndWaitAtPresent@CLegacyRenderTarget@@IEAAXXZ @ 0x180184484 (-FlushAndWaitAtPresent@CLegacyRenderTarget@@IEAAXXZ.c)
 *     McTemplateU0qdffff_EventWriteTransfer @ 0x180184F50 (McTemplateU0qdffff_EventWriteTransfer.c)
 *     McTemplateU0qx_EventWriteTransfer @ 0x18018500C (McTemplateU0qx_EventWriteTransfer.c)
 *     McTemplateU0xqq_EventWriteTransfer @ 0x180185090 (McTemplateU0xqq_EventWriteTransfer.c)
 *     McTemplateU0zqq_EventWriteTransfer @ 0x180185114 (McTemplateU0zqq_EventWriteTransfer.c)
 *     McTemplateU0xxddffff_EventWriteTransfer @ 0x18018BBD0 (McTemplateU0xxddffff_EventWriteTransfer.c)
 *     ?FlushAndWaitAtPresent@CDDisplayRenderTarget@@IEAAXXZ @ 0x18018C114 (-FlushAndWaitAtPresent@CDDisplayRenderTarget@@IEAAXXZ.c)
 *     McTemplateU0ffff_EventWriteTransfer @ 0x18018E510 (McTemplateU0ffff_EventWriteTransfer.c)
 *     McTemplateU0pxffffffffffffffff_EventWriteTransfer @ 0x18018FA20 (McTemplateU0pxffffffffffffffff_EventWriteTransfer.c)
 *     ?RenderLayer@CColorTransformLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x18018FFE0 (-RenderLayer@CColorTransformLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     McTemplateU0xqqf_EventWriteTransfer @ 0x1801A5748 (McTemplateU0xqqf_EventWriteTransfer.c)
 *     McTemplateU0xxxq_EventWriteTransfer @ 0x1801A6988 (McTemplateU0xxxq_EventWriteTransfer.c)
 *     McTemplateU0ppffffdd_EventWriteTransfer @ 0x1801ABC9C (McTemplateU0ppffffdd_EventWriteTransfer.c)
 *     McTemplateU0pffffss_EventWriteTransfer @ 0x1801AEEE4 (McTemplateU0pffffss_EventWriteTransfer.c)
 *     McTemplateU0qqqxxpp_EventWriteTransfer @ 0x1801AF004 (McTemplateU0qqqxxpp_EventWriteTransfer.c)
 *     McTemplateU0xxqf_EventWriteTransfer @ 0x1801B6488 (McTemplateU0xxqf_EventWriteTransfer.c)
 *     McTemplateU0xxxqf_EventWriteTransfer @ 0x1801B652C (McTemplateU0xxxqf_EventWriteTransfer.c)
 *     McTemplateU0pppffff_EventWriteTransfer @ 0x1801BC884 (McTemplateU0pppffff_EventWriteTransfer.c)
 *     ?GetBrushParameters@CEffectBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x1801BFAB0 (-GetBrushParameters@CEffectBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     McTemplateU0pxqtq_EventWriteTransfer @ 0x1801C3590 (McTemplateU0pxqtq_EventWriteTransfer.c)
 *     McTemplateU0pqqNR2_EventWriteTransfer @ 0x1801C7060 (McTemplateU0pqqNR2_EventWriteTransfer.c)
 *     McTemplateU0ppffff_EventWriteTransfer @ 0x1801E3758 (McTemplateU0ppffff_EventWriteTransfer.c)
 *     McTemplateU0pq_EventWriteTransfer @ 0x1801E3814 (McTemplateU0pq_EventWriteTransfer.c)
 *     McTemplateU0qxqq_EventWriteTransfer @ 0x1801E3888 (McTemplateU0qxqq_EventWriteTransfer.c)
 *     McTemplateU0pxtt_EventWriteTransfer @ 0x1801F0590 (McTemplateU0pxtt_EventWriteTransfer.c)
 *     McTemplateU0xxx_EventWriteTransfer @ 0x1801F3DFC (McTemplateU0xxx_EventWriteTransfer.c)
 *     McTemplateU0nxxxqqxqqqqqqqqx_EventWriteTransfer @ 0x1801F9060 (McTemplateU0nxxxqqxqqqqqqqqx_EventWriteTransfer.c)
 *     McTemplateU0xxqqqqq_EventWriteTransfer @ 0x1801F91F8 (McTemplateU0xxqqqqq_EventWriteTransfer.c)
 *     McTemplateU0s_EventWriteTransfer @ 0x1801F9430 (McTemplateU0s_EventWriteTransfer.c)
 *     McTemplateU0qqppxffffffffffffffff_EventWriteTransfer @ 0x1802222B8 (McTemplateU0qqppxffffffffffffffff_EventWriteTransfer.c)
 *     McTemplateU0qqxq_EventWriteTransfer @ 0x1802224C4 (McTemplateU0qqxq_EventWriteTransfer.c)
 *     McTemplateU0ppqx_EventWriteTransfer @ 0x180228160 (McTemplateU0ppqx_EventWriteTransfer.c)
 *     McTemplateU0qqp_EventWriteTransfer @ 0x180228C3C (McTemplateU0qqp_EventWriteTransfer.c)
 *     McTemplateU0pqnz_EventWriteTransfer @ 0x180240FA4 (McTemplateU0pqnz_EventWriteTransfer.c)
 *     McTemplateU0xqdddd_EventWriteTransfer @ 0x180241078 (McTemplateU0xqdddd_EventWriteTransfer.c)
 *     McTemplateU0xxdddddd_EventWriteTransfer @ 0x180241140 (McTemplateU0xxdddddd_EventWriteTransfer.c)
 *     McTemplateU0xxxx_EventWriteTransfer @ 0x1802580F0 (McTemplateU0xxxx_EventWriteTransfer.c)
 *     McTemplateU0f_EventWriteTransfer @ 0x18025C3FC (McTemplateU0f_EventWriteTransfer.c)
 *     McTemplateU0qqqxx_EventWriteTransfer @ 0x180269098 (McTemplateU0qqqxx_EventWriteTransfer.c)
 * Callees:
 *     <none>
 */

ULONG __fastcall McGenEventWrite_EventWriteTransfer(
        REGHANDLE *a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        ULONG a4,
        PEVENT_DATA_DESCRIPTOR UserData)
{
  unsigned __int16 *v5; // r10
  int v6; // eax
  ULONG v8; // r9d

  v5 = (unsigned __int16 *)a1[1];
  v6 = 0;
  if ( v5 )
  {
    UserData->Ptr = (ULONGLONG)v5;
    v6 = 2;
    v8 = *v5;
  }
  else
  {
    UserData->Ptr = 0LL;
    v8 = 0;
  }
  UserData->Size = v8;
  UserData->Reserved = v6;
  return EventWriteTransfer(*a1, a2, 0LL, 0LL, a4, UserData);
}
