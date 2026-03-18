/*
 * XREFs of ?IsVisible@CCursorVisual@@IEBA_NXZ @ 0x180228BB4
 * Callers:
 *     ?CollectOcclusion@CCursorVisual@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x180228A70 (-CollectOcclusion@CCursorVisual@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z.c)
 *     ?GetContentBounds@CCursorVisual@@UEAAJPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180228AB0 (-GetContentBounds@CCursorVisual@@UEAAJPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF.c)
 *     ?HasNonEmptyContent@CCursorVisual@@UEBA_NXZ @ 0x180228B50 (-HasNonEmptyContent@CCursorVisual@@UEBA_NXZ.c)
 *     ?HasVisibleCursor@CCursorVisual@@UEBA_NXZ @ 0x180228B80 (-HasVisibleCursor@CCursorVisual@@UEBA_NXZ.c)
 *     ?RenderContent@CCursorVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180228C80 (-RenderContent@CCursorVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
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
