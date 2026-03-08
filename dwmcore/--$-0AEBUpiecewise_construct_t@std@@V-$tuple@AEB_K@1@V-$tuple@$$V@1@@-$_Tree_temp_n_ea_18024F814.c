/*
 * XREFs of ??$?0AEBUpiecewise_construct_t@std@@V?$tuple@AEB_K@1@V?$tuple@$$V@1@@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEB_K@1@$$QEAV?$tuple@$$V@1@@Z @ 0x18024F814
 * Callers:
 *     ??$_Try_emplace@AEB_K$$V@?$map@_KV?$shared_ptr@$$BY0A@E@std@@U?$less@_K@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@@2@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@PEAX@std@@_N@1@AEB_K@Z @ 0x18024F960 (--$_Try_emplace@AEB_K$$V@-$map@_KV-$shared_ptr@$$BY0A@E@std@@U-$less@_K@2@V-$allocator@U-$pair@$.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180085FF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<unsigned __int64 const,std::shared_ptr<unsigned char [0]>>,void *>>>::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<unsigned __int64 const,std::shared_ptr<unsigned char [0]>>,void *>>>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _QWORD **a5)
{
  _QWORD *v7; // rax
  __int64 v8; // rcx

  *a1 = a2;
  a1[1] = 0LL;
  v7 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(0x38uLL);
  a1[1] = v7;
  v7[4] = **a5;
  v7[6] = 0LL;
  v7[5] = 0LL;
  v7[6] = 0LL;
  v8 = 0LL;
  *(_QWORD *)a1[1] = a3;
  *(_QWORD *)(a1[1] + 8LL) = a3;
  *(_QWORD *)(a1[1] + 16LL) = a3;
  do
  {
    *(_BYTE *)(v8 + a1[1] + 24) = 0;
    ++v8;
  }
  while ( v8 < 2 );
  return a1;
}
