/*
 * XREFs of ??$?0AEBUpiecewise_construct_t@std@@V?$tuple@AEBQEAVCVisual@@@1@V?$tuple@$$V@1@@?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_List_node@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@PEAX@std@@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBQEAVCVisual@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x180225C84
 * Callers:
 *     ??$_Try_emplace@AEBQEAVCVisual@@$$V@?$_Hash@V?$_Umap_traits@PEAVCVisual@@VShadowIntermediates@CDropShadow@@V?$_Uhash_compare@PEAVCVisual@@U?$hash@PEAVCVisual@@@std@@U?$equal_to@PEAVCVisual@@@3@@std@@V?$allocator@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@@5@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@PEAX@std@@_N@1@AEBQEAVCVisual@@@Z @ 0x180225D3C (--$_Try_emplace@AEBQEAVCVisual@@$$V@-$_Hash@V-$_Umap_traits@PEAVCVisual@@VShadowIntermediates@CD.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180085FF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memset_0 @ 0x18010F5A8 (memset_0.c)
 */

_QWORD *__fastcall std::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<CVisual * const,CDropShadow::ShadowIntermediates>,void *>>>::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<CVisual * const,CDropShadow::ShadowIntermediates>,void *>>>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        _QWORD **a4)
{
  __int64 v6; // rax
  _QWORD *v7; // rdx
  __int64 v8; // rbx
  _QWORD *result; // rax

  *a1 = a2;
  a1[1] = 0LL;
  v6 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x60uLL);
  a1[1] = v6;
  v7 = *a4;
  v8 = v6 + 24;
  *(_QWORD *)(v6 + 16) = *v7;
  memset_0((void *)(v6 + 24), 0, 0x48uLL);
  *(_QWORD *)(v8 + 8) = 0LL;
  result = a1;
  *(_QWORD *)(v8 + 16) = 0LL;
  *(_QWORD *)(v8 + 24) = 0LL;
  *(_QWORD *)(v8 + 32) = 0LL;
  *(_QWORD *)(v8 + 40) = 0LL;
  *(_QWORD *)(v8 + 48) = 0LL;
  *(_QWORD *)(v8 + 56) = 0LL;
  *(_DWORD *)(v8 + 64) = 1065353216;
  return result;
}
