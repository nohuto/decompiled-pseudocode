/*
 * XREFs of ?IsVisible@CCursorVisual@@IEBA_NXZ @ 0x1802255C4
 * Callers:
 *     ?CollectOcclusion@CCursorVisual@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x180225480 (-CollectOcclusion@CCursorVisual@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z.c)
 *     ?GetContentBounds@CCursorVisual@@UEAAJPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1802254C0 (-GetContentBounds@CCursorVisual@@UEAAJPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF.c)
 *     ?HasNonEmptyContent@CCursorVisual@@UEBA_NXZ @ 0x180225560 (-HasNonEmptyContent@CCursorVisual@@UEBA_NXZ.c)
 *     ?HasVisibleCursor@CCursorVisual@@UEBA_NXZ @ 0x180225590 (-HasVisibleCursor@CCursorVisual@@UEBA_NXZ.c)
 *     ?RenderContent@CCursorVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180225690 (-RenderContent@CCursorVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CCursorVisual::IsVisible(CCursorVisual *this)
{
  __int64 v1; // rdx
  bool result; // al

  v1 = *((_QWORD *)this + 90);
  result = 0;
  if ( v1 )
    return *(_QWORD *)(v1 + 184) != 0LL;
  return result;
}
