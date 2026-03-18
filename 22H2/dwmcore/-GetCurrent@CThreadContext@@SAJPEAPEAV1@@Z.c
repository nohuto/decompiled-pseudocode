/*
 * XREFs of ?GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z @ 0x180078B70
 * Callers:
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCPrimitiveGroupDrawListBrush@@@Z @ 0x180011848 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCPrimitiveGroupDrawListBrush@@@Z.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCEmptyRegionDrawListBrush@@@Z @ 0x1800138EC (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCEmptyRegionDrawListBrush@@@Z.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCColorDrawListBrush@@@Z @ 0x180018CFC (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCColorDrawListBrush@@@Z.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCNineGridDrawListBrush@@@Z @ 0x18002F0E8 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCNineGridDrawListBrush@@@Z.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCBrushRenderingEffect@@@Z @ 0x180030514 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCBrushRenderingEffect@@@Z.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCPolygonBuilder@@@Z @ 0x1800305D8 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCPolygonBuilder@@@Z.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCDrawListPrimitive8@@@Z @ 0x180030664 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCDrawListPrimitive8@@@Z.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x1800629A0 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ??$WalkSubtree@VCOcclusionContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCOcclusionContext@@W4WalkReason@@@Z @ 0x180063080 (--$WalkSubtree@VCOcclusionContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCOcclusionContex.c)
 *     ??$WalkSubtree@VCPreComputeContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCPreComputeContext@@W4WalkReason@@@Z @ 0x1800701D0 (--$WalkSubtree@VCPreComputeContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCPreComputeCont.c)
 *     ?FillRectanglesWithDrawListBitmap@CDrawingContext@@AEAAJAEBVCDrawListBitmap@@AEBV?$span@$$CBUMilRectF@@$0?0@gsl@@AEBVMILMatrix3x2@@@Z @ 0x180078200 (-FillRectanglesWithDrawListBitmap@CDrawingContext@@AEAAJAEBVCDrawListBitmap@@AEBV-$span@$$CBUMil.c)
 *     ?FillRectanglesWithDrawListBrush@CDrawingContext@@AEAAJ$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@AEBV?$span@$$CBUMilRectF@@$0?0@gsl@@AEBU_D3DCOLORVALUE@@@Z @ 0x180078650 (-FillRectanglesWithDrawListBrush@CDrawingContext@@AEAAJ$$QEAV-$unique_ptr@VCDrawListBrush@@U-$de.c)
 *     ??_ECMultiPrimitiveDrawListBrush@@UEAAPEAXI@Z @ 0x180078990 (--_ECMultiPrimitiveDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?InternalRelease@CResource@@IEAAKXZ @ 0x180078A28 (-InternalRelease@CResource@@IEAAKXZ.c)
 *     ?SetReleasingResources@CThreadContext@@SAX_N@Z @ 0x18007B750 (-SetReleasingResources@CThreadContext@@SAX_N@Z.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCGeometryOnlyDrawListBrush@@@Z @ 0x18007B77C (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCGeometryOnlyDrawListBrush@@@Z.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCD2DLayer@@@Z @ 0x18007B7B0 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCD2DLayer@@@Z.c)
 *     ?InternalCreate@CDrawListCache@@CAJ_NPEAPEAV1@@Z @ 0x18007B7E4 (-InternalCreate@CDrawListCache@@CAJ_NPEAPEAV1@@Z.c)
 *     ??_GCDrawListCache@@EEAAPEAXI@Z @ 0x18007B920 (--_GCDrawListCache@@EEAAPEAXI@Z.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCSurfaceDrawListBrush@@@Z @ 0x18007BBA0 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCSurfaceDrawListBrush@@@Z.c)
 *     ?UnregisterGraphWalkRoot@CThreadContext@@SAXXZ @ 0x18007BBD4 (-UnregisterGraphWalkRoot@CThreadContext@@SAXXZ.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCCpuClipAntialiasSinkContext@@@Z @ 0x18007C174 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCCpuClipAntialiasSinkContext@@@Z.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCCpuClipAntialiasDrawListEntry@@@Z @ 0x18007C3E8 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCCpuClipAntialiasDrawListEntry@@@Z.c)
 *     ??_GCCpuClipAntialiasDrawListEntry@@UEAAPEAXI@Z @ 0x18007C8A0 (--_GCCpuClipAntialiasDrawListEntry@@UEAAPEAXI@Z.c)
 *     ?Compute@COcclusionContext@@IEAAJPEBVCVisualTree@@AEBV?$span@$$CBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@MAEBV?$span@PEAVCOverlayContext@@$0?0@4@@Z @ 0x180086EC0 (-Compute@COcclusionContext@@IEAAJPEBVCVisualTree@@AEBV-$span@$$CBV-$TMilRect_@MUMilRectF@@UMil3D.c)
 *     ??$WalkSubtree@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCDrawingContext@@W4WalkReason@@@Z @ 0x18008AA40 (--$WalkSubtree@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCDrawingContext@@W.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCRectanglesShape@@@Z @ 0x180092318 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCRectanglesShape@@@Z.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCCommonRenderingEffect@@@Z @ 0x1800B5D30 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCCommonRenderingEffect@@@Z.c)
 *     ?Release@CLegacyRenderTarget@@UEAAKXZ @ 0x1800DEB60 (-Release@CLegacyRenderTarget@@UEAAKXZ.c)
 *     ?InitializeObjectCaches@CThreadContext@@SAJXZ @ 0x1801040DC (-InitializeObjectCaches@CThreadContext@@SAJXZ.c)
 *     ?DestroyObjectCaches@CThreadContext@@SAXXZ @ 0x180271C68 (-DestroyObjectCaches@CThreadContext@@SAXXZ.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCSpectreCallbackRenderer@@@Z @ 0x180271D94 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCSpectreCallbackRenderer@@@Z.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCWARPDrawListEntry@@@Z @ 0x180271DD0 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCWARPDrawListEntry@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180034880 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C0E8C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CThreadContext@@AEAA@XZ @ 0x1800FED20 (--0CThreadContext@@AEAA@XZ.c)
 */

__int64 __fastcall CThreadContext::GetCurrent(struct CThreadContext **a1)
{
  unsigned int v2; // edi
  struct CThreadContext *Value; // rbx
  CThreadContext *v5; // rax
  unsigned int v6; // ecx
  CThreadContext *v7; // rax

  v2 = 0;
  Value = (struct CThreadContext *)TlsGetValue(CThreadContext::s_dwTlsIndex);
  if ( !Value )
  {
    v5 = (CThreadContext *)operator new(0x190uLL);
    if ( !v5 || (v7 = CThreadContext::CThreadContext(v5), (Value = v7) == 0LL) )
    {
      v2 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, -2147024882, 0x42u, 0LL);
      return v2;
    }
    TlsSetValue(CThreadContext::s_dwTlsIndex, v7);
  }
  *a1 = Value;
  return v2;
}
