/*
 * XREFs of ??$?0AEBUpiecewise_construct_t@std@@V?$tuple@AEB_K@1@V?$tuple@$$V@1@@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CB_KI@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@U?$pair@$$CB_KI@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CB_KI@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEB_K@1@$$QEAV?$tuple@$$V@1@@Z @ 0x18010D01C
 * Callers:
 *     ??$_Try_emplace@AEB_K$$V@?$map@_KIU?$less@_K@std@@V?$allocator@U?$pair@$$CB_KI@std@@@2@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CB_KI@std@@PEAX@std@@_N@1@AEB_K@Z @ 0x18010AE44 (--$_Try_emplace@AEB_K$$V@-$map@_KIU-$less@_K@std@@V-$allocator@U-$pair@$$CB_KI@std@@@2@@std@@AEA.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180085FF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0DA@@std@@YA_K_K@Z @ 0x1800B1E44 (--$_Get_size_of_n@$0DA@@std@@YA_K_K@Z.c)
 */

_QWORD *__fastcall std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<unsigned __int64 const,unsigned int>,void *>>>::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<unsigned __int64 const,unsigned int>,void *>>>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 **a5)
{
  SIZE_T size_of; // rax
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx

  *a1 = a2;
  a1[1] = 0LL;
  size_of = std::_Get_size_of_n<48>(1uLL);
  v8 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  a1[1] = v8;
  v9 = **a5;
  *(_DWORD *)(v8 + 40) = 0;
  *(_QWORD *)(v8 + 32) = v9;
  v10 = 0LL;
  *(_QWORD *)a1[1] = a3;
  *(_QWORD *)(a1[1] + 8LL) = a3;
  *(_QWORD *)(a1[1] + 16LL) = a3;
  do
    *(_BYTE *)(a1[1] + v10++ + 24) = 0;
  while ( v10 < 2 );
  return a1;
}
