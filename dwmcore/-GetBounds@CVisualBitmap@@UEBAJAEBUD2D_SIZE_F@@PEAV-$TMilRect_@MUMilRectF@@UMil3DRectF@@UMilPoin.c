/*
 * XREFs of ?GetBounds@CVisualBitmap@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18021BED0
 * Callers:
 *     ?GetBounds@CVisualBitmap@@$4PPPPPPPM@A@EBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180118350 (-GetBounds@CVisualBitmap@@$4PPPPPPPM@A@EBAJAEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMil3DRec.c)
 * Callees:
 *     ?Clean@CVisualTree@@IEAAJPEAVCPreComputeContext@@@Z @ 0x1800C4268 (-Clean@CVisualTree@@IEAAJPEAVCPreComputeContext@@@Z.c)
 */

__int64 __fastcall CVisualBitmap::GetBounds(__int64 a1, __int64 a2, __int64 a3)
{
  CVisualTree *v5; // rcx
  __int64 v6; // rax
  __int128 *v7; // rax
  __int128 v8; // xmm0

  v5 = *(CVisualTree **)(a1 - 40);
  if ( v5 )
  {
    if ( (int)CVisualTree::Clean(v5, 0LL) < 0 )
    {
      v8 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
    }
    else
    {
      v6 = *(_QWORD *)(a1 - 40);
      if ( *(_QWORD *)(v6 + 64) )
        v7 = (__int128 *)(v6 + 72);
      else
        v7 = &TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
      v8 = *v7;
    }
    *(_OWORD *)a3 = v8;
  }
  else
  {
    *(_DWORD *)(a3 + 12) = 0;
    *(_DWORD *)(a3 + 8) = 0;
    *(_DWORD *)(a3 + 4) = 0;
    *(_DWORD *)a3 = 0;
  }
  return 0LL;
}
