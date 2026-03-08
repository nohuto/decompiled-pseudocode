/*
 * XREFs of ??$?0AEBUpiecewise_construct_t@std@@V?$tuple@AEBI@1@V?$tuple@$$V@1@@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBIUStereoscopicSlateData@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@U?$pair@$$CBIUStereoscopicSlateData@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBIUStereoscopicSlateData@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBI@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1802A30B4
 * Callers:
 *     ??$_Try_emplace@AEBI$$V@?$map@IUStereoscopicSlateData@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUStereoscopicSlateData@@@std@@@3@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBIUStereoscopicSlateData@@@std@@PEAX@std@@_N@1@AEBI@Z @ 0x1802A3320 (--$_Try_emplace@AEBI$$V@-$map@IUStereoscopicSlateData@@U-$less@I@std@@V-$allocator@U-$pair@$$CBI.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180085FF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memset_0 @ 0x18010F5A8 (memset_0.c)
 */

_QWORD *__fastcall std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<unsigned int const,StereoscopicSlateData>,void *>>>::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<unsigned int const,StereoscopicSlateData>,void *>>>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD **a5)
{
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rcx
  _QWORD *v10; // rax

  *a1 = a2;
  a1[1] = 0LL;
  v7 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x68uLL);
  a1[1] = v7;
  v8 = v7 + 32;
  *(_DWORD *)(v7 + 28) = **a5;
  memset_0((void *)(v7 + 32), 0, 0x44uLL);
  *(_BYTE *)(v8 + 64) = 0;
  *(_QWORD *)v8 = 1065353216LL;
  v9 = 0LL;
  *(_QWORD *)(v8 + 20) = 1065353216LL;
  *(_QWORD *)(v8 + 40) = 1065353216LL;
  *(_DWORD *)(v8 + 60) = 1065353216;
  v10 = (_QWORD *)a1[1];
  *(_QWORD *)(v8 + 8) = 0LL;
  *(_DWORD *)(v8 + 16) = 0;
  *(_QWORD *)(v8 + 28) = 0LL;
  *(_DWORD *)(v8 + 36) = 0;
  *(_QWORD *)(v8 + 48) = 0LL;
  *(_DWORD *)(v8 + 56) = 0;
  *v10 = a3;
  *(_QWORD *)(a1[1] + 8LL) = a3;
  *(_QWORD *)(a1[1] + 16LL) = a3;
  do
    *(_BYTE *)(a1[1] + v9++ + 24) = 0;
  while ( v9 < 2 );
  return a1;
}
