/*
 * XREFs of ?Invalidate@CDrawListCache@@QEAAXXZ @ 0x180030838
 * Callers:
 *     ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@@Z @ 0x180010390 (-GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEAVCDrawListCache.c)
 *     ?ExecuteShaders@CGraphRenderingContext@CExternalEffectGraph@@QEBAJII@Z @ 0x18002FBC0 (-ExecuteShaders@CGraphRenderingContext@CExternalEffectGraph@@QEBAJII@Z.c)
 *     ?Render@CShapeDrawingContext@@QEAAJXZ @ 0x18005AAAC (-Render@CShapeDrawingContext@@QEAAJXZ.c)
 *     ?Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180079010 (-Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?GetDrawListCacheForCommandRun@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCTreeData@@IPEAPEAVCDrawListCache@@@Z @ 0x180095A00 (-GetDrawListCacheForCommandRun@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCTreeData@@IPEAPEAVCDr.c)
 *     ?FlushDrawListCache@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawListEntryBuilder@@@Z @ 0x180095AB0 (-FlushDrawListCache@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawListEntr.c)
 *     ?InvalidateDrawListCaches@CVisual@@QEBAXPEBVCVisualTree@@II@Z @ 0x1800F0990 (-InvalidateDrawListCaches@CVisual@@QEBAXPEBVCVisualTree@@II@Z.c)
 *     ?NotifyInvalidResource@CDrawListCache@@UEAAXPEBVIDeviceResource@@@Z @ 0x1801FD7E0 (-NotifyInvalidResource@CDrawListCache@@UEAAXPEBVIDeviceResource@@@Z.c)
 * Callees:
 *     ?ReleaseDrawListEntries@CDrawListCache@@AEAAXXZ @ 0x180079760 (-ReleaseDrawListEntries@CDrawListCache@@AEAAXXZ.c)
 */

void __fastcall CDrawListCache::Invalidate(CDrawListCache *this)
{
  if ( *((_QWORD *)this + 4) )
  {
    if ( *((_BYTE *)this + 102) )
      ++dword_1803E5AFC;
    else
      ++dword_1803E5AF0;
    *((_QWORD *)this + 4) = 0LL;
    CDrawListCache::ReleaseDrawListEntries(this);
    *((_WORD *)this + 50) = 0;
    *((_BYTE *)this + 102) = 0;
  }
}
