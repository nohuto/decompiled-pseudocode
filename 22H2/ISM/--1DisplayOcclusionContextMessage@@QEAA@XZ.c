/*
 * XREFs of ??1DisplayOcclusionContextMessage@@QEAA@XZ @ 0x18012C5D8
 * Callers:
 *     _DisplayOcclusionContextProvider::Broadcast_::_1_::dtor$1 @ 0x180146F6B (_DisplayOcclusionContextProvider--Broadcast_--_1_--dtor$1.c)
 *     _DisplayOcclusionContextProvider::GetCurrentContext_::_1_::dtor$1 @ 0x18014702B (_DisplayOcclusionContextProvider--GetCurrentContext_--_1_--dtor$1.c)
 * Callees:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@UDisplayOcclusionRect@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUDockInputIdentity@@UDisplayOcclusionRect@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@UDisplayOcclusionRect@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@UDisplayOcclusionRect@@@std@@PEAX@1@@Z @ 0x18012B0C4 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBUDockInputIdentity@@UDisplayOcclusionRect@.c)
 */

void __fastcall DisplayOcclusionContextMessage::~DisplayOcclusionContextMessage(void **this)
{
  std::_Tree_val<std::_Tree_simple_types<std::pair<DockInputIdentity const,DisplayOcclusionRect>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<DockInputIdentity const,DisplayOcclusionRect>,void *>>>(
    (__int64)this,
    (__int64)this,
    *((_QWORD *)*this + 1));
  std::_Deallocate<16,0>(*this, (const struct std::nothrow_t *)0xD0);
}
