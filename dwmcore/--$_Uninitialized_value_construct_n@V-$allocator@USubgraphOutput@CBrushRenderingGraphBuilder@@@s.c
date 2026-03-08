/*
 * XREFs of ??$_Uninitialized_value_construct_n@V?$allocator@USubgraphOutput@CBrushRenderingGraphBuilder@@@std@@@std@@YAPEAUSubgraphOutput@CBrushRenderingGraphBuilder@@PEAU12@_KAEAV?$allocator@USubgraphOutput@CBrushRenderingGraphBuilder@@@0@@Z @ 0x1800EA7E0
 * Callers:
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@USubgraphOutput@CBrushRenderingGraphBuilder@@V?$allocator@USubgraphOutput@CBrushRenderingGraphBuilder@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1800EA6F4 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@USubgraphOutput@CBrushRenderingGraphBuilde.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@USubgraphOutput@CBrushRenderingGraphBuilder@@@std@@@std@@YAXPEAUSubgraphOutput@CBrushRenderingGraphBuilder@@QEAU12@AEAV?$allocator@USubgraphOutput@CBrushRenderingGraphBuilder@@@0@@Z @ 0x1800F33AC (--$_Destroy_range@V-$allocator@USubgraphOutput@CBrushRenderingGraphBuilder@@@std@@@std@@YAXPEAUS.c)
 */

__int64 __fastcall std::_Uninitialized_value_construct_n<std::allocator<CBrushRenderingGraphBuilder::SubgraphOutput>>(
        __int64 a1,
        __int64 a2)
{
  for ( ; a2; --a2 )
  {
    *(_DWORD *)a1 = -1;
    *(_QWORD *)(a1 + 8) = 0LL;
    a1 += 16LL;
  }
  std::_Destroy_range<std::allocator<CBrushRenderingGraphBuilder::SubgraphOutput>>(a1, a1);
  return a1;
}
