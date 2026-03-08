/*
 * XREFs of ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$allocator@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x18024AF04
 * Callers:
 *     ?TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawListEntryBuilder@@IV?$span@$$CBE$0?0@gsl@@PEA_N@Z @ 0x1800951C0 (-TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawLi.c)
 * Callees:
 *     ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x18004269C (--$_Get_size_of_n@$0BA@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180085FF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Calculate_growth@?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@AEBA_K_K@Z @ 0x1800A7214 (-_Calculate_growth@-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@AEBA_K_K@Z.c)
 */

void __fastcall std::vector<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>>::_Resize_reallocate<std::_Value_init_tag>(
        __int128 **a1,
        unsigned __int64 a2)
{
  __int64 v4; // rbx
  __int64 v5; // rbp
  SIZE_T size_of; // rax
  __int64 v7; // r10
  _QWORD *v8; // rcx
  unsigned __int64 v9; // rdx
  __int128 *v10; // rdx
  _OWORD *v11; // rcx
  __int128 *i; // rax
  __int128 v13; // xmm0

  if ( a2 > 0xFFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v4 = a1[1] - *a1;
  v5 = std::vector<tagRECT>::_Calculate_growth(a1, a2);
  size_of = std::_Get_size_of_n<16>(v5);
  v7 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v8 = (_QWORD *)(v7 + 16 * v4);
  v9 = a2 - v4;
  if ( a2 != v4 )
  {
    do
    {
      *v8 = 0LL;
      v8[1] = 0LL;
      v8 += 2;
      --v9;
    }
    while ( v9 );
  }
  v10 = a1[1];
  v11 = (_OWORD *)v7;
  for ( i = *a1; i != v10; ++i )
  {
    v13 = *i;
    *v11++ = v13;
  }
  std::vector<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>>::_Change_array(
    (__int64)a1,
    v7,
    a2,
    v5);
}
