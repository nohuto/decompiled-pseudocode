/*
 * XREFs of ??R?$default_delete@VCDrawListPrimitive@@@std@@QEBAXPEAVCDrawListPrimitive@@@Z @ 0x1800EB2E0
 * Callers:
 *     ?Destroy@CBatchCommand@@AEAAXXZ @ 0x18000DA44 (-Destroy@CBatchCommand@@AEAAXXZ.c)
 *     ?UpdatePrimitive@CMegaRect@@QEAAJAEAUUpdatePrimitiveWorkingBuffers@1@@Z @ 0x180041868 (-UpdatePrimitive@CMegaRect@@QEAAJAEAUUpdatePrimitiveWorkingBuffers@1@@Z.c)
 *     ??$?4U?$default_delete@VCDrawListPrimitive@@@std@@$0A@@?$unique_ptr@VCDrawListPrimitive@@U?$default_delete@VCDrawListPrimitive@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800420F4 (--$-4U-$default_delete@VCDrawListPrimitive@@@std@@$0A@@-$unique_ptr@VCDrawListPrimitive@@U-$defa.c)
 *     ?ExtractBuiltHWPrimitiveEntry@CDrawListEntryBuilder@@AEAAJIPEAVCPrimitiveColor@@PEBU_D3DCOLORVALUE@@@Z @ 0x18005B700 (-ExtractBuiltHWPrimitiveEntry@CDrawListEntryBuilder@@AEAAJIPEAVCPrimitiveColor@@PEBU_D3DCOLORVAL.c)
 *     ?Create@CCpuClipAntialiasDrawListEntry@@SAJAEBUCpuClipAntialiasEntryParams@@$$QEAV?$unique_ptr@VUVData@CCpuClipAntialiasSink@@U?$default_delete@VUVData@CCpuClipAntialiasSink@@@std@@@std@@PEAPEAV1@@Z @ 0x18007BFD8 (-Create@CCpuClipAntialiasDrawListEntry@@SAJAEBUCpuClipAntialiasEntryParams@@$$QEAV-$unique_ptr@V.c)
 *     ?Render@CDrawListEntryBatch@@UEAAJXZ @ 0x18008F650 (-Render@CDrawListEntryBatch@@UEAAJXZ.c)
 *     ?Initialize@CCpuClipAntialiasSink@@AEAAJGPEBV?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@PEBVCShape@@AEBVCMILMatrix@@@Z @ 0x1800B12AC (-Initialize@CCpuClipAntialiasSink@@AEAAJGPEBV-$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAn.c)
 *     ??1?$unique_ptr@VCDrawListPrimitive@@U?$default_delete@VCDrawListPrimitive@@@std@@@std@@QEAA@XZ @ 0x1800EB2C0 (--1-$unique_ptr@VCDrawListPrimitive@@U-$default_delete@VCDrawListPrimitive@@@std@@@std@@QEAA@XZ.c)
 *     ?BuildDrawList@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAVCDrawListEntryBuilder@@@Z @ 0x180221EB0 (-BuildDrawList@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAVCDrawListEntryBuil.c)
 *     ?GenerateDrawList@CParticleEmitterVisual@@IEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180242048 (-GenerateDrawList@CParticleEmitterVisual@@IEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawLis.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall std::default_delete<CDrawListPrimitive>::operator()(
        __int64 a1,
        __int64 (__fastcall ***a2)(_QWORD, __int64))
{
  __int64 result; // rax

  if ( a2 )
    return (**a2)(a2, 1LL);
  return result;
}
