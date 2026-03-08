/*
 * XREFs of memcmp_0 @ 0x1801177DC
 * Callers:
 *     ?SetLights@CD3DBatchExecutionContext@@EEAAXPEAVCHwLightCollectionBuffer@@@Z @ 0x1800180F0 (-SetLights@CD3DBatchExecutionContext@@EEAAXPEAVCHwLightCollectionBuffer@@@Z.c)
 *     ?NotifyCurrentPropertyValuesImpl@CPropertyChangeResource@@IEBAJIAEBV?$span@QEBUAnimatedProperty@AnimationHelper@@$0?0@gsl@@@Z @ 0x1800228E8 (-NotifyCurrentPropertyValuesImpl@CPropertyChangeResource@@IEBAJIAEBV-$span@QEBUAnimatedProperty@.c)
 *     ?SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z @ 0x18002B000 (-SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z.c)
 *     ?RetrieveCurrentLightBufferForContextNoRef@CLightStack@@QEAAJPEAVCDrawingContext@@PEBVCMILMatrix@@PEAPEAVCHwLightCollectionBuffer@@@Z @ 0x18003127C (-RetrieveCurrentLightBufferForContextNoRef@CLightStack@@QEAAJPEAVCDrawingContext@@PEBVCMILMatrix.c)
 *     ??8CExpressionValue@@QEBA_NAEBV0@@Z @ 0x1800555A0 (--8CExpressionValue@@QEBA_NAEBV0@@Z.c)
 *     ?StartExecution@CD3DBatchExecutionContext@@QEAAXAEBUWorldToClipSpace@@PEBVClipPlaneInfoRef@@@Z @ 0x180090284 (-StartExecution@CD3DBatchExecutionContext@@QEAAXAEBUWorldToClipSpace@@PEBVClipPlaneInfoRef@@@Z.c)
 *     ?SetAnimatedProperty@CPropertyChangeResource@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x180097AB0 (-SetAnimatedProperty@CPropertyChangeResource@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     ?HrWicPfToMil@@YAJAEBU_GUID@@PEAW4Enum@MilPixelFormat@@@Z @ 0x1800A6178 (-HrWicPfToMil@@YAJAEBU_GUID@@PEAW4Enum@MilPixelFormat@@@Z.c)
 *     ?ModifyProperty@CResource@@IEAA_NPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1800BAAB8 (-ModifyProperty@CResource@@IEAA_NPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     ?UpdateHDRMetaData@COverlayContext@@AEAAPEBXXZ @ 0x1800C9638 (-UpdateHDRMetaData@COverlayContext@@AEAAPEBXXZ.c)
 *     ?IsEqual@PlaneInfo@CCheckMPOCache@@QEBA_NAEBUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@@Z @ 0x180116F40 (-IsEqual@PlaneInfo@CCheckMPOCache@@QEBA_NAEBUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@@Z.c)
 *     ??8CPathData@@QEBA_NAEBV0@@Z @ 0x18012DEDA (--8CPathData@@QEBA_NAEBV0@@Z.c)
 *     ?Compare@UsageIndexProperty@details_abi@wil@@QEBAHPEAX_K@Z @ 0x180194CF4 (-Compare@UsageIndexProperty@details_abi@wil@@QEBAHPEAX_K@Z.c)
 *     ?ComparePlaneAttributes@COverlayContext@@CAXAEBUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@0PEA_N1@Z @ 0x1801D9B38 (-ComparePlaneAttributes@COverlayContext@@CAXAEBUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@0PEA_N1@Z.c)
 *     ?ProcessUpdateParams@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMAGN_UPDATE_TEXTURES_PARAM@@@Z @ 0x1801ED760 (-ProcessUpdateParams@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMAGN_UPDATE_TEXTURES_P.c)
 *     ?UpdateHDRMetaData@CDirectFlipInfo@@IEAAPEBXXZ @ 0x1801F4414 (-UpdateHDRMetaData@CDirectFlipInfo@@IEAAPEBXXZ.c)
 *     ?InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@_N@Z @ 0x1801F7758 (-InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributes.c)
 *     ?SetLocalToWorld@CD3DBatchExecutionContext@@QEAAXAEBVCMILMatrix@@@Z @ 0x180202458 (-SetLocalToWorld@CD3DBatchExecutionContext@@QEAAXAEBVCMILMatrix@@@Z.c)
 *     ?Equals@CExpressionValueStack@@QEAAJXZ @ 0x180259CF0 (-Equals@CExpressionValueStack@@QEAAJXZ.c)
 *     ?NotEquals@CExpressionValueStack@@QEAAJXZ @ 0x18025D2E0 (-NotEquals@CExpressionValueStack@@QEAAJXZ.c)
 *     IsSolidColorSurface @ 0x18026FDD4 (IsSolidColorSurface.c)
 *     ?ComputeCachedHdrMetadata@CDDisplaySwapChain@@IEAAJW4DXGI_HDR_METADATA_TYPE@@PEBX@Z @ 0x180285C04 (-ComputeCachedHdrMetadata@CDDisplaySwapChain@@IEAAJW4DXGI_HDR_METADATA_TYPE@@PEBX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl memcmp_0(const void *Buf1, const void *Buf2, size_t Size)
{
  return memcmp(Buf1, Buf2, Size);
}
