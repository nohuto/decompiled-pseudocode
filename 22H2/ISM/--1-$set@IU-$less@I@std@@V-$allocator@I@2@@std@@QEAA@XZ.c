/*
 * XREFs of ??1?$set@IU?$less@I@std@@V?$allocator@I@2@@std@@QEAA@XZ @ 0x18019F368
 * Callers:
 *     _HotKeyProcessor::HotKeyProcessor_::_1_::dtor$3 @ 0x18019F1D4 (_HotKeyProcessor--HotKeyProcessor_--_1_--dtor$3.c)
 *     _HotKeyProcessor::HotKeyProcessor_::_1_::dtor$10 @ 0x18019F249 (_HotKeyProcessor--HotKeyProcessor_--_1_--dtor$10.c)
 * Callees:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@IPEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@I@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@IPEAX@std@@@1@PEAU?$_Tree_node@IPEAX@1@@Z @ 0x18019DA18 (--$_Erase_tree@V-$allocator@U-$_Tree_node@IPEAX@std@@@std@@@-$_Tree_val@U-$_Tree_simple_types@I@.c)
 */

void __fastcall std::set<unsigned int>::~set<unsigned int>(void **a1)
{
  std::_Tree_val<std::_Tree_simple_types<unsigned int>>::_Erase_tree<std::allocator<std::_Tree_node<unsigned int,void *>>>(
    (__int64)a1,
    (__int64)a1,
    *((_QWORD *)*a1 + 1));
  std::_Deallocate<16,0>(*a1, (const struct std::nothrow_t *)0x20);
}
