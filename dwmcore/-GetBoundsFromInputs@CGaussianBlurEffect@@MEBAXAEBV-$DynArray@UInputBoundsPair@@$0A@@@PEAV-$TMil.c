/*
 * XREFs of ?GetBoundsFromInputs@CGaussianBlurEffect@@MEBAXAEBV?$DynArray@UInputBoundsPair@@$0A@@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180254FF0
 * Callers:
 *     <none>
 * Callees:
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180040360 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18004AF54 (-IsEmpty@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?Inflate@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z @ 0x18007598C (-Inflate@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z.c)
 */

void __fastcall CGaussianBlurEffect::GetBoundsFromInputs(__int64 a1, __int64 a2, float *a3)
{
  __int64 v4; // r11
  float v5; // xmm6_4
  __int64 v6; // r10
  int v7; // r10d
  __int128 v8; // [rsp+20h] [rbp-28h] BYREF

  v4 = a2;
  v5 = 0.0;
  *(_OWORD *)a3 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  if ( !*(_DWORD *)(a1 + 184) )
    v5 = *(float *)(a1 + 176) * 3.0;
  v6 = 0LL;
  if ( *(_DWORD *)(a2 + 24) )
  {
    do
    {
      v8 = *(_OWORD *)(*(_QWORD *)v4 + 20 * v6 + 4);
      if ( !TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)&v8) )
        TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::Inflate((float *)&v8, v5, v5);
      TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::UnionUnsafe(a3, (float *)&v8);
      v6 = (unsigned int)(v7 + 1);
    }
    while ( (unsigned int)v6 < *(_DWORD *)(v4 + 24) );
  }
}
