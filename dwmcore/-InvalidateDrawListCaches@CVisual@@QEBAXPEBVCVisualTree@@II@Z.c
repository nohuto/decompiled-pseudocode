/*
 * XREFs of ?InvalidateDrawListCaches@CVisual@@QEBAXPEBVCVisualTree@@II@Z @ 0x1800EFD60
 * Callers:
 *     ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x18007A380 (-RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?ProcessPostSubgraphBackdropInput@CPreComputeContext@@AEAAJPEAVCVisual@@_N@Z @ 0x180081BBC (-ProcessPostSubgraphBackdropInput@CPreComputeContext@@AEAAJPEAVCVisual@@_N@Z.c)
 * Callees:
 *     ?Invalidate@CDrawListCache@@QEAAXXZ @ 0x180030748 (-Invalidate@CDrawListCache@@QEAAXXZ.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x1800889B4 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 */

void __fastcall CVisual::InvalidateDrawListCaches(CVisual *this, const struct CVisualTree *a2)
{
  __int64 **TreeData; // rax
  __int64 *v3; // rbx
  __int64 *v4; // rdi

  TreeData = CVisual::FindTreeData(this, a2);
  if ( TreeData )
  {
    v3 = TreeData[2];
    v4 = TreeData[3];
    while ( v3 != v4 )
    {
      if ( !*(_DWORD *)v3 && !*((_DWORD *)v3 + 1) )
        CDrawListCache::Invalidate((CDrawListCache *)v3[2]);
      v3 += 3;
    }
  }
}
