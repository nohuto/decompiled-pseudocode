/*
 * XREFs of ??1?$_Alloc_construct_ptr@V?$allocator@U?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@UDisplayOcclusionRect@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x180146D9C
 * Callers:
 *     _std::_Tree_node_std::pair_DockInputIdentity_const__DisplayOcclusionRect__void___::_Buynode_std::allocator_std::_Tree_node_std::pair_DockInputIdentity_const__DisplayOcclusionRect__void______std::pair_DockInputIdentity_const__DisplayOcclusionRect__&__::_1_::dtor$0 @ 0x180146364 (_std--_Tree_node_std--pair_DockInputIdentity_const__DisplayOcclusionRect__void___--_Buynode_std-.c)
 *     _std::_Tree_node_std::pair_DockInputIdentity_const__DisplayOcclusionRect__void___::_Buynode_std::allocator_std::_Tree_node_std::pair_DockInputIdentity_const__DisplayOcclusionRect__void______DockInputIdentity_const_&_DisplayOcclusionRect_const_&__::_1_::dtor$0 @ 0x180146435 (_std--_Tree_node_std--pair_DockInputIdentity_const__DisplayOcclusionRect__void___--_ea_180146435.c)
 *     _std::_Tree_std::_Tmap_traits_DockInputIdentity_DisplayOcclusionRect_std::less_DockInputIdentity__std::allocator_std::pair_DockInputIdentity_const__DisplayOcclusionRect____0___::emplace_hint_std::piecewise_construct_t_const_&_std::tuple_DockInputIdentity_const_&__std::tuple_____::_1_::dtor$4 @ 0x180146C87 (_std--_Tree_std--_Tmap_traits_DockInputIdentity_DisplayOcclusionRect_std--less_Dock_ea_180146C87.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180011524 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<DockInputIdentity const,DisplayOcclusionRect>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<DockInputIdentity const,DisplayOcclusionRect>,void *>>>(
        __int64 a1)
{
  void *v1; // rcx

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    std::_Deallocate<16,0>(v1, (const struct std::nothrow_t *)0xD0);
}
