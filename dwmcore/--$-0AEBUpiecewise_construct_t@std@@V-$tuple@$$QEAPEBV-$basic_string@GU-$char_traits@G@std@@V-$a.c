/*
 * XREFs of ??$?0AEBUpiecewise_construct_t@std@@V?$tuple@$$QEAPEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@V?$tuple@$$V@1@@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@QEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@U?$pair@QEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@QEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@$$QEAPEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x18010D2E4
 * Callers:
 *     ??$_Try_emplace@PEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@$$V@?$map@PEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@IU?$less@PEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@QEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@std@@@2@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@QEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@std@@PEAX@std@@_N@1@$$QEAPEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x18010D1D4 (--$_Try_emplace@PEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@$$V@-$map@PEBV-.c)
 * Callees:
 *     ??0?$_Tree_temp_node_alloc@V?$allocator@U?$_Tree_node@U?$pair@QEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@U?$pair@QEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@std@@PEAX@std@@@1@@Z @ 0x18010D354 (--0-$_Tree_temp_node_alloc@V-$allocator@U-$_Tree_node@U-$pair@QEBV-$basic_string@GU-$char_traits.c)
 */

__int64 __fastcall std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<std::wstring const * const,unsigned int>,void *>>>::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<std::wstring const * const,unsigned int>,void *>>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 **a5)
{
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rcx

  std::_Tree_temp_node_alloc<std::allocator<std::_Tree_node<std::pair<std::wstring const * const,unsigned int>,void *>>>::_Tree_temp_node_alloc<std::allocator<std::_Tree_node<std::pair<std::wstring const * const,unsigned int>,void *>>>(
    a1,
    a2);
  v7 = *(_QWORD *)(a1 + 8);
  v8 = **a5;
  *(_DWORD *)(v7 + 40) = 0;
  *(_QWORD *)(v7 + 32) = v8;
  v9 = 0LL;
  **(_QWORD **)(a1 + 8) = a3;
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL) = a3;
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) = a3;
  do
    *(_BYTE *)(*(_QWORD *)(a1 + 8) + v9++ + 24) = 0;
  while ( v9 < 2 );
  return a1;
}
