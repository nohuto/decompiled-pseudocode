/*
 * XREFs of ?Invalidate@CDrawListCache@@QEAAXXZ @ 0x180030748
 * Callers:
 *     ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@@Z @ 0x1800102A0 (-GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEAVCDrawListCache.c)
 *     ?ExecuteShaders@CGraphRenderingContext@CExternalEffectGraph@@QEBAJII@Z @ 0x18002FAD0 (-ExecuteShaders@CGraphRenderingContext@CExternalEffectGraph@@QEBAJII@Z.c)
 *     ?Render@CShapeDrawingContext@@QEAAJXZ @ 0x18005A8DC (-Render@CShapeDrawingContext@@QEAAJXZ.c)
 *     ?Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180078E40 (-Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?GetDrawListCacheForCommandRun@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCTreeData@@IPEAPEAVCDrawListCache@@@Z @ 0x180095830 (-GetDrawListCacheForCommandRun@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCTreeData@@IPEAPEAVCDr.c)
 *     ?FlushDrawListCache@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawListEntryBuilder@@@Z @ 0x1800958E0 (-FlushDrawListCache@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawListEntr.c)
 *     ?InvalidateDrawListCaches@CVisual@@QEBAXPEBVCVisualTree@@II@Z @ 0x1800EFD60 (-InvalidateDrawListCaches@CVisual@@QEBAXPEBVCVisualTree@@II@Z.c)
 *     ?NotifyInvalidResource@CDrawListCache@@UEAAXPEBVIDeviceResource@@@Z @ 0x1801FA460 (-NotifyInvalidResource@CDrawListCache@@UEAAXPEBVIDeviceResource@@@Z.c)
 * Callees:
 *     ?ReleaseDrawListEntries@CDrawListCache@@AEAAXXZ @ 0x180079590 (-ReleaseDrawListEntries@CDrawListCache@@AEAAXXZ.c)
 */

void __fastcall CDrawListCache::Invalidate(CDrawListCache *this)
{
  if ( *((_QWORD *)this + 4) )
  {
    if ( *((_BYTE *)this + 102) )
      ++dword_1803E2AFC;
    else
      ++dword_1803E2AF0;
    *((_QWORD *)this + 4) = 0LL;
    CDrawListCache::ReleaseDrawListEntries(this);
    *((_WORD *)this + 50) = 0;
    *((_BYTE *)this + 102) = 0;
  }
}
