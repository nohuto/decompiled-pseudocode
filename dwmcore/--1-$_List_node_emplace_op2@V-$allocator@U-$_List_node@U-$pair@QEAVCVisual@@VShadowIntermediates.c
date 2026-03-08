/*
 * XREFs of ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x180225EAC
 * Callers:
 *     ??$_Try_emplace@AEBQEAVCVisual@@$$V@?$_Hash@V?$_Umap_traits@PEAVCVisual@@VShadowIntermediates@CDropShadow@@V?$_Uhash_compare@PEAVCVisual@@U?$hash@PEAVCVisual@@@std@@U?$equal_to@PEAVCVisual@@@3@@std@@V?$allocator@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@@5@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@PEAX@std@@_N@1@AEBQEAVCVisual@@@Z @ 0x180225D3C (--$_Try_emplace@AEBQEAVCVisual@@$$V@-$_Hash@V-$_Umap_traits@PEAVCVisual@@VShadowIntermediates@CD.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1ShadowIntermediates@CDropShadow@@QEAA@XZ @ 0x1800F810C (--1ShadowIntermediates@CDropShadow@@QEAA@XZ.c)
 */

void __fastcall std::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<CVisual * const,CDropShadow::ShadowIntermediates>,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<CVisual * const,CDropShadow::ShadowIntermediates>,void *>>>(
        __int64 a1)
{
  __int64 v2; // rcx
  void *v3; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    CDropShadow::ShadowIntermediates::~ShadowIntermediates((CDropShadow::ShadowIntermediates *)(v2 + 24));
  v3 = *(void **)(a1 + 8);
  if ( v3 )
    std::_Deallocate<16,0>(v3, 0x60uLL);
}
