/*
 * XREFs of ??$_Emplace_reallocate@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@?$vector@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$allocator@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@std@@@std@@QEAAPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@QEAV2@AEBV2@@Z @ 0x180129AE6
 * Callers:
 *     ?IntersectWithRect@CRegionShape@@QEBAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAVCShape@@@Z @ 0x1801AF0E4 (-IntersectWithRect@CRegionShape@@QEBAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF.c)
 *     ?IntersectWithRect@CRectanglesShape@@QEBAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAVCShape@@@Z @ 0x1801AF4B0 (-IntersectWithRect@CRectanglesShape@@QEBAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndS.c)
 * Callees:
 *     ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x18004269C (--$_Get_size_of_n@$0BA@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180085FF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Calculate_growth@?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@AEBA_K_K@Z @ 0x1800A7214 (-_Calculate_growth@-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@AEBA_K_K@Z.c)
 *     ?_Change_array@?$vector@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$allocator@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@std@@@std@@AEAAXQEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_K1@Z @ 0x1801AF3FC (-_Change_array@-$vector@V-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@Rect.c)
 */

char *__fastcall std::vector<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>>::_Emplace_reallocate<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded> const &>(
        char **a1,
        char *a2,
        _OWORD *a3)
{
  char *v3; // rsi
  __int64 v6; // rax
  __int64 v8; // r14
  unsigned __int64 v9; // r15
  SIZE_T size_of; // rax
  _OWORD *v11; // rax
  _OWORD *v12; // r10
  char *v13; // rsi
  char *v14; // rdx
  char *v15; // rcx
  __int128 v16; // xmm0
  __int128 v17; // xmm0
  char *v18; // rdx
  signed __int64 v19; // rcx

  v3 = *a1;
  v6 = (a1[1] - *a1) >> 4;
  if ( v6 == 0xFFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v8 = v6 + 1;
  v9 = std::vector<tagRECT>::_Calculate_growth(a1, v6 + 1);
  size_of = std::_Get_size_of_n<16>(v9);
  v11 = (_OWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v12 = v11;
  v13 = (char *)v11 + ((a2 - v3) & 0xFFFFFFFFFFFFFFF0uLL);
  *(_OWORD *)v13 = *a3;
  v14 = a1[1];
  v15 = *a1;
  if ( a2 == v14 )
  {
    while ( v15 != v14 )
    {
      v16 = *(_OWORD *)v15;
      v15 += 16;
      *v11++ = v16;
    }
  }
  else
  {
    while ( v15 != a2 )
    {
      v17 = *(_OWORD *)v15;
      v15 += 16;
      *v11++ = v17;
    }
    v18 = a1[1];
    if ( a2 != v18 )
    {
      v19 = v13 - a2;
      do
      {
        *(_OWORD *)&a2[v19 + 16] = *(_OWORD *)a2;
        a2 += 16;
      }
      while ( a2 != v18 );
    }
  }
  std::vector<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>>::_Change_array(
    a1,
    v12,
    v8,
    v9);
  return v13;
}
