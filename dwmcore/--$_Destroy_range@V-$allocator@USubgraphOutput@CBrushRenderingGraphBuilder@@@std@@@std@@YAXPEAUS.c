/*
 * XREFs of ??$_Destroy_range@V?$allocator@USubgraphOutput@CBrushRenderingGraphBuilder@@@std@@@std@@YAXPEAUSubgraphOutput@CBrushRenderingGraphBuilder@@QEAU12@AEAV?$allocator@USubgraphOutput@CBrushRenderingGraphBuilder@@@0@@Z @ 0x1800F33AC
 * Callers:
 *     ?AddEffectBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCEffectBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x18003F6F4 (-AddEffectBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCEffectBrush@@_NPEAPEAVCRenderingTechnique.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@USubgraphOutput@CBrushRenderingGraphBuilder@@V?$allocator@USubgraphOutput@CBrushRenderingGraphBuilder@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1800EA6F4 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@USubgraphOutput@CBrushRenderingGraphBuilde.c)
 *     ??$_Uninitialized_value_construct_n@V?$allocator@USubgraphOutput@CBrushRenderingGraphBuilder@@@std@@@std@@YAPEAUSubgraphOutput@CBrushRenderingGraphBuilder@@PEAU12@_KAEAV?$allocator@USubgraphOutput@CBrushRenderingGraphBuilder@@@0@@Z @ 0x1800EA7E0 (--$_Uninitialized_value_construct_n@V-$allocator@USubgraphOutput@CBrushRenderingGraphBuilder@@@s.c)
 * Callees:
 *     ??1CRenderingTechniqueFragment@@QEAA@XZ @ 0x180029D08 (--1CRenderingTechniqueFragment@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010E978 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall std::_Destroy_range<std::allocator<CBrushRenderingGraphBuilder::SubgraphOutput>>(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rbx
  void *v4; // rdi

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      v4 = *(void **)(v3 + 8);
      if ( v4 )
      {
        CRenderingTechniqueFragment::~CRenderingTechniqueFragment(*(CRenderingTechniqueFragment **)(v3 + 8));
        operator delete(v4, 0x80uLL);
      }
      v3 += 16LL;
    }
    while ( v3 != a2 );
  }
}
