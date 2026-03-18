/*
 * XREFs of memcmp_0 @ 0x18011B98C
 * Callers:
 *     ?SetLights@CD3DBatchExecutionContext@@EEAAXPEAVCHwLightCollectionBuffer@@@Z @ 0x1800181E0 (-SetLights@CD3DBatchExecutionContext@@EEAAXPEAVCHwLightCollectionBuffer@@@Z.c)
 *     ?NotifyCurrentPropertyValuesImpl@CPropertyChangeResource@@IEBAJIAEBV?$span@QEBUAnimatedProperty@AnimationHelper@@$0?0@gsl@@@Z @ 0x1800229D8 (-NotifyCurrentPropertyValuesImpl@CPropertyChangeResource@@IEBAJIAEBV-$span@QEBUAnimatedProperty@.c)
 *     ?SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z @ 0x18002B0F0 (-SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z.c)
 *     ?RetrieveCurrentLightBufferForContextNoRef@CLightStack@@QEAAJPEAVCDrawingContext@@PEBVCMILMatrix@@PEAPEAVCHwLightCollectionBuffer@@@Z @ 0x18003136C (-RetrieveCurrentLightBufferForContextNoRef@CLightStack@@QEAAJPEAVCDrawingContext@@PEBVCMILMatrix.c)
 *     ??8CExpressionValue@@QEBA_NAEBV0@@Z @ 0x180055770 (--8CExpressionValue@@QEBA_NAEBV0@@Z.c)
 *     ?StartExecution@CD3DBatchExecutionContext@@QEAAXAEBUWorldToClipSpace@@PEBVClipPlaneInfoRef@@@Z @ 0x180090454 (-StartExecution@CD3DBatchExecutionContext@@QEAAXAEBUWorldToClipSpace@@PEBVClipPlaneInfoRef@@@Z.c)
 *     ?SetAnimatedProperty@CPropertyChangeResource@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x180097CA0 (-SetAnimatedProperty@CPropertyChangeResource@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     ?HrWicPfToMil@@YAJAEBU_GUID@@PEAW4Enum@MilPixelFormat@@@Z @ 0x1800A6898 (-HrWicPfToMil@@YAJAEBU_GUID@@PEAW4Enum@MilPixelFormat@@@Z.c)
 *     ?ModifyProperty@CResource@@IEAA_NPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1800BAF98 (-ModifyProperty@CResource@@IEAA_NPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     ?UpdateHDRMetaData@COverlayContext@@AEAAPEBXXZ @ 0x1800CA098 (-UpdateHDRMetaData@COverlayContext@@AEAAPEBXXZ.c)
 *     ?IsEqual@PlaneInfo@CCheckMPOCache@@QEBA_NAEBUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@@Z @ 0x18011B0F0 (-IsEqual@PlaneInfo@CCheckMPOCache@@QEBA_NAEBUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@@Z.c)
 *     ??8CPathData@@QEBA_NAEBV0@@Z @ 0x18013208A (--8CPathData@@QEBA_NAEBV0@@Z.c)
 *     ?Compare@UsageIndexProperty@details_abi@wil@@QEBAHPEAX_K@Z @ 0x1801983B4 (-Compare@UsageIndexProperty@details_abi@wil@@QEBAHPEAX_K@Z.c)
 *     ?ComparePlaneAttributes@COverlayContext@@CAXAEBUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@0PEA_N1@Z @ 0x1801DCE34 (-ComparePlaneAttributes@COverlayContext@@CAXAEBUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@0PEA_N1@Z.c)
 *     ?ProcessUpdateParams@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMAGN_UPDATE_TEXTURES_PARAM@@@Z @ 0x1801F0A60 (-ProcessUpdateParams@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMAGN_UPDATE_TEXTURES_P.c)
 *     ?UpdateHDRMetaData@CDirectFlipInfo@@IEAAPEBXXZ @ 0x1801F7794 (-UpdateHDRMetaData@CDirectFlipInfo@@IEAAPEBXXZ.c)
 *     ?InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@_N@Z @ 0x1801FAAD8 (-InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributes.c)
 *     ?SetLocalToWorld@CD3DBatchExecutionContext@@QEAAXAEBVCMILMatrix@@@Z @ 0x1802057D8 (-SetLocalToWorld@CD3DBatchExecutionContext@@QEAAXAEBVCMILMatrix@@@Z.c)
 *     ?Equals@CExpressionValueStack@@QEAAJXZ @ 0x18025D3B0 (-Equals@CExpressionValueStack@@QEAAJXZ.c)
 *     ?NotEquals@CExpressionValueStack@@QEAAJXZ @ 0x1802609A0 (-NotEquals@CExpressionValueStack@@QEAAJXZ.c)
 *     IsSolidColorSurface @ 0x180273504 (IsSolidColorSurface.c)
 *     ?ComputeCachedHdrMetadata@CDDisplaySwapChain@@IEAAJW4DXGI_HDR_METADATA_TYPE@@PEBX@Z @ 0x180289384 (-ComputeCachedHdrMetadata@CDDisplaySwapChain@@IEAAJW4DXGI_HDR_METADATA_TYPE@@PEBX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl memcmp_0(const void *Buf1, const void *Buf2, size_t Size)
{
  return memcmp(Buf1, Buf2, Size);
}
