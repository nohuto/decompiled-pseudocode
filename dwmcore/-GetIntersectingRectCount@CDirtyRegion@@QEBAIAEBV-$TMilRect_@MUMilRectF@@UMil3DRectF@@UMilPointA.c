/*
 * XREFs of ?GetIntersectingRectCount@CDirtyRegion@@QEBAIAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801CAB7C
 * Callers:
 *     ?Render@CDDisplayRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1801E5694 (-Render@CDDisplayRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?Render@CLegacyStereoRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1801EE3F8 (-Render@CLegacyStereoRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 * Callees:
 *     ?DoesIntersectUnsafe@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180041810 (-DoesIntersectUnsafe@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV.c)
 */

__int64 __fastcall CDirtyRegion::GetIntersectingRectCount(__int64 a1, float *a2)
{
  unsigned int v2; // r8d
  float *v3; // r10
  float *v4; // rdx
  bool DoesIntersectUnsafe; // al
  __int64 v6; // rdx
  unsigned int v7; // r8d
  __int64 v8; // r9
  unsigned int v9; // ecx

  v2 = 0;
  v3 = a2;
  if ( *(_BYTE *)(a1 + 4420) )
  {
    return 1;
  }
  else if ( *(_DWORD *)(a1 + 2820) )
  {
    v4 = (float *)(a1 + 2660);
    do
    {
      DoesIntersectUnsafe = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::DoesIntersectUnsafe(v3, v4);
      v9 = v7 + 1;
      if ( !DoesIntersectUnsafe )
        v9 = v7;
      v4 = (float *)(v6 + 16);
      v2 = v9;
    }
    while ( v8 != 1 );
  }
  return v2;
}
