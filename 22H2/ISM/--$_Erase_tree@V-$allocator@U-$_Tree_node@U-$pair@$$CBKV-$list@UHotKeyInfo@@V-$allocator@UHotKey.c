/*
 * XREFs of ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBKV?$list@UHotKeyInfo@@V?$allocator@UHotKeyInfo@@@std@@@std@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$list@UHotKeyInfo@@V?$allocator@UHotKeyInfo@@@std@@@std@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBKV?$list@UHotKeyInfo@@V?$allocator@UHotKeyInfo@@@std@@@std@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBKV?$list@UHotKeyInfo@@V?$allocator@UHotKeyInfo@@@std@@@std@@@std@@PEAX@1@@Z @ 0x18019DA74
 * Callers:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBKV?$list@UHotKeyInfo@@V?$allocator@UHotKeyInfo@@@std@@@std@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$list@UHotKeyInfo@@V?$allocator@UHotKeyInfo@@@std@@@std@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBKV?$list@UHotKeyInfo@@V?$allocator@UHotKeyInfo@@@std@@@std@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBKV?$list@UHotKeyInfo@@V?$allocator@UHotKeyInfo@@@std@@@std@@@std@@PEAX@1@@Z @ 0x18019DA74 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBKV-$list@UHotKeyInfo@@V-$allocator@UHotKey.c)
 *     ??0HotKeyProcessor@@QEAA@XZ @ 0x18019EF3C (--0HotKeyProcessor@@QEAA@XZ.c)
 *     ??1?$map@KV?$list@UHotKeyInfo@@V?$allocator@UHotKeyInfo@@@std@@@std@@U?$less@K@2@V?$allocator@U?$pair@$$CBKV?$list@UHotKeyInfo@@V?$allocator@UHotKeyInfo@@@std@@@std@@@std@@@2@@std@@QEAA@XZ @ 0x18019F308 (--1-$map@KV-$list@UHotKeyInfo@@V-$allocator@UHotKeyInfo@@@std@@@std@@U-$less@K@2@V-$allocator@U-.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180011524 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBKV?$list@UHotKeyInfo@@V?$allocator@UHotKeyInfo@@@std@@@std@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$list@UHotKeyInfo@@V?$allocator@UHotKeyInfo@@@std@@@std@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBKV?$list@UHotKeyInfo@@V?$allocator@UHotKeyInfo@@@std@@@std@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBKV?$list@UHotKeyInfo@@V?$allocator@UHotKeyInfo@@@std@@@std@@@std@@PEAX@1@@Z @ 0x18019DA74 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBKV-$list@UHotKeyInfo@@V-$allocator@UHotKey.c)
 *     ??_GHotKeyInfo@@QEAAPEAXI@Z @ 0x18019F9D0 (--_GHotKeyInfo@@QEAAPEAXI@Z.c)
 */

void __fastcall std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,std::list<HotKeyInfo>>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<unsigned long const,std::list<HotKeyInfo>>,void *>>>(
        __int64 a1,
        __int64 a2,
        void **a3)
{
  void **v3; // rdi
  unsigned int v6; // edx
  void **v7; // rbp
  _QWORD **v8; // rcx
  _QWORD *v9; // rsi
  _QWORD *v10; // rbx

  v3 = a3;
  while ( !*((_BYTE *)v3 + 25) )
  {
    std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,std::list<HotKeyInfo>>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<unsigned long const,std::list<HotKeyInfo>>,void *>>>(
      a1,
      a2,
      v3[2]);
    v7 = v3;
    v3 = (void **)*v3;
    v8 = (_QWORD **)v7[5];
    *v8[1] = 0LL;
    v9 = *v8;
    if ( *v8 )
    {
      do
      {
        v10 = (_QWORD *)*v9;
        HotKeyInfo::`scalar deleting destructor'((HotKeyInfo *)(v9 + 2), v6);
        std::_Deallocate<16,0>(v9, (const struct std::nothrow_t *)0x50);
        v9 = v10;
      }
      while ( v10 );
    }
    std::_Deallocate<16,0>(v7[5], (const struct std::nothrow_t *)0x50);
    std::_Deallocate<16,0>(v7, (const struct std::nothrow_t *)0x38);
  }
}
