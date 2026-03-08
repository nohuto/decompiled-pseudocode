/*
 * XREFs of ?InternalRelease@?$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ @ 0x1800DB0E4
 * Callers:
 *     ??_GCShaderCache@@QEAAPEAXI@Z @ 0x18001BE58 (--_GCShaderCache@@QEAAPEAXI@Z.c)
 *     ??1CaptureBitsResponse@@UEAA@XZ @ 0x180020294 (--1CaptureBitsResponse@@UEAA@XZ.c)
 *     ?CreateLinkedShader@CShaderCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAPEAVCLinkedShader@@@Z @ 0x180026C2C (-CreateLinkedShader@CShaderCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@V-$span@.c)
 *     ??4?$ComPtr@VCLinkedShader@@@WRL@Microsoft@@QEAAAEAV012@PEAVCLinkedShader@@@Z @ 0x180026D7C (--4-$ComPtr@VCLinkedShader@@@WRL@Microsoft@@QEAAAEAV012@PEAVCLinkedShader@@@Z.c)
 *     ?GetCommonOrCubeMapRenderingShader@CCommonRenderingShaderCache@@AEAAJPEAVCD3DDevice@@AEBUCommonRenderingShaderDesc@@_NPEAIPEAPEAUID3D11PixelShader@@@Z @ 0x18002C590 (-GetCommonOrCubeMapRenderingShader@CCommonRenderingShaderCache@@AEAAJPEAVCD3DDevice@@AEBUCommonR.c)
 *     ?ExecuteShaders@CGraphRenderingContext@CExternalEffectGraph@@QEBAJII@Z @ 0x18002FAD0 (-ExecuteShaders@CGraphRenderingContext@CExternalEffectGraph@@QEBAJII@Z.c)
 *     ?GetCache@CDrawListCacheSet@@QEAAJIIPEBVIDeviceTarget@@PEAPEAVCDrawListCache@@@Z @ 0x18003EE00 (-GetCache@CDrawListCacheSet@@QEAAJIIPEBVIDeviceTarget@@PEAPEAVCDrawListCache@@@Z.c)
 *     ?clear_region@?$vector_facade@UContentEntry@CDrawListCacheSet@@V?$buffer_impl@UContentEntry@CDrawListCacheSet@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x180040864 (-clear_region@-$vector_facade@UContentEntry@CDrawListCacheSet@@V-$buffer_impl@UContentEntry@CDra.c)
 *     ?FlushChannels@CComposition@@QEAAXXZ @ 0x18004D118 (-FlushChannels@CComposition@@QEAAXXZ.c)
 *     ?AddKeyframeData@CKeyframeAnimation@@AEAAJHMPEAUKeyframeData@@W4KeyframeAnimationCoordinateSpace@@@Z @ 0x180055D38 (-AddKeyframeData@CKeyframeAnimation@@AEAAJHMPEAUKeyframeData@@W4KeyframeAnimationCoordinateSpace.c)
 *     ?FillShapeWithBrush@CDrawingContext@@QEAAJAEBVCShape@@PEAUID2D1Brush@@@Z @ 0x18005A5D4 (-FillShapeWithBrush@CDrawingContext@@QEAAJAEBVCShape@@PEAUID2D1Brush@@@Z.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x1800748A0 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180078E40 (-Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?OpenDrawListEntryBatch@CDrawListBatchManager@@IEAAJPEAVIDeviceTarget@@PEAPEAVCDrawListEntryBatch@@@Z @ 0x180085A34 (-OpenDrawListEntryBatch@CDrawListBatchManager@@IEAAJPEAVIDeviceTarget@@PEAPEAVCDrawListEntryBatc.c)
 *     ?PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z @ 0x18008D178 (-PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?PushTarget@CD2DContext@@UEAAJPEAVID2DContextOwner@@PEAVIDeviceTarget@@@Z @ 0x18008DB60 (-PushTarget@CD2DContext@@UEAAJPEAVID2DContextOwner@@PEAVIDeviceTarget@@@Z.c)
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x18008DE30 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     ?ProcessRenderCommands_OffscreenRenderPass@CCpuClipAntialiasSinkContext@@AEAAJPEAVCDrawingContext@@IPEAV?$list@USinkRenderCommand@CCpuClipAntialiasSinkContext@@V?$allocator@USinkRenderCommand@CCpuClipAntialiasSinkContext@@@std@@@std@@PEBV?$vector_facade@UBounds@CCpuClipAntialiasSink@@V?$buffer_impl@UBounds@CCpuClipAntialiasSink@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x180091278 (-ProcessRenderCommands_OffscreenRenderPass@CCpuClipAntialiasSinkContext@@AEAAJPEAVCDrawingContex.c)
 *     ?Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z @ 0x1800947C0 (-Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z.c)
 *     ?GetDrawListCacheForCommandRun@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCTreeData@@IPEAPEAVCDrawListCache@@@Z @ 0x180095830 (-GetDrawListCacheForCommandRun@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCTreeData@@IPEAPEAVCDr.c)
 *     ??1CDrawListEntryBuilder@@QEAA@XZ @ 0x18009598C (--1CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ?ProcessDataOnChannelSameProcess@CGlobalComposition@@EEAAJPEBUUCE_RDP_HEADER@@PEAI@Z @ 0x18009B970 (-ProcessDataOnChannelSameProcess@CGlobalComposition@@EEAAJPEBUUCE_RDP_HEADER@@PEAI@Z.c)
 *     ??1CGdiSpriteBitmap@@MEAA@XZ @ 0x1800A99F4 (--1CGdiSpriteBitmap@@MEAA@XZ.c)
 *     ?CloseChannel@CComposition@@IEAAJI@Z @ 0x1800A9BF4 (-CloseChannel@CComposition@@IEAAJI@Z.c)
 *     ?ProcessDataOnChannel@CComposition@@IEAAJPEBUUCE_RDP_HEADER@@PEAI@Z @ 0x1800AA520 (-ProcessDataOnChannel@CComposition@@IEAAJPEBUUCE_RDP_HEADER@@PEAI@Z.c)
 *     ??$ReleaseInterface@VCChannelContext@@@@YAXAEAPEAVCChannelContext@@@Z @ 0x1800AA7C8 (--$ReleaseInterface@VCChannelContext@@@@YAXAEAPEAVCChannelContext@@@Z.c)
 *     ??$ReleaseInterface@VCProcessAttribution@@@@YAXAEAPEAVCProcessAttribution@@@Z @ 0x1800AB2F8 (--$ReleaseInterface@VCProcessAttribution@@@@YAXAEAPEAVCProcessAttribution@@@Z.c)
 *     ?ReleaseResponseRef@CResponseItem@@UEAAXXZ @ 0x1800AC020 (-ReleaseResponseRef@CResponseItem@@UEAAXXZ.c)
 *     ?Create@CGlobalComposition@@SAJPEAVCTransport@@PEAVICompositorScheduler@@PEAVCConnection@@PEAVCDebugFrameCounter@@PEAPEAVCComposition@@@Z @ 0x1800CB540 (-Create@CGlobalComposition@@SAJPEAVCTransport@@PEAVICompositorScheduler@@PEAVCConnection@@PEAVCD.c)
 *     ?Create@CGlobalSurfaceManager@@SAJPEAPEAX0PEAPEAVCSurfaceManager@@@Z @ 0x1800CB5F8 (-Create@CGlobalSurfaceManager@@SAJPEAPEAX0PEAPEAVCSurfaceManager@@@Z.c)
 *     ?CreateRenderingResources@CDrawListBatchManager@@IEAAJXZ @ 0x1800CF778 (-CreateRenderingResources@CDrawListBatchManager@@IEAAJXZ.c)
 *     ?DestroyDeviceResources@CDrawListBatchManager@@IEAAXXZ @ 0x1800D1140 (-DestroyDeviceResources@CDrawListBatchManager@@IEAAXXZ.c)
 *     ??$destruct_range@USinkRenderParameters@CCpuClipAntialiasSinkContext@@@detail@@YAXPEAUSinkRenderParameters@CCpuClipAntialiasSinkContext@@0@Z @ 0x1800DE42C (--$destruct_range@USinkRenderParameters@CCpuClipAntialiasSinkContext@@@detail@@YAXPEAUSinkRender.c)
 *     ??1Keyframe@KeyframeSequence@@QEAA@XZ @ 0x1800DF590 (--1Keyframe@KeyframeSequence@@QEAA@XZ.c)
 *     ?Create@CEffectCompilationService@@SAJPEAUIMessageSession@@PEAPEAV1@@Z @ 0x1800E2C04 (-Create@CEffectCompilationService@@SAJPEAUIMessageSession@@PEAPEAV1@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCGenericInkTipPointSource@@@WRL@Microsoft@@IEAAKXZ @ 0x1800E83CC (-InternalRelease@-$ComPtr@VCGenericInkTipPointSource@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Partition_RegisterForNotifications@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_PARTITION_REGISTERFORNOTIFICATIONS@@@Z @ 0x1800EB3D8 (-Partition_RegisterForNotifications@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@.c)
 *     ??$move@V?$move_iterator@PEAUContentEntry@CDrawListCacheSet@@@std@@V?$checked_array_iterator@PEAUContentEntry@CDrawListCacheSet@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUContentEntry@CDrawListCacheSet@@@stdext@@V?$move_iterator@PEAUContentEntry@CDrawListCacheSet@@@0@0V12@@Z @ 0x1800EC3F4 (--$move@V-$move_iterator@PEAUContentEntry@CDrawListCacheSet@@@std@@V-$checked_array_iterator@PEA.c)
 *     ??1CDrawListBatchManager@@IEAA@XZ @ 0x1800EE30C (--1CDrawListBatchManager@@IEAA@XZ.c)
 *     ?Create@CRedirectedGDISurface@@SAHPEAUHLSURF__@@PEAVCGdiSpriteBitmap@@PEAVCLegacySurfaceManager@@PEAPEAV1@@Z @ 0x1800F195C (-Create@CRedirectedGDISurface@@SAHPEAUHLSURF__@@PEAVCGdiSpriteBitmap@@PEAVCLegacySurfaceManager@.c)
 *     ??_GContentEntry@CDrawListCacheSet@@QEAAPEAXI@Z @ 0x1800FBBB8 (--_GContentEntry@CDrawListCacheSet@@QEAAPEAXI@Z.c)
 *     ??1CSwapChainBuffer@@QEAA@XZ @ 0x1801010A0 (--1CSwapChainBuffer@@QEAA@XZ.c)
 *     ?Create@CHolographicManager@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x18010165C (-Create@CHolographicManager@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     ?Optimize@?$ShrinkableArray@PEAVCDrawListEntryBatch@@U?$RefCountLifetime@PEAVCDrawListEntryBatch@@@@@@QEAAXXZ @ 0x180101C18 (-Optimize@-$ShrinkableArray@PEAVCDrawListEntryBatch@@U-$RefCountLifetime@PEAVCDrawListEntryBatch.c)
 *     ?AddLinkedShader@CShaderCache@@IEAAJULookupKey@ShaderLinkingConfig@@PEAVCLinkedShader@@@Z @ 0x180102210 (-AddLinkedShader@CShaderCache@@IEAAJULookupKey@ShaderLinkingConfig@@PEAVCLinkedShader@@@Z.c)
 *     ??1CCommonRenderingShaderCache@@QEAA@XZ @ 0x18010DD70 (--1CCommonRenderingShaderCache@@QEAA@XZ.c)
 *     ?Release@CManipulationContext@@UEAAKXZ @ 0x180129790 (-Release@CManipulationContext@@UEAAKXZ.c)
 *     ?Release@CHolographicInteropTaskQueue@@UEAAKXZ @ 0x180129CE0 (-Release@CHolographicInteropTaskQueue@@UEAAKXZ.c)
 *     ??1CComposition@@MEAA@XZ @ 0x1801B0AEC (--1CComposition@@MEAA@XZ.c)
 *     ?ReleaseNotificationChannels@CComposition@@AEAAXXZ @ 0x1801B1E9C (-ReleaseNotificationChannels@CComposition@@AEAAXXZ.c)
 *     ?DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCCompositionEnvironmentLight@@AEBVCMILMatrix@@@Z @ 0x1801D1564 (-DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCCompositionEnvironmentLight@@AEBVCMIL.c)
 *     ?Release@CSpectreCallbackRenderer@@UEAAKXZ @ 0x1801D3A80 (-Release@CSpectreCallbackRenderer@@UEAAKXZ.c)
 *     ??1?$com_ptr_t@VCComputeScribbleFramebuffer@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801D4394 (--1-$com_ptr_t@VCComputeScribbleFramebuffer@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$ComPtr@VCLinkedShader@@@WRL@Microsoft@@QEAA@XZ @ 0x1801E2F28 (--1-$ComPtr@VCLinkedShader@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??_GCCompiledEffectCache@@QEAAPEAXI@Z @ 0x1801E3010 (--_GCCompiledEffectCache@@QEAAPEAXI@Z.c)
 *     ?ProcessCaptureBits@CMagnifierRenderTarget@@QEAAJPEAVCChannelContext@@PEBUtagMILCMD_MAGNIFIERRENDERTARGET_CAPTUREBITS@@@Z @ 0x1801ED11C (-ProcessCaptureBits@CMagnifierRenderTarget@@QEAAJPEAVCChannelContext@@PEBUtagMILCMD_MAGNIFIERREN.c)
 *     ?GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAPEAVCSurfaceDrawListBrush@@@Z @ 0x1801F9678 (-GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1.c)
 *     ??$emplace@IIW4DXGI_COLOR_SPACE_TYPE@@V?$com_ptr_t@VCDrawListCache@@Uerr_returncode_policy@wil@@@wil@@@?$vector_facade@UContentEntry@CDrawListCacheSet@@V?$buffer_impl@UContentEntry@CDrawListCacheSet@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@UContentEntry@CDrawListCacheSet@@@1@V?$basic_iterator@$$CBUContentEntry@CDrawListCacheSet@@@1@IIW4DXGI_COLOR_SPACE_TYPE@@V?$com_ptr_t@VCDrawListCache@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x1801FAEB8 (--$emplace@IIW4DXGI_COLOR_SPACE_TYPE@@V-$com_ptr_t@VCDrawListCache@@Uerr_returncode_policy@wil@@.c)
 *     ??$move_backward@V?$move_iterator@PEAUContentEntry@CDrawListCacheSet@@@std@@V?$checked_array_iterator@PEAUContentEntry@CDrawListCacheSet@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUContentEntry@CDrawListCacheSet@@@stdext@@V?$move_iterator@PEAUContentEntry@CDrawListCacheSet@@@0@0V12@@Z @ 0x1801FAF5C (--$move_backward@V-$move_iterator@PEAUContentEntry@CDrawListCacheSet@@@std@@V-$checked_array_ite.c)
 *     ??1SinkRenderParameters@CCpuClipAntialiasSinkContext@@QEAA@XZ @ 0x1801FBD4C (--1SinkRenderParameters@CCpuClipAntialiasSinkContext@@QEAA@XZ.c)
 *     ??4SinkRenderParameters@CCpuClipAntialiasSinkContext@@QEAAAEAU01@$$QEAU01@@Z @ 0x1801FBE28 (--4SinkRenderParameters@CCpuClipAntialiasSinkContext@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     ??1CDrawListEntryBatch@@EEAA@XZ @ 0x180207474 (--1CDrawListEntryBatch@@EEAA@XZ.c)
 *     ?LookupLinkedShader@CShaderCache@@IEBAPEAVCLinkedShader@@ULookupKey@ShaderLinkingConfig@@@Z @ 0x180207878 (-LookupLinkedShader@CShaderCache@@IEBAPEAVCLinkedShader@@ULookupKey@ShaderLinkingConfig@@@Z.c)
 *     ?RenderContentWorker@CVisual@@KAJPEAV1@PEAVCContent@@IIPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x18020E5EC (-RenderContentWorker@CVisual@@KAJPEAV1@PEAVCContent@@IIPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?ProcessSetCallbackId@CAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ANIMATION_SETCALLBACKID@@@Z @ 0x18021C644 (-ProcessSetCallbackId@CAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ANIMATION_SETCALLBACKID.c)
 *     ??_GCSuperWetInkScribble@@UEAAPEAXI@Z @ 0x180229850 (--_GCSuperWetInkScribble@@UEAAPEAXI@Z.c)
 *     ?Draw@CTextVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180268BE8 (-Draw@CTextVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?reset@?$com_ptr_t@VCComputeScribbleFramebuffer@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180298634 (-reset@-$com_ptr_t@VCComputeScribbleFramebuffer@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1CHolographicFrameProcessor@@MEAA@XZ @ 0x1802AB038 (--1CHolographicFrameProcessor@@MEAA@XZ.c)
 *     ?Initialize@CHolographicFrameProcessor@@AEAAJPEAVCComposition@@IPEAXW4DXGI_FORMAT@@II@Z @ 0x1802AB580 (-Initialize@CHolographicFrameProcessor@@AEAAJPEAVCComposition@@IPEAXW4DXGI_FORMAT@@II@Z.c)
 *     ?CreateCompositingShader@CCompositingShaderCache@@QEAAJW4D3DShaderProfileVersion@@V?$span@$$CBUPixelFormatInfo@@$0?0@gsl@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAVCLinkedShader@@@Z @ 0x1802B68E0 (-CreateCompositingShader@CCompositingShaderCache@@QEAAJW4D3DShaderProfileVersion@@V-$span@$$CBUP.c)
 *     ?Release@CMesh2DEffect@@UEAAKXZ @ 0x1802BBCE0 (-Release@CMesh2DEffect@@UEAAKXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?IsKernelDebuggerPresent@@YAHXZ @ 0x180279008 (-IsKernelDebuggerPresent@@YAHXZ.c)
 */

