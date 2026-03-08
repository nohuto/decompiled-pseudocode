/*
 * XREFs of ?AddBounds@CRenderDataBounds@@IEAAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800EB228
 * Callers:
 *     ?DrawVisual@CRenderDataBounds@@UEAAJPEAVCVisual@@@Z @ 0x18001C1F0 (-DrawVisual@CRenderDataBounds@@UEAAJPEAVCVisual@@@Z.c)
 *     ?DrawImage@CRenderDataBounds@@UEAAJPEAVCResource@@PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18001F360 (-DrawImage@CRenderDataBounds@@UEAAJPEAVCResource@@PEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilP.c)
 *     ?DrawSolidRectangle@CRenderDataBounds@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x1800EAFC0 (-DrawSolidRectangle@CRenderDataBounds@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAn.c)
 *     ?TileImage@CRenderDataBounds@@UEAAJPEAVCResource@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUMilPoint2F@@M@Z @ 0x1800EAFE0 (-TileImage@CRenderDataBounds@@UEAAJPEAVCResource@@AEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilP.c)
 *     ?DrawRectangle@CRenderDataBounds@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCLegacyMilBrush@@@Z @ 0x1800EB030 (-DrawRectangle@CRenderDataBounds@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSize.c)
 *     ?DrawGeometry@CRenderDataBounds@@UEAAJPEAVCLegacyMilBrush@@PEAVCGeometry@@@Z @ 0x1800EB050 (-DrawGeometry@CRenderDataBounds@@UEAAJPEAVCLegacyMilBrush@@PEAVCGeometry@@@Z.c)
 *     ?DrawBitmap@CRenderDataBounds@@UEAAJPEAVCResource@@@Z @ 0x1800EB130 (-DrawBitmap@CRenderDataBounds@@UEAAJPEAVCResource@@@Z.c)
 *     ?DrawMesh2D@CRenderDataBounds@@UEAAJPEAVCGeometry2D@@PEAVCImageSource@@@Z @ 0x180267B00 (-DrawMesh2D@CRenderDataBounds@@UEAAJPEAVCGeometry2D@@PEAVCImageSource@@@Z.c)
 *     ?DrawYCbCrBitmap@CRenderDataBounds@@UEAAJPEAVCResource@@0W4D2D1_YCBCR_CHROMA_SUBSAMPLING@@@Z @ 0x180267B80 (-DrawYCbCrBitmap@CRenderDataBounds@@UEAAJPEAVCResource@@0W4D2D1_YCBCR_CHROMA_SUBSAMPLING@@@Z.c)
 * Callees:
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180040360 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800C35E0 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 */

char __fastcall CRenderDataBounds::AddBounds(__int64 a1, struct MilRectF *a2)
{
  int v3; // ecx
  char result; // al
  __int128 v5; // [rsp+20h] [rbp-28h] BYREF

  if ( !*(_BYTE *)(a1 + 96) )
  {
    v3 = *(_DWORD *)(a1 + 92);
    v5 = 0LL;
    if ( v3 )
    {
      if ( v3 == 1 )
      {
        result = (unsigned __int8)CMILMatrix::Transform2DBoundsHelper<1>((CMILMatrix *)(a1 + 24), a2, (float *)&v5);
      }
      else
      {
        *(_BYTE *)(a1 + 96) = 1;
        *(_OWORD *)(a1 + 8) = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
      }
    }
    else
    {
      v5 = *(_OWORD *)a2;
    }
    if ( !*(_BYTE *)(a1 + 96) )
      return TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::UnionUnsafe((float *)(a1 + 8), (float *)&v5);
  }
  return result;
}
