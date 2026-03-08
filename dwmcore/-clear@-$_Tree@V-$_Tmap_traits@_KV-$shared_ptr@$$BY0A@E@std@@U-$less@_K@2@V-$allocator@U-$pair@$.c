/*
 * XREFs of ?clear@?$_Tree@V?$_Tmap_traits@_KV?$shared_ptr@$$BY0A@E@std@@U?$less@_K@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@@2@$0A@@std@@@std@@QEAAXXZ @ 0x180250E08
 * Callers:
 *     ?CleanupOldPerFrameData@CSynchronousSuperWetInk@@AEAAXXZ @ 0x18024FECC (-CleanupOldPerFrameData@CSynchronousSuperWetInk@@AEAAXXZ.c)
 *     ?PullNewPerFrameData@CSynchronousSuperWetInk@@AEAAXIPEA_N@Z @ 0x180250A64 (-PullNewPerFrameData@CSynchronousSuperWetInk@@AEAAXIPEA_N@Z.c)
 * Callees:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@PEAX@1@@Z @ 0x18024F898 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CB_KV-$shared_ptr@$$BY0A@E@std@@@std@@PEAX@s.c)
 */

void __fastcall std::_Tree<std::_Tmap_traits<unsigned __int64,std::shared_ptr<unsigned char [0]>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<unsigned char [0]>>>,0>>::clear(
        _QWORD *a1)
{
  _QWORD *v1; // rbx

  v1 = (_QWORD *)*a1;
  std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,std::shared_ptr<unsigned char [0]>>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<unsigned __int64 const,std::shared_ptr<unsigned char [0]>>,void *>>>(
    (__int64)a1,
    (__int64)a1,
    *(__int64 **)(*a1 + 8LL));
  v1[1] = v1;
  *v1 = v1;
  v1[2] = v1;
  a1[1] = 0LL;
}