__int64 __fastcall CMILRefCountBaseT<IMILRefCount>::InternalRelease(volatile signed __int32 *a1)
{
  unsigned __int32 v2; // ebx
  __int64 v4; // rcx
  int v5; // eax
  int v6; // ebx
  BOOL v7; // eax
  char v8; // cl
  HANDLE CurrentThread; // rax
  HANDLE CurrentProcess; // rax
  __int16 Response; // [rsp+70h] [rbp+8h] BYREF

  v2 = _InterlockedDecrement(a1 + 2);
  if ( v2 )
    return v2;
  if ( *((int *)a1 + 2) >= 0 || !IsDebuggerPresent() && !(unsigned int)IsKernelDebuggerPresent() )
    goto LABEL_4;
  while ( 1 )
  {
    while ( 1 )
    {
      v5 = IsKernelDebuggerPresent();
      Response = 63;
      v6 = v5;
      if ( !v5 )
      {
        v7 = IsDebuggerPresent();
        v8 = Response;
        if ( v7 )
          v8 = 103;
        LOBYTE(Response) = v8;
      }
      DbgPrintEx(
        0x65u,
        0,
        "\n*** Assertion failed: %ls%ls%ls\n***   %s%ls%sSource: `%ls:%ld`\n\n",
        L"Tried to AddRef an object which has previously been freed (refcount went to 0).",
        word_1803392B0,
        word_1803392B0,
        "Function: ",
        L"CMILRefCountImpl::AddReference",
        ", ",
        L"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
        23);
      if ( v6 )
      {
        DbgPrompt("Break, Go (continue), terminate Process, or terminate Thread (bgpt)? ", (PCH)&Response, 2u);
      }
      else
      {
        DbgPrintEx(
          0x65u,
          0,
          "(No kernel debugger is present.) Respond with:\n"
          "  g                    -- Go (continue)\n"
          "  eb 0x%p 'p';g  -- terminate Process\n"
          "  eb 0x%p 't';g  -- terminate Thread\n"
          " or regular debugging.\n",
          &Response,
          &Response);
        __debugbreak();
      }
      if ( (char)Response <= 98 )
        break;
      if ( (char)Response == 103 )
        goto LABEL_4;
      if ( (char)Response == 105 )
        goto LABEL_30;
      if ( (char)Response != 112 )
      {
        if ( (char)Response != 116 )
          goto LABEL_29;
        goto LABEL_27;
      }
LABEL_28:
      CurrentProcess = GetCurrentProcess();
      TerminateProcess(CurrentProcess, 0xC0000001);
LABEL_29:
      DbgPrintEx(0x65u, 0, "Unrecognized response.\n");
    }
    if ( (char)Response == 98 || (char)Response == 66 )
      break;
    if ( (char)Response == 71 )
      goto LABEL_4;
    if ( (char)Response != 73 )
    {
      if ( (char)Response != 80 )
      {
        if ( (char)Response != 84 )
          goto LABEL_29;
LABEL_27:
        CurrentThread = GetCurrentThread();
        TerminateThread(CurrentThread, 0xC0000001);
        goto LABEL_29;
      }
      goto LABEL_28;
    }
LABEL_30:
    DbgPrintEx(0x65u, 0, "'i' is only supported with debug builds.\n");
  }
  __debugbreak();
LABEL_4:
  _InterlockedIncrement(a1 + 2);
  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)a1 + 24LL))(a1);
  v2 = _InterlockedDecrement(a1 + 2);
  if ( !v2 )
  {
    v4 = *(_QWORD *)a1;
    --*((_DWORD *)a1 + 2);
    (*(void (__fastcall **)(volatile signed __int32 *, __int64))(v4 + 16))(a1, 1LL);
  }
  return v2;
}
