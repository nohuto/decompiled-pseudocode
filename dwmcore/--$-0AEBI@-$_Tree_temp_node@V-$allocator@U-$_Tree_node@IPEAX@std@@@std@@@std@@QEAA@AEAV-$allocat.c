/*
 * XREFs of ??$?0AEBI@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@IPEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@IPEAX@std@@@1@PEAU?$_Tree_node@IPEAX@1@AEBI@Z @ 0x1802131D8
 * Callers:
 *     ??$_Emplace@AEBI@?$_Tree@V?$_Tset_traits@IU?$less@I@std@@V?$allocator@I@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@IPEAX@std@@_N@1@AEBI@Z @ 0x180213434 (--$_Emplace@AEBI@-$_Tree@V-$_Tset_traits@IU-$less@I@std@@V-$allocator@I@2@$0A@@std@@@std@@IEAA-A.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180085FF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::_Tree_temp_node<std::allocator<std::_Tree_node<unsigned int,void *>>>::_Tree_temp_node<std::allocator<std::_Tree_node<unsigned int,void *>>>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        _DWORD *a4)
{
  __int64 v7; // rax
  __int64 v8; // rcx

  *a1 = a2;
  a1[1] = 0LL;
  v7 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x20uLL);
  a1[1] = v7;
  v8 = 0LL;
  *(_DWORD *)(v7 + 28) = *a4;
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
