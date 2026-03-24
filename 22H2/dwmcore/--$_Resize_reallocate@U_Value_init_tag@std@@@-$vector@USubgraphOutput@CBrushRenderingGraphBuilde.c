/*
 * XREFs of ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@USubgraphOutput@CBrushRenderingGraphBuilder@@V?$allocator@USubgraphOutput@CBrushRenderingGraphBuilder@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x180049384
 * Callers:
 *     ?AddEffectBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCEffectBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x18004A3BC (-AddEffectBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCEffectBrush@@_NPEAPEAVCRenderingTechnique.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180050D58 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C8C9C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@USubgraphOutput@CBrushRenderingGraphBuilder@@@std@@@std@@YAXPEAUSubgraphOutput@CBrushRenderingGraphBuilder@@0AEAV?$allocator@USubgraphOutput@CBrushRenderingGraphBuilder@@@0@@Z @ 0x1800D260C (--$_Destroy_range@V-$allocator@USubgraphOutput@CBrushRenderingGraphBuilder@@@std@@@std@@YAXPEAUS.c)
 */

__int64 __fastcall std::vector<CBrushRenderingGraphBuilder::SubgraphOutput>::_Resize_reallocate<std::_Value_init_tag>(
        __int64 *a1,
        unsigned __int64 a2)
{
  __int64 v4; // rdi
  unsigned __int64 v5; // rcx
  __int64 v6; // rdi
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rax
  __int64 v9; // r14
  SIZE_T v10; // rcx
  __int64 v11; // rbp
  unsigned __int64 v12; // rax
  __int64 i; // rdi
  __int64 v14; // r8
  __int64 v15; // rcx
  __int64 j; // rdx
  __int64 result; // rax
  __int64 v18; // rax

  if ( a2 > 0xFFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector<T> too long");
  v4 = a1[1] - *a1;
  v5 = (a1[2] - *a1) >> 4;
  v6 = v4 >> 4;
  v7 = v5 >> 1;
  if ( v5 > 0xFFFFFFFFFFFFFFFLL - (v5 >> 1) )
  {
    v8 = a2;
  }
  else
  {
    v8 = v7 + v5;
    if ( v7 + v5 < a2 )
      v8 = a2;
  }
  v9 = 16 * v8;
  v10 = 16 * v8;
  if ( v8 > 0xFFFFFFFFFFFFFFFLL )
    v10 = -1LL;
  v11 = std::_Allocate<16,std::_Default_allocate_traits,0>(v10);
  v12 = a2 - v6;
  for ( i = v11 + 16 * v6; v12; --v12 )
  {
    *(_DWORD *)i = -1;
    *(_QWORD *)(i + 8) = 0LL;
    i += 16LL;
  }
  std::_Destroy_range<std::allocator<CBrushRenderingGraphBuilder::SubgraphOutput>>(i, i);
  v14 = a1[1];
  v15 = v11;
  for ( j = *a1; j != v14; j += 16LL )
  {
    *(_DWORD *)v15 = *(_DWORD *)j;
    v18 = *(_QWORD *)(j + 8);
    *(_QWORD *)(j + 8) = 0LL;
    *(_QWORD *)(v15 + 8) = v18;
    v15 += 16LL;
  }
  std::_Destroy_range<std::allocator<CBrushRenderingGraphBuilder::SubgraphOutput>>(v15, v15);
  if ( *a1 )
  {
    std::_Destroy_range<std::allocator<CBrushRenderingGraphBuilder::SubgraphOutput>>(*a1, a1[1]);
    std::_Deallocate<16,0>(*a1, (a1[2] - *a1) & 0xFFFFFFFFFFFFFFF0uLL);
  }
  result = v9 + v11;
  *a1 = v11;
  a1[1] = v11 + 16 * a2;
  a1[2] = v9 + v11;
  return result;
}
