/*
 * XREFs of ??$?0AEBUpiecewise_construct_t@std@@V?$tuple@AEBI@1@V?$tuple@$$V@1@@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBIUStereoscopicViewData@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@U?$pair@$$CBIUStereoscopicViewData@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBIUStereoscopicViewData@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBI@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1802A317C
 * Callers:
 *     ??$_Try_emplace@AEBI$$V@?$map@IUStereoscopicViewData@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUStereoscopicViewData@@@std@@@3@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBIUStereoscopicViewData@@@std@@PEAX@std@@_N@1@AEBI@Z @ 0x1802A33F4 (--$_Try_emplace@AEBI$$V@-$map@IUStereoscopicViewData@@U-$less@I@std@@V-$allocator@U-$pair@$$CBIU.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180085FF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memset_0 @ 0x18010F5A8 (memset_0.c)
 *     ??0StereoscopicViewData@@QEAA@XZ @ 0x1802A34F8 (--0StereoscopicViewData@@QEAA@XZ.c)
 */

_QWORD *__fastcall std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<unsigned int const,StereoscopicViewData>,void *>>>::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<unsigned int const,StereoscopicViewData>,void *>>>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD **a5)
{
  __int64 v7; // rax
  StereoscopicViewData *v8; // rbx
  __int64 v9; // rcx

  *a1 = a2;
  a1[1] = 0LL;
  v7 = std::_Allocate<16,std::_Default_allocate_traits,0>(0xE0uLL);
  a1[1] = v7;
  v8 = (StereoscopicViewData *)(v7 + 32);
  *(_DWORD *)(v7 + 28) = **a5;
  memset_0((void *)(v7 + 32), 0, 0xC0uLL);
  StereoscopicViewData::StereoscopicViewData(v8);
  *(_QWORD *)a1[1] = a3;
  v9 = 0LL;
  *(_QWORD *)(a1[1] + 8LL) = a3;
  *(_QWORD *)(a1[1] + 16LL) = a3;
  do
    *(_BYTE *)(a1[1] + v9++ + 24) = 0;
  while ( v9 < 2 );
  return a1;
}
