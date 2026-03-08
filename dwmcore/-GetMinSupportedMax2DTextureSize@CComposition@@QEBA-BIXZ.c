/*
 * XREFs of ?GetMinSupportedMax2DTextureSize@CComposition@@QEBA?BIXZ @ 0x18004CC04
 * Callers:
 *     ?RequireClippedBounds@CBackdropVisualImage@@SA_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18004C748 (-RequireClippedBounds@CBackdropVisualImage@@SA_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPoi.c)
 *     ?ValidateRootAndSourceRectangle@CBackdropVisualImage@@QEAAJPEAVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEA_N@Z @ 0x18004C8B4 (-ValidateRootAndSourceRectangle@CBackdropVisualImage@@QEAAJPEAVCVisual@@AEBV-$TMilRect_@MUMilRec.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CComposition::GetMinSupportedMax2DTextureSize(CComposition *this)
{
  int v1; // ecx

  v1 = *((_DWORD *)g_pComposition + 326);
  switch ( v1 )
  {
    case 49408:
      return 0x4000LL;
    case 37632:
      return 4096LL;
    case 40960:
    case 41216:
      return 0x2000LL;
    case 45056:
    case 45312:
    case 49152:
    case 49664:
      return 0x4000LL;
  }
  return 2048LL;
}
