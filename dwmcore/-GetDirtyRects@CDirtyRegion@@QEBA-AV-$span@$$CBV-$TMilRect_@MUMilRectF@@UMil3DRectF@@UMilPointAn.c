/*
 * XREFs of ?GetDirtyRects@CDirtyRegion@@QEBA?AV?$span@$$CBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@XZ @ 0x1800C1E64
 * Callers:
 *     ?CleanTrees@CComposition@@IEAAJXZ @ 0x1800664C0 (-CleanTrees@CComposition@@IEAAJXZ.c)
 *     ?CalcOcclusion@CDirtyRegion@@QEBAJXZ @ 0x1800C1C30 (-CalcOcclusion@CDirtyRegion@@QEBAJXZ.c)
 *     ?GetBounds@CDirtyRegion@@QEBA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@XZ @ 0x1800C1E14 (-GetBounds@CDirtyRegion@@QEBA-AV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeed.c)
 *     ?ForceFullDirty@CDirtyRegion@@QEBAXXZ @ 0x1801CAAF4 (-ForceFullDirty@CDirtyRegion@@QEBAXXZ.c)
 *     ?RenderDirtyRegion@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVISwapChain@@AEBVCDirtyRegion@@PEAW4ProtectionMode@1@@Z @ 0x1801E8770 (-RenderDirtyRegion@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVISwapChain@@AEBVCDirtyR.c)
 *     ?Render@CDDARenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1801F6508 (-Render@CDDARenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?CacheDirtyRegion@CHolographicInteropTexture@@QEAAXXZ @ 0x1802A7288 (-CacheDirtyRegion@CHolographicInteropTexture@@QEAAXXZ.c)
 * Callees:
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x1800254CC (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x1801AEDB0 (-terminate@details@gsl@@YAXXZ.c)
 */

gsl::details *__fastcall CDirtyRegion::GetDirtyRects(__int64 a1, gsl::details *a2)
{
  __int64 v3; // rdi
  bool v4; // zf

  if ( *(_BYTE *)(a1 + 4420) )
  {
    *(_QWORD *)a2 = 1LL;
    *((_QWORD *)a2 + 1) = a1 + 4400;
    if ( a1 != -4400 )
      return a2;
LABEL_6:
    gsl::details::terminate((gsl::details *)a1);
    JUMPOUT(0x1800C1ECDLL);
  }
  v3 = a1 + 2660;
  gsl::details::extent_type<-1>::extent_type<-1>(a2, *(unsigned int *)(a1 + 2820));
  v4 = *(_QWORD *)a2 == -1LL;
  *((_QWORD *)a2 + 1) = v3;
  if ( v4 || !v3 && *(_QWORD *)a2 )
    goto LABEL_6;
  return a2;
}
